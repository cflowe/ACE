//
// $Id: Foo_Bar.h 95052 2011-11-17 10:11:20Z mcorino $
//

#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::Hello interface
class Foo_Bar
  : public virtual POA_Test::Foo
{
public:
  /// Constructor
  Foo_Bar (CORBA::ORB_ptr orb);

  /// Dtor
  ~Foo_Bar (void);


private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */
