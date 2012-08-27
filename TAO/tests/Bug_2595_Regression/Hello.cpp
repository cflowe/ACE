//
// $Id: Hello.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//
#include "Hello.h"

Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Hello::op (
        ::Test::Fls_out fstruct,
        ::Test::Vls_out vstruct
      )
{
  Test::Fls a = {5, 1.0};
  fstruct = a;
  vstruct = new Test::Vls;
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}
