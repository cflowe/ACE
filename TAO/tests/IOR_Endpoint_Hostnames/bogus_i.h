//
// $Id: bogus_i.h 77008 2007-02-12 11:52:38Z johnnyw $
//

#ifndef bogus_h
#define bogus_h
#include /**/ "ace/pre.h"

#include "bogusS.h"

class bogus
  : public virtual POA_Test::bogus
{
public:
  bogus ();
  virtual ~bogus ();

  virtual void noop (void);
};

#include /**/ "ace/post.h"
#endif //bogus_h
