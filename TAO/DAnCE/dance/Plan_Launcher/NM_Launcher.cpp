// $Id: NM_Launcher.cpp 91814 2010-09-17 08:33:40Z johnnyw $

#include "NM_Launcher.h"

namespace DAnCE
{
  NM_Launcher::NM_Launcher (CORBA::ORB_ptr orb,
                            __Base::Manager_ptr manager)
    : __Base (orb, manager)
  {
  }



  NM_Launcher::~NM_Launcher (void)
  {

  }
}
