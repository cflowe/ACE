// $Id: ORT_test_i.cpp 91649 2010-09-08 13:44:26Z johnnyw $

#include "ORT_test_i.h"

ORT_test_i::ORT_test_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

CORBA::Boolean
ORT_test_i::request_server (void)
{
  return 0;
}

void
ORT_test_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
