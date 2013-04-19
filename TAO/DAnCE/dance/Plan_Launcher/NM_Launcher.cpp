// $Id: NM_Launcher.cpp 96194 2012-10-12 11:19:20Z johnnyw $

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
