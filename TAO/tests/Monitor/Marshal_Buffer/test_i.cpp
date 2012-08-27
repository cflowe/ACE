// $Id: test_i.cpp 81492 2008-04-28 14:35:55Z johnnyw $

#include "ace/streams.h"

#include "test_i.h"

char *
test_impl::test_op (const char * in_arg)
{
  cout << "servant got " << ACE_OS::strlen (in_arg) << " bytes" << endl;
  return CORBA::string_dup (in_arg);
}
