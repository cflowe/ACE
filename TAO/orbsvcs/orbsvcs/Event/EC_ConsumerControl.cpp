// $Id: EC_ConsumerControl.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "orbsvcs/Event/EC_ConsumerControl.h"



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EC_ConsumerControl::TAO_EC_ConsumerControl (void)
{
}

TAO_EC_ConsumerControl::~TAO_EC_ConsumerControl (void)
{
}

int
TAO_EC_ConsumerControl::activate (void)
{
  return 0;
}

int
TAO_EC_ConsumerControl::shutdown (void)
{
  return 0;
}

void
TAO_EC_ConsumerControl::consumer_not_exist (TAO_EC_ProxyPushSupplier *)
{
}

void
TAO_EC_ConsumerControl::system_exception (TAO_EC_ProxyPushSupplier *,
                                          CORBA::SystemException &)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
