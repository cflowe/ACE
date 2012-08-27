//
// $Id: Shutdown_Helper.cpp 91649 2010-09-08 13:44:26Z johnnyw $
//
#include "Shutdown_Helper.h"

Shutdown_Helper::Shutdown_Helper (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Shutdown_Helper::shutdown (void)
{
  this->orb_->shutdown (0);
}
