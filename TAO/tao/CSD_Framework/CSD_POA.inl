// -*- C++ -*-
//
// $Id: CSD_POA.inl 91816 2010-09-17 08:35:56Z johnnyw $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO::CSD::Strategy_Proxy&
TAO_CSD_POA::servant_dispatching_strategy_proxy (void) const
{
  return *sds_proxy_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
