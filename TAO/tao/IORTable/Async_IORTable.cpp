/* -*- C++ -*- */

// =================================================================
/**
 * @file Async_IORTable.cpp
 *
 * $Id: Async_IORTable.cpp 97067 2013-04-22 20:01:29Z mesnier_p $
 *
 * @author Phil Mesnier <mesnier_p@ociweb.com>
 *
 */
// =================================================================

#include "tao/IORTable/Async_IORTable.h"
#include "tao/IORTable/Async_Table_Adapter.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

int
TAO_Async_IORTable_Initializer::init (void)
{
  return ACE_Service_Config::process_directive (ace_svc_desc_TAO_Async_Table_Adapter_Factory);
}

TAO_END_VERSIONED_NAMESPACE_DECL
