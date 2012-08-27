// -*- C++ -*-
// $Id: consumer.cpp 84685 2009-03-02 22:49:17Z mesnier_p $

#include "Filter.h"

int
ACE_TMAIN (int argc, ACE_TCHAR *argv [])
{
  FilterClient client;

  try
    {
      client.init_consumer (argc, argv); //Init the Client

      client.run_consumer ();
    }
  catch (const CORBA::UserException& ue)
    {
      ue._tao_print_exception (
             "TLS_Client user error: ");
      return 1;
    }
  catch (const CORBA::SystemException& se)
    {
      se._tao_print_exception ("Consumer system error: ");
      return 1;
    }

  return 0;
}
