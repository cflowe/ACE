// $Id: test_i.h 77008 2007-02-12 11:52:38Z johnnyw $

#ifndef TAO_NO_SERVER_MT_CLIENT_TEST_I_H
#define TAO_NO_SERVER_MT_CLIENT_TEST_I_H

#include "testS.h"

class Simple_Server_i : public POA_Simple_Server
{
  // = TITLE
  //   Simpler Server implementation
  //
  // = DESCRIPTION
  //   Implements the Simple_Server interface in test.idl
  //
public:
  Simple_Server_i (CORBA::ORB_ptr orb);
  // ctor

  // = The Simple_Server methods.
  void test_method (void);

  void shutdown (void);

private:
  CORBA::ORB_var orb_;
};

#endif /* TAO_MT_CLIENT_TEST_I_H */
