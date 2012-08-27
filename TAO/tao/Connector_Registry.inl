// -*- C++ -*-
//
// $Id: Connector_Registry.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_ConnectorSetIterator
TAO_Connector_Registry::begin (void) const
{
  return this->connectors_;
}

ACE_INLINE TAO_ConnectorSetIterator
TAO_Connector_Registry::end (void) const
{
  return this->connectors_ + this->size_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
