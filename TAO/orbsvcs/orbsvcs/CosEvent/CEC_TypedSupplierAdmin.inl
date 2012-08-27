// -*- C++ -*-
//
// $Id: CEC_TypedSupplierAdmin.inl 76589 2007-01-25 18:04:11Z elliott_c $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE void
TAO_CEC_TypedSupplierAdmin::
    for_each (TAO_ESF_Worker<TAO_CEC_TypedProxyPushConsumer> *worker)
{
  this->typed_push_admin_.for_each (worker);
}

TAO_END_VERSIONED_NAMESPACE_DECL
