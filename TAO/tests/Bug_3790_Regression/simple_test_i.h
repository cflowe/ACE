//
// $Id: simple_test_i.h 95052 2011-11-17 10:11:20Z mcorino $
//

#ifndef HELLO_H
#define HELLO_H

#include "simple_testS.h"

class Simple_Test_i
  : public virtual POA_simple::SimpleTest_T
{
public:
  /// Constructor
  Simple_Test_i (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#endif /* HELLO_H */
