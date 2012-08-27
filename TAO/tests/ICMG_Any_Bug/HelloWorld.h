//
// $Id: HelloWorld.h 77008 2007-02-12 11:52:38Z johnnyw $
//

#ifndef HELLOWORLD_H
#define HELLOWORLD_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::HelloWorld interface
///
class HelloWorld
  : public virtual POA_Test::HelloWorld
{
public:

  HelloWorld (void);
  /// Constructor

  virtual char * get_string (void);

};

#include /**/ "ace/post.h"
#endif /* HELLOWORLD_H */
