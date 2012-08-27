// -*- C++ -*-
//
// $Id: COIOP_Endpoint.inl 74533 2006-09-26 11:59:32Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE const ACE_Utils::UUID&
TAO_COIOP_Endpoint::uuid (void) const
{
  return this->uuid_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
