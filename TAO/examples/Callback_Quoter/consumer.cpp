// $Id: consumer.cpp 79317 2007-08-11 17:28:39Z sowayaa $

#include "Consumer_Handler.h"

// This function runs the Callback Quoter Consumer application.

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  Consumer_Handler consumer;

  ACE_DEBUG ((LM_DEBUG,
              "\n\t***Consumer***\n\n"));

  if (consumer.init (argc, argv) == -1)
    return -1;
  else
    return consumer.run ();
}
