// $Id: client.cpp 79317 2007-08-11 17:28:39Z sowayaa $

# include "Grid_Client_i.h"

// The client program for the application.

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Grid_Client_i client;

  ACE_DEBUG ((LM_DEBUG,
              "\nGrid client\n\n"));

  if (client.run ("Grid", argc, argv) == -1)
    return -1;
  else
    return 0;

}


