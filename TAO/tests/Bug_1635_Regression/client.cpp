//
// $Id: client.cpp 78703 2007-06-30 18:43:31Z sowayaa $
//
#include "tao/ORB.h"

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{

  try
    {
      CORBA::ORB_var orb =
        CORBA::ORB_init (argc, argv);
    }
  catch (const CORBA::Exception& ex)
    {
      ex._tao_print_exception ("SERVER (%P): Caught exception:");
      return 1;
    }

  return 0;
}
