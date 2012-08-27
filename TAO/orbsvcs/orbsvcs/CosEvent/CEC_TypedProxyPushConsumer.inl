// -*- C++ -*-
//
// $Id: CEC_TypedProxyPushConsumer.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE CORBA::Boolean
TAO_CEC_TypedProxyPushConsumer::is_connected_i (void) const
{
  return this->connected_;
}

// ****************************************************************

ACE_INLINE int
TAO_CEC_TypedProxyPushConsumer_Guard::locked (void) const
{
  return this->locked_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
