//
// $Id: simple_test_i.cpp 88211 2009-12-17 09:58:03Z vzykov $
//

#include "simple_test_i.h"

Simple_Test_i::Simple_Test_i (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Simple_Test_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
