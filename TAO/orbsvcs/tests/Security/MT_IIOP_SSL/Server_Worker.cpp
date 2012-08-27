// $Id: Server_Worker.cpp 77459 2007-02-28 15:00:03Z johnnyw $
#include "Server_Worker.h"

Server_Worker::Server_Worker (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}

int
Server_Worker::svc (void)
{
  try
    {
      this->orb_->run ();
    }
  catch (const CORBA::Exception&)
    {
    }
  return 0;
}
