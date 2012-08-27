//
// $Id: Test_i.cpp 94802 2011-10-20 09:46:10Z mcorino $
//
#include "Test_i.h"

Test_i::Test_i(CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

Test_i::~Test_i()
{
}

void
Test_i::test_method (void)
{
}

void
Test_i::shutdown (void)
{
  this->orb_->shutdown (0);
}
