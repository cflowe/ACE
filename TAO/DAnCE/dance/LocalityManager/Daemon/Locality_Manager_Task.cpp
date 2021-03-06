/**
 * @file Locality_Manager_Task.cpp
 * @author William R. Otte
 * $Id: Locality_Manager_Task.cpp 95549 2012-02-23 11:59:40Z johnnyw $
 *
 * Implementation and main for LocalityManager.
 */

#include "Locality_Manager_Task.h"

#include "ace/OS_NS_string.h"
#include "ace/Log_Msg.h"
#include "ace/Get_Opt.h"
#include "ace/Env_Value_T.h"
#include "tao/ORB.h"
#include "tao/PortableServer/PortableServer.h"
#include "dance/Logger/Logger_Service.h"
#include "dance/Logger/Log_Macros.h"
#include "dance/DAnCE_Utility.h"
#include "dance/LocalityManager/Daemon/Locality_Manager_Impl.h"

namespace DAnCE
{
  LocalityManager_Task::Error::Error(const ACE_CString &err) : err_(err)
  {
  }

  LocalityManager_Task::LocalityManager_Task (int argc, ACE_TCHAR **argv)
  {
    DANCE_TRACE ("DAnCE_LocalityManager_Task::DAnCE_LocalityManager_Task ()");

    this->orb_ = CORBA::ORB_init (argc, argv);

    Logger_Service
      *dlf = ACE_Dynamic_Service<Logger_Service>::instance ("DAnCE_Logger");

    if (dlf)
      {
        dlf->init (argc, argv);
      }

    this->parse_args (argc, argv);

    DANCE_DEBUG (DANCE_LOG_MINOR_EVENT,
                 (LM_TRACE, DLINFO
                  ACE_TEXT ("DAnCE_LocalityManager_Task::DAnCE_LocalityManager_Task - ")
                  ACE_TEXT ("DAnCE_LocalityManager_Task_ object created.\n")));
  }

  int
  LocalityManager_Task::svc (void)
  {
    DANCE_TRACE ("LocalityManager_Task::svc");

    DANCE_DEBUG (DANCE_LOG_TRACE,
                 (LM_TRACE, DLINFO
                  ACE_TEXT ("LocalityManager_Task::svc - ")
                  ACE_TEXT ("Activating the root POA\n")));

    CORBA::Object_var object =
      this->orb_->resolve_initial_references ("RootPOA");

    PortableServer::POA_var root_poa =
      PortableServer::POA::_narrow (object.in ());

      {
        PortableServer::POAManager_var poa_manager =
          root_poa->the_POAManager ();

        poa_manager->activate ();

        DANCE_DEBUG (DANCE_LOG_TRACE,
                     (LM_TRACE, DLINFO
                      ACE_TEXT ("LocalityManager_Task::svc - ")
                      ACE_TEXT ("Creating server implementation object\n")));

        DAnCE::LocalityManager_i *lm_srv = 0;
        ACE_NEW_NORETURN (lm_srv,
                          LocalityManager_i (this->uuid_,
                                             this->plugin_config_,
                                             this->orb_.in (),
                                             root_poa.in ()));

        if (lm_srv == 0)
          {
            DANCE_ERROR (DANCE_LOG_TERMINAL_ERROR,
                         (LM_CRITICAL,
                          ACE_TEXT ("LocalityManager_Task::run - ")
                          ACE_TEXT ("Out of memory error while allocating servant.")));
            throw Error ("Out of memory whilst allocating servant.");
          }

        PortableServer::ServantBase_var safe_config = lm_srv;
        PortableServer::ObjectId_var id =
          root_poa->activate_object (lm_srv);
        CORBA::Object_var lm_object = root_poa->id_to_reference (id.in ());
        DAnCE::LocalityManager_var lm =
          DAnCE::LocalityManager::_narrow (lm_object.in ());

        if (this->output_file_ != ACE_TEXT(""))
          {
            CORBA::String_var ior = this->orb_->object_to_string (lm.in ());
            ::DAnCE::Utility::write_IOR (this->output_file_.c_str (), ior.in ());
          }

        if (this->callback_ior_str_ != ACE_TEXT(""))
          {
            DANCE_DEBUG (DANCE_LOG_TRACE,
                         (LM_TRACE, DLINFO
                          ACE_TEXT ("LocalityManager_Task::run - ")
                          ACE_TEXT ("Resolving callback IOR\n")));
            CORBA::Object_var obj =
              this->orb_->string_to_object (this->callback_ior_str_.c_str ());
            LocalityManagerActivator_var sa (LocalityManagerActivator::_narrow (obj));

            if (CORBA::is_nil (sa.in ()))
              {
                DANCE_DEBUG (DANCE_LOG_ERROR,
                             (LM_ERROR, DLINFO
                              ACE_TEXT ("LocalityManager_Task::svc - ")
                              ACE_TEXT ("Failed to narrow callback IOR [%s]\n"),
                              this->callback_ior_str_.c_str ()));
                throw Error ("Failed to narrow callback IOR");
              }

            {
              Deployment::Properties *cf = 0;
              ACE_NEW_NORETURN (cf, Deployment::Properties (0));

              if  (cf == 0)
                {
                  DANCE_ERROR (DANCE_LOG_ERROR,
                               (LM_CRITICAL, ACE_TEXT ("LocalityManager_Task::run - ")
                                ACE_TEXT ("Out of memory error while allocating config ")
                                ACE_TEXT ("values.")));
                }
              else
                {
                  this->config_ = cf;
                }
            }

            // Make callback.
            DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                         (LM_TRACE, DLINFO
                          ACE_TEXT ("LocalityManager_Task::svc - ")
                          ACE_TEXT ("Making callback on my Activator\n")));

            try
              {
                // Callback to NodeApplication to get configuration
                sa->locality_manager_callback (lm.in (),
                  ACE_TEXT_ALWAYS_CHAR (this->uuid_.c_str ()),
                  this->config_.out ());

                DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                             (LM_TRACE, DLINFO
                              ACE_TEXT ("LocalityManager_Task::svc - ")
                              ACE_TEXT ("Configuration received, got %u values\n"),
                              this->config_->length ()));

                lm_srv->init (this->config_.in ());

                DANCE_DEBUG (DANCE_LOG_MINOR_EVENT,
                             (LM_NOTICE, DLINFO
                              ACE_TEXT ("LocalityManager_Task::svc - ")
                              ACE_TEXT ("Configuration complete for component server %C\n"),
                              this->uuid_.c_str ()));

                sa->configuration_complete (ACE_TEXT_ALWAYS_CHAR (this->uuid_.c_str ()));
              }
            catch (const CORBA::BAD_PARAM &)
              {
                DANCE_ERROR (DANCE_LOG_ERROR,
                             (LM_ERROR, DLINFO
                              ACE_TEXT ("LocalityManager_Task::svc - ")
                              ACE_TEXT ("The Callback IOR provided pointed to the ")
                              ACE_TEXT ("wrong Activator\n")));
                throw Error ("Bad callback IOR");
              }
            catch (const CORBA::Exception &ex)
              {
                DANCE_ERROR (DANCE_LOG_ERROR,
                                  (LM_ERROR, DLINFO
                                    ACE_TEXT ("LocalityManager_Task::svc - ")
                                    ACE_TEXT ("Caught CORBA Exception while ")
                                    ACE_TEXT ("calling back: %C\n"),
                                    ex._info ().c_str ()));
                throw Error (ex._info ().c_str ());
              }
            catch (...)
              {
                DANCE_ERROR (DANCE_LOG_ERROR,
                              (LM_ERROR, DLINFO
                              ACE_TEXT ("LocalityManager_Task::svc - ")
                              ACE_TEXT ("Caught exception while calling back\n")));
                throw Error ("Caught exception while calling back");
              }
          }
        else
          {
            DANCE_DEBUG (DANCE_LOG_WARNING,
                         (LM_WARNING, DLINFO
                          ACE_TEXT ("LocalityManager_Task::svc - ")
                          ACE_TEXT ("Initializing ComponentServer without ServantActivator ")
                          ACE_TEXT ("callback\n")));
            lm_srv->init (0);
          }

