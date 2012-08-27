
//=============================================================================
/**
 *  @file    valuebox.cpp
 *
 *  $Id: valuebox.cpp 95536 2012-02-20 12:34:23Z johnnyw $
 *
 *  Visitor for generation of code for valuebox
 *
 *
 *  @author Gary Maxey
 */
//=============================================================================

#include "valuebox.h"

be_visitor_valuebox::be_visitor_valuebox (be_visitor_context *ctx)
  : be_visitor_decl (ctx)
{
}

be_visitor_valuebox::~be_visitor_valuebox (void)
{
}

// This method must be overridden by the derived valuebox visitors.
int
be_visitor_valuebox::visit_valuebox (be_valuebox *)
{
  return -1;
}

