//
// $Id: Memory_Growth.cpp 91648 2010-09-08 13:25:56Z johnnyw $
//
#include "Memory_Growth.h"

Memory_Growth::Memory_Growth (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

void
Memory_Growth::ping (void)
{
  return;
}

void
Memory_Growth::shutdown (void)
{
  this->orb_->shutdown (0);
}
