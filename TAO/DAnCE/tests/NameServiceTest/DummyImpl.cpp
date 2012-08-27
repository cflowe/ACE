// $Id: DummyImpl.cpp 84414 2009-02-11 19:37:45Z wotte $
#include "DummyImpl.h"

namespace NameServiceTest
  {

    char * DummyImpl::sayHello (
    )
    {
      return CORBA::string_dup (this->helloSentence);
    }

  } // namespace ObjectLocatorTest

