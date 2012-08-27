// $Id: gateway-ec.cpp 78770 2007-07-04 05:19:15Z sowayaa $

#include "Gateway_EC.h"

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Gateway_EC test;

  if (test.run (argc, argv) == -1)
    return 1;

  return 0;
}

