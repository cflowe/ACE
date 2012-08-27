//$Id: test.h 81961 2008-06-16 00:55:02Z sowayaa $

#include "ace/Log_Msg.h"

class test_impl :public test
{
 public:
  virtual void bar (CORBA::VoidData something)

  {
    ACE_DEBUG ((LM_DEBUG,
                "Void Data Passed to method %d\n",
                *(int*)something));
  }
};

