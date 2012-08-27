// $Id: Test_impl.h 91742 2010-09-13 18:23:17Z johnnyw $

#ifndef TEST_IMPL_HPP
#define TEST_IMPL_HPP

#include "TestS.h"

class Server_impl : public virtual POA_Test::Server
{
public:
  Server_impl (CORBA::ORB_ptr orb);

  virtual void shutdown ();

private:
  CORBA::ORB_var orb_;
};

#endif /* TEST_IMPL_HPP */
