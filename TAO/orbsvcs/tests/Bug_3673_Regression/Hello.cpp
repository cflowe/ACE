//
// $Id: Hello.cpp 97131 2013-05-13 19:18:55Z mesnier_p $
//
#include "Hello.h"



Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

char *
Hello::get_string (void)
{
  return CORBA::string_dup ("Hello there!");
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}
