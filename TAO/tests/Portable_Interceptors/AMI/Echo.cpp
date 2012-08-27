/**
 * @file Echo.cpp
 *
 * $Id: Echo.cpp 91652 2010-09-08 14:42:59Z johnnyw $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 */
#include "Echo.h"

Echo::Echo(CORBA::ORB_ptr orb)
  : orb_(CORBA::ORB::_duplicate(orb))
{
}

char *
Echo::echo_operation(char const * the_input)
{
  return CORBA::string_dup(the_input);
}

void
Echo::shutdown(void)
{
  this->orb_->shutdown(0);
}
