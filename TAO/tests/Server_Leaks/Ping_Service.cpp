//
// $Id: Ping_Service.cpp 91648 2010-09-08 13:25:56Z johnnyw $
//
#include "Ping_Service.h"

Ping_Service::Ping_Service (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Ping_Service::ping (void)
{
}

void
Ping_Service::shutdown (void)
{
  this->orb_->shutdown (0);
}
