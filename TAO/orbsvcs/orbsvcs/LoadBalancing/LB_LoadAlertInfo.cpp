// $Id: LB_LoadAlertInfo.cpp 91682 2010-09-09 07:20:23Z johnnyw $

#include "orbsvcs/LoadBalancing/LB_LoadAlertInfo.h"
#include "orbsvcs/PortableGroup/PG_Operators.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_LB_LoadAlertInfo::TAO_LB_LoadAlertInfo (void)
  : load_alert (),
    alerted (0)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
