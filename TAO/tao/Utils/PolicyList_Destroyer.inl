// -*- C++ -*-
//
// $Id: PolicyList_Destroyer.inl 69221 2005-11-04 18:39:05Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO::Utils::PolicyList_Destroyer::PolicyList_Destroyer (CORBA::ULong length_hint)
  : CORBA::PolicyList(length_hint)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
