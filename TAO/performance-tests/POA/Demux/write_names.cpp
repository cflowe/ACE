//$Id: write_names.cpp 78652 2007-06-29 12:25:06Z sowayaa $
#include <ace/OS_NS_stdio.h>

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{

  for(int i=0; i<1000; i++)
    ACE_OS::printf ("%09d\n",i);
}
