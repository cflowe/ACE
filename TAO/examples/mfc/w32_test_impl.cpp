#include "StdAfx.h"

// $Id: w32_test_impl.cpp 91816 2010-09-17 08:35:56Z johnnyw $

#include "w32_test_impl.h"

W32_Test_Impl::~W32_Test_Impl (void)
{
}

W32_Test_Impl::W32_Test_Impl (void)
{
  blabla = 1;
}


char *
W32_Test_Impl::getresponse (CORBA::Long respnr)
{
  char *myreturn;

  switch (respnr)
    {
    case 1:
      myreturn = CORBA::string_dup ("Parameter 1");
      break;
    case 2:
      myreturn = CORBA::string_dup ("Parameter 2");
      break;
    default:
      myreturn = CORBA::string_dup ("Parameter unknown!");
      break;
    }

  return myreturn;
}
