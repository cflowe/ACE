// $Id: Client_Task.cpp 91652 2010-09-08 14:42:59Z johnnyw $

#include "Client_Task.h"

Client_Task::Client_Task (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

int
Client_Task::svc (void)
{

  try
    {
      this->orb_->run ();
    }
  catch (const CORBA::Exception&)
    {
      return -1;
    }

  return 0;
}
