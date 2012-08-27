//
// $Id: Hello.h 77697 2007-03-13 17:32:43Z elliott_c $
//

#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::Hello interface
class Hello
  : public virtual POA_Test::Hello
{
public:
  /// Constructor
  Hello (void);
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */
