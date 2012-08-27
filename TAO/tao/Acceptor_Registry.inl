// -*- C++ -*-
//
// $Id: Acceptor_Registry.inl 73791 2006-07-27 20:54:56Z wotte $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_AcceptorSetIterator
TAO_Acceptor_Registry::begin (void)
{
  return this->acceptors_;
}

ACE_INLINE TAO_AcceptorSetIterator
TAO_Acceptor_Registry::end (void)
{
  return this->acceptors_ + this->size_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
