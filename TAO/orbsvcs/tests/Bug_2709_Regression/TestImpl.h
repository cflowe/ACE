// $Id: TestImpl.h 77020 2007-02-12 13:56:49Z johnnyw $

#include "tao/ORB.h"
#include "TestS.h"

class TestImpl
  : public virtual POA_Test
{
public:
  TestImpl (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual void myMethod (void);

  virtual void shutdown (void);

private:
  CORBA::ORB_var orb_;
};
