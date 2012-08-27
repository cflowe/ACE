//
// $Id: First_i.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//

#include "First_i.h"
#include "tao/ORB_Core.h"
#include "tao/debug.h"
#include "tao/Transport_Cache_Manager.h"
#include "ace/Synch.h"
#include "ace/Auto_Event.h"

First_i::First_i (CORBA::ORB_ptr orb, ACE_Auto_Event &two_way_done)
  : orb_ (CORBA::ORB::_duplicate (orb)),
    two_way_done_(two_way_done)
{
}

void
First_i::oneway_method (void)
{
  ACE_DEBUG ((LM_DEBUG, "Oneway servant : (%P|%t) one way method called. About to wait for two way call completion\n"));

  two_way_done_.wait ();

  ACE_DEBUG ((LM_DEBUG, "Oneway servant : (%P|%t) woke up after wait\n"));
}
