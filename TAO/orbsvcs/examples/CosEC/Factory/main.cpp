// -*- C++ -*-
// $Id: main.cpp 80730 2008-02-25 22:22:44Z sowayaa $

#include "FactoryDriver.h"
#include "orbsvcs/CosEvent/CEC_Default_Factory.h"

int
ACE_TMAIN(int argc, ACE_TCHAR *argv[])
{
  TAO_CEC_Default_Factory::init_svcs ();
  FactoryDriver driver;
  driver.start (argc, argv);
  return 0;
}
