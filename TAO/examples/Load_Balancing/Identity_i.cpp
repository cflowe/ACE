/* -*- C++ -*- */
//=============================================================================
/**
 *  @file   Identity_i.cpp
 *
 *  $Id: Identity_i.cpp 93650 2011-03-28 08:44:53Z johnnyw $
 *
 *  Implements the interface in Identity.idl.
 *
 *
 *  @author Marina Spivak <marina@cs.wustl.edu>
 */
//=============================================================================

#include "Identity_i.h"

Identity_i::Identity_i (const char *name)
  : name_ (name)
{
}

Identity_i::~Identity_i (void)
{
}

void
Identity_i::get_name (CORBA::String_out name
 )
{
  name = this->name_.in ();
}
