
//=============================================================================
/**
 *  @file    valuetype_init_ci.cpp
 *
 *  $Id: valuetype_init_ci.cpp 95536 2012-02-20 12:34:23Z johnnyw $
 *
 *  Visitor generating code for Valuetypes factory in the client header
 *  (see IDL to C++ mapping)
 *
 *
 *  @author Boris Kolpackov <bosk@ipmce.ru>
 */
//=============================================================================

#include "valuetype.h"

be_visitor_valuetype_init_ci::be_visitor_valuetype_init_ci (
    be_visitor_context *ctx
  )
  : be_visitor_valuetype_init (ctx)
{
}

be_visitor_valuetype_init_ci::~be_visitor_valuetype_init_ci (void)
{
}

