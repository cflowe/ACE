//$Id: client.cpp 96986 2013-04-11 16:39:42Z mesnier_p $

# include "Echo_Client_i.h"

// The client program for the application.

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Echo_Client_i client;

  ACE_DEBUG ((LM_DEBUG,
              ACE_TEXT ("\nEcho client\n\n")));

  if (client.run ("Echo",
                  argc,
                  argv) == -1)
    return -1;
  else
    return 0;
}
