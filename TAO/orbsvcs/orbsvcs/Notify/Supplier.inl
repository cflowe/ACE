// -*- C++ -*-
//
// $Id: Supplier.inl 69353 2005-11-14 22:03:50Z ossama $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_Notify_ProxyConsumer*
TAO_Notify_Supplier::proxy_consumer (void)
{
  return this->proxy_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
