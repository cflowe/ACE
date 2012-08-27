// $Id: PG_MemberInfo.cpp 91677 2010-09-08 19:18:49Z johnnyw $

#include "orbsvcs/PortableGroup/PG_MemberInfo.h"
#include "orbsvcs/PortableGroup/PG_Operators.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

bool
TAO_PG_MemberInfo::operator== (const TAO_PG_MemberInfo & rhs) const
{
  // For the purposes of the member info set, only the location is
  // important.
  return location == rhs.location;
}

TAO_END_VERSIONED_NAMESPACE_DECL
