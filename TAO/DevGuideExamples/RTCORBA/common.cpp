// $Id: common.cpp 83358 2008-10-21 23:02:02Z sowayaa $

#include "common.h"

CORBA::ULong
get_total_lanes()
{
#if defined (linux)
  return 1;
#elif defined (ACE_CONFIG_WIN32_H)
  return 3;
#else
  return 5;
#endif
}

CORBA::Short
get_increment()
{
  return 1;
}

