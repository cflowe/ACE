// $Id: RT_Factory.cpp 91524 2010-08-27 14:33:58Z johnnyw $

#include "orbsvcs/Notify/RT_Factory.h"
#include "orbsvcs/Notify/Structured/RT_StructuredProxyPushSupplier.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_RT_Factory::TAO_Notify_RT_Factory (void)
{
}

TAO_Notify_RT_Factory::~TAO_Notify_RT_Factory ()
{
}

void
TAO_Notify_RT_Factory::create (TAO_Notify_StructuredProxyPushSupplier*& proxy)
{
  ACE_NEW_THROW_EX (proxy,
                    TAO_Notify_RT_StructuredProxyPushSupplier (),
                    CORBA::NO_MEMORY ());
}

TAO_END_VERSIONED_NAMESPACE_DECL

ACE_FACTORY_DEFINE (TAO_RT_Notify, TAO_Notify_RT_Factory)
