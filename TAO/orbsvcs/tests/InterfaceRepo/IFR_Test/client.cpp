// -*- C++ -*-
// $Id: client.cpp 91675 2010-09-08 19:09:19Z johnnyw $

#include "Admin_Client.h"

int ACE_TMAIN (int argc, ACE_TCHAR *argv[])
{
  Admin_Client admin_client;

  int retval = admin_client.init (argc, argv);

  if (retval == -1)
    {
      return 1;
    }

  return admin_client.run ();
}
