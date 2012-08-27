// -*- C++ -*-
//
// $Id: POA_Helper.inl 69353 2005-11-14 22:03:50Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE PortableServer::POA_ptr
TAO_Notify_POA_Helper::poa (void)
{
  return this->poa_.in ();
}

TAO_END_VERSIONED_NAMESPACE_DECL
