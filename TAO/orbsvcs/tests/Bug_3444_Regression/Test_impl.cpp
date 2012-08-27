// $Id: Test_impl.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "Test_impl.h"



Server_impl::Server_impl (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void Server_impl::shutdown ()
{
  this->orb_->shutdown (0);
}
