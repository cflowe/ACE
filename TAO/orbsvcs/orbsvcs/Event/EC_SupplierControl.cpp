// $Id: EC_SupplierControl.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "orbsvcs/Event/EC_SupplierControl.h"



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EC_SupplierControl::TAO_EC_SupplierControl (void)
{
}

TAO_EC_SupplierControl::~TAO_EC_SupplierControl (void)
{
}

int
TAO_EC_SupplierControl::activate (void)
{
  return 0;
}

int
TAO_EC_SupplierControl::shutdown (void)
{
  return 0;
}

void
TAO_EC_SupplierControl::supplier_not_exist (TAO_EC_ProxyPushConsumer *)
{
}

void
TAO_EC_SupplierControl::system_exception (TAO_EC_ProxyPushConsumer *,
                                          CORBA::SystemException &)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
