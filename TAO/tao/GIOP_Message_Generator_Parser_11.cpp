// -*- C++ -*-
// $Id: GIOP_Message_Generator_Parser_11.cpp 91628 2010-09-07 11:11:12Z johnnyw $

#include "tao/GIOP_Message_Generator_Parser_11.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CORBA::Octet
TAO_GIOP_Message_Generator_Parser_11::minor_version (void) const
{
  return static_cast<CORBA::Octet> (1);
}

TAO_END_VERSIONED_NAMESPACE_DECL
