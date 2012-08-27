//
// $Id: MyInterfaceImpl.h 77008 2007-02-12 11:52:38Z johnnyw $
//

#include "TestS.h"

class MyInterfaceImpl
  : public virtual POA_MyInterface
{
  public:
  MyInterfaceImpl (CORBA::ORB_ptr orb);

  static const char* my_string;

  // = The skeleton methods
  virtual CORBA::Boolean myMethod (const char* stringParam);

private:
  CORBA::ORB_var orb_;
};
