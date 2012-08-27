//
// $Id: Test_i.h 80606 2008-02-12 10:31:14Z smcqueen $
//

#ifndef TEST_I_H
#define TEST_I_H
#include /**/ "ace/pre.h"

#include "TestS.h"

class test_i
  : public virtual POA_test
{
public:
  test_i (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual void send_stuff (const char* string);

  virtual void shutdown (void);

private:
  CORBA::ORB_var orb_;
};

#include /**/ "ace/post.h"
#endif /* TEST_I_H */
