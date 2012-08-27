//
// $Id: Hello.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//
#include "Hello.h"

Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Hello::method(Test::Hello_out r)
{
  Test::Hello_var v;
  r = v;
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}