        this->orb_->run ();

        DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                     (LM_TRACE, DLINFO
                      ACE_TEXT ("LocalityManager_Task::svc - ")
                      ACE_TEXT ("ORB Event loop completed.\n")));
      }

    root_poa->destroy (1, 1);
    root_poa = ::PortableServer::POA::_nil ();

    this->orb_->destroy ();
    this->orb_ = ::CORBA::ORB::_nil ();

    return 0;
  }

  void
  LocalityManager_Task::run (void)
  {
    DANCE_TRACE ("LocalityManager_Task::run");

    DANCE_DEBUG (DANCE_LOG_MINOR_EVENT,
                 (LM_DEBUG, DLINFO
                  ACE_TEXT ("LocalityManager_Task::run - Starting ORB\n")));
    this->svc ();
    DANCE_DEBUG (DANCE_LOG_EVENT_TRACE,
                 (LM_INFO,
                  DLINFO ACE_TEXT ("LocalityManager_Task::run - ORB has ")
                  ACE_TEXT ("shutdown, terminating ComponentServer\n")));
  }

  void
  LocalityManager_Task::parse_args (int argc, ACE_TCHAR **argv)
  {
    DANCE_TRACE ("LocalityManager_Task::parse_args");

    DANCE_DEBUG (DANCE_LOG_TRACE,
                 (LM_TRACE, DLINFO
                  ACE_TEXT ("LocalityManager_Task::parse_args - ")
                  ACE_TEXT ("parsing arguments...\n")));

    ACE_Get_Opt opts (argc, argv, ACE_TEXT("hu:c:p:"), 1, 0,
                      ACE_Get_Opt::RETURN_IN_ORDER);
    opts.long_option (ACE_TEXT("uuid"), 'u', ACE_Get_Opt::ARG_REQUIRED);
    opts.long_option (ACE_TEXT("callback-ior"), 'c', ACE_Get_Opt::ARG_REQUIRED);
    opts.long_option (ACE_TEXT("help"), 'h');
    opts.long_option (ACE_TEXT("log-level"),'l', ACE_Get_Opt::ARG_REQUIRED);
    opts.long_option (ACE_TEXT("trace"),'t', ACE_Get_Opt::NO_ARG);
    opts.long_option (ACE_TEXT("output-ior"),'o', ACE_Get_Opt::ARG_REQUIRED);
    opts.long_option (ACE_TEXT("plugin-config"),'p', ACE_Get_Opt::ARG_REQUIRED);

    int c = 0;
    while ((c = opts ()) != -1)
      {
        DANCE_DEBUG (DANCE_LOG_DETAILED_TRACE,
                     (LM_TRACE, DLINFO
                      ACE_TEXT ("LocalityManager_Task::parse_args - ")
                      ACE_TEXT ("Found option: \"%s\" with argument \"%s\"\n"),
                      opts.last_option (), opts.opt_arg ()));

        switch (c)
          {
          case 'u':
            DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                         (LM_DEBUG, DLINFO
                          ACE_TEXT ("LocalityManager_Task::parse_args - ")
                          ACE_TEXT ("uuid is %s\n"),
                          opts.opt_arg ()));
            this->uuid_ = opts.opt_arg ();
            break;

          case 'c':
            DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                         (LM_DEBUG, DLINFO
                          ACE_TEXT ("LocalityManager_Task::parse_args - ")
                          ACE_TEXT ("callback ior is %s\n"),
                          opts.opt_arg ()));
            this->callback_ior_str_ = opts.opt_arg ();
            break;

          case 'l':
            {
              continue; // no-op, already taken care of
            }

          case 't':
            continue; // already taken care of

          case 'o':
            DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                         (LM_DEBUG, DLINFO
                          ACE_TEXT ("LocalityManager_Task::parse_args - ")
                          ACE_TEXT ("IOR Output file: %s\n"),
                          opts.opt_arg ()));
            this->output_file_ = opts.opt_arg ();
            break;

          case 'p':
            DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                         (LM_DEBUG, DLINFO
                          ACE_TEXT ("LocalityManager_Task::parse_args - ")
                          ACE_TEXT ("Adding <%s> to plugin config list\n"),
                          opts.opt_arg ()));
            this->plugin_config_.push_back (ACE_TEXT_ALWAYS_CHAR (opts.opt_arg ()));
            break;

          case 'h':
            this->usage ();
            throw Error ("Command line help requested, bailing out....");

          default:
            DANCE_ERROR (DANCE_LOG_ERROR, (LM_ERROR, DLINFO
                                           ACE_TEXT (" Unknown option: %s\n"),
                                           opts.last_option ()));
            this->usage ();
            ACE_CString err ("Unknown option ");
            err += ACE_TEXT_ALWAYS_CHAR (opts.last_option ());
            throw Error (err);
          }
      }

    // check required options.
    if (this->uuid_ == ACE_TEXT (""))
      throw Error ("Option required: -u|--uuid");
    if (this->callback_ior_str_ == ACE_TEXT(""))
      {
        DANCE_ERROR (DANCE_LOG_WARNING,
                     (LM_WARNING, DLINFO
                      ACE_TEXT ("LocalityManager_Task::parse_args - ")
                      ACE_TEXT ("Starting ComponentServer without a callback IOR\n")));
      }

    if (this->plugin_config_.size () == 0)
      {
        DANCE_DEBUG (DANCE_LOG_MAJOR_DEBUG_INFO,
                     (LM_DEBUG, DLINFO
                      ACE_TEXT ("LocalityManager_Task::parse_args - ")
                      ACE_TEXT ("No plugin config specified, adding default at ")
                      ACE_TEXT ("DANCE_ROOT/bin/ciao.localityconfig\n")));

        ACE_Env_Value<const ACE_TCHAR *> dance_env (ACE_TEXT ("DANCE_ROOT"),
                                                    ACE_TEXT (""));
        std::string filename (ACE_TEXT_ALWAYS_CHAR (dance_env));
        filename += "/bin/ciao.localityconfig";
        this->plugin_config_.push_back (filename.c_str ());
      }
  }

  void
  LocalityManager_Task::usage (void)
  {
    DANCE_TRACE ("LocalityManager_Task::usage");
    // Shouldn't be subject to CIAO's logging policy
    ACE_ERROR ((LM_EMERGENCY,
                ACE_TEXT ("Usage: dance_locality_manager <options>\n")
                ACE_TEXT ("Options:\n")
                ACE_TEXT ("\t-h|--help\t\t\t\tShow help\n")
                ACE_TEXT ("\t-l|--log-level <level>\t\t\tSets log level (default 5). 1 - most detailed.\n")
                ACE_TEXT ("\t-u|--uuid <uuid> \t\t\tSets UUID of spawned component server (required)\n")
                ACE_TEXT ("\t-c|--callback-ior <string ior>\t\tSets callback url for the spawning Activator.\n")
                ACE_TEXT ("\t-o|--output-ior <filename>\t\tOutputs the IOR of the component server object to file\n")
                ACE_TEXT ("\t-p|--plugin-config <filename>\t\tReads specified file to configure plugins\n")
                ));

  }
}
