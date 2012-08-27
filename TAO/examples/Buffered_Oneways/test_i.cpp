// $Id: test_i.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "test_i.h"



test_i::test_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
test_i::method (CORBA::ULong request_number)
{
  ACE_DEBUG ((LM_DEBUG,
              "server: Iteration %d @ %T\n",
              request_number));
}

void
test_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
