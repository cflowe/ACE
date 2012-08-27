// $Id: testImpl.h 77008 2007-02-12 11:52:38Z johnnyw $

#include "testS.h"

class TestImpl: public POA_SimpleStrings
{
public:
  TestImpl(CORBA::ORB_ptr orb);

  virtual void get_strings (ArrayOfString_out strings);

private:
  CORBA::ORB_var orb_;
};
