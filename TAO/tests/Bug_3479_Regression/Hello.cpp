//
// $Id: Hello.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//
#include "Hello.h"

Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Hello::get_string (CORBA::String_out string_out)
{
  string_out = CORBA::string_dup ("Hello there!");
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}
