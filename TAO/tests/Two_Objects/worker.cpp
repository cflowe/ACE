//
// $Id: worker.cpp 80235 2007-12-11 20:14:25Z johnnyw $
//

#include "worker.h"

Worker::Worker (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}

int
Worker::svc (void)
{

  try
    {
      this->orb_->run ();
    }
  catch (const CORBA::Exception& ex)
    {
      ex._tao_print_exception ("Exception caught:");
    }
  return 0;
}
