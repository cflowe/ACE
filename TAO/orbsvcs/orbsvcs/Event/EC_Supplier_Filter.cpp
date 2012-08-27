// $Id: EC_Supplier_Filter.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "orbsvcs/Event/EC_Supplier_Filter.h"
#include "orbsvcs/Event/EC_ProxySupplier.h"
#include "orbsvcs/Event/EC_QOS_Info.h"

#if ! defined (__ACE_INLINE__)
#include "orbsvcs/Event/EC_Supplier_Filter.inl"
#endif /* __ACE_INLINE__ */



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EC_Supplier_Filter::~TAO_EC_Supplier_Filter (void)
{
}

// ****************************************************************

void
TAO_EC_Filter_Worker::work (TAO_EC_ProxyPushSupplier *supplier)
{
  TAO_EC_QOS_Info qos_info = this->event_info_;
  supplier->filter (this->event_, qos_info);
}

TAO_END_VERSIONED_NAMESPACE_DECL
