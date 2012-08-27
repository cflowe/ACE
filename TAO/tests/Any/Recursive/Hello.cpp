// $Id: Hello.cpp 91649 2010-09-08 13:44:26Z johnnyw $

#include "Hello.h"

Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

CORBA::Any *
Hello::get_any (CORBA::Any const & the_any)
{
  CORBA::Any * retval = 0;

  ACE_NEW_THROW_EX (retval,
                    CORBA::Any (the_any),
                    CORBA::NO_MEMORY ());

  return retval;
}


void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}
