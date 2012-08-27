// $Id: bug_689_regression_i.cpp 92094 2010-09-29 19:57:42Z mitza $
#include "bug_689_regression_i.h"

bug_689_regression_i::bug_689_regression_i (CORBA::ORB_ptr orb)
 : orb_ (CORBA::ORB::_duplicate (orb))
{
}

bug_689_regression_i::~bug_689_regression_i (void)
{
}

void
bug_689_regression_i::shutdown (void)
{
  this->orb_->shutdown (0);
}

void bug_689_regression_i::noop (void)
{
}
