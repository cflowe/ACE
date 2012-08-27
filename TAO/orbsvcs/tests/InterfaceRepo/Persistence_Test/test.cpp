// -*- C++ -*-
// $Id: test.cpp 91675 2010-09-08 19:09:19Z johnnyw $

#include "Ptest.h"

int ACE_TMAIN (int argc, ACE_TCHAR *argv[])
{
  Ptest ptest;

  int retval = ptest.init (argc, argv);

  if (retval == -1)
    return 1;

  retval = ptest.run ();

  return retval;
}
