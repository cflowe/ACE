//
// $Id: Server_Task.cpp 91648 2010-09-08 13:25:56Z johnnyw $
//
#include "Server_Task.h"

Server_Task::Server_Task (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

int
Server_Task::svc (void)
{
  try
    {
      this->orb_->run ();
    }
  catch (const CORBA::Exception&){}
  return 0;
}
