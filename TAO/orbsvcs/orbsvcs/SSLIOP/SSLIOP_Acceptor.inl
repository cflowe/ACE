// -*- C++ -*-
//
// $Id: SSLIOP_Acceptor.inl 73791 2006-07-27 20:54:56Z wotte $


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE const SSLIOP::SSL &
TAO::SSLIOP::Acceptor::ssl_component (void) const
{
  return this->ssl_component_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
