// $Id: be_exception.h 89076 2010-02-18 22:54:36Z parsons $

#ifndef BE_EXCEPTION_H
#define BE_EXCEPTION_H

#include "be_structure.h"
#include "ast_exception.h"

class be_visitor;

class be_exception : public virtual AST_Exception,
                     public virtual be_structure

{
public:
  be_exception (UTL_ScopedName *n,
                bool local,
                bool abstract);

  // Cleanup function.
  virtual void destroy (void);

  // Visiting.
  virtual int accept (be_visitor *visitor);

  // Narrowing.
  DEF_NARROW_FROM_DECL (be_exception);
  DEF_NARROW_FROM_SCOPE (be_exception);
};

#endif // end of if !defined (...)
