// -*- C++ -*-
//
// $Id: Regular_POA.inl 78630 2007-06-28 10:34:07Z johnnyw $

#if !defined (CORBA_E_MICRO)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE PortableServer::POA_ptr
TAO_Regular_POA::the_parent (void)
{
  return PortableServer::POA::_duplicate (this->parent_);
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif

