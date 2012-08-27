/* -*- C++ -*- */
//=============================================================================
/**
 *  @file   common.h
 *
 *  $Id: common.h 93650 2011-03-28 08:44:53Z johnnyw $
 *
 * A couple of useful functions
 *
 *
 *  @author Chad Elliott <elliott_c@ociweb.com>
 */
//=============================================================================

#ifndef TAO_COMMON_H
#define TAO_COMMON_H

#include /**/ "ace/pre.h"

#include "notify_test_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/CosNotifyChannelAdminS.h"


TAO_NOTIFY_TEST_Export
const char* Any_String (const CORBA::Any& any);

#include /**/ "ace/post.h"
#endif /* TAO_COMMON_H */
