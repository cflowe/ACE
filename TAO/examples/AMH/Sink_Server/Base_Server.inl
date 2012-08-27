// $Id: Base_Server.inl 46793 2002-10-18 01:52:49Z mayur $

#include "Base_Server.h"

ACE_INLINE CORBA::ORB_ptr
Base_Server::orb (void)
{
  return this->orb_.in();
}
