// $Id: RTScheduler.cpp 91628 2010-09-07 11:11:12Z johnnyw $

#include "tao/RTScheduling/RTScheduler.h"
#include "tao/RTScheduling/RTScheduler_Loader.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTScheduler_Initializer::TAO_RTScheduler_Initializer (void)
{
  ACE_Service_Config::process_directive (ace_svc_desc_TAO_RTScheduler_Loader);
}

TAO_END_VERSIONED_NAMESPACE_DECL
