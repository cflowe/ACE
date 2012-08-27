// $Id: client.cpp 83322 2008-10-20 09:51:35Z vzykov $

# include "Grid_Client_i.h"

// The client program for the application.

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Grid_Client_i client;

  ACE_DEBUG ((LM_DEBUG,
              ACE_TEXT ("\nGrid client\n\n")));

  if (client.run ("Grid", argc, argv) == -1)
    return -1;
  else
    return 0;
}
