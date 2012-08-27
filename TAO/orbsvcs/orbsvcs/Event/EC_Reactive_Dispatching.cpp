// $Id: EC_Reactive_Dispatching.cpp 91672 2010-09-08 18:44:58Z johnnyw $

#include "orbsvcs/Event/EC_Reactive_Dispatching.h"
#include "orbsvcs/Event/EC_ProxySupplier.h"



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EC_Reactive_Dispatching::TAO_EC_Reactive_Dispatching (void)
  : TAO_EC_Dispatching ()
{
}

void
TAO_EC_Reactive_Dispatching::activate (void)
{
}

void
TAO_EC_Reactive_Dispatching::shutdown (void)
{
}

void
TAO_EC_Reactive_Dispatching::push (TAO_EC_ProxyPushSupplier* proxy,
                                   RtecEventComm::PushConsumer_ptr consumer,
                                   const RtecEventComm::EventSet& event,
                                   TAO_EC_QOS_Info&)
{
  proxy->reactive_push_to_consumer (consumer, event);
}

void
TAO_EC_Reactive_Dispatching::push_nocopy (TAO_EC_ProxyPushSupplier* proxy,
                                          RtecEventComm::PushConsumer_ptr consumer,
                                          RtecEventComm::EventSet& event,
                                          TAO_EC_QOS_Info&)
{
  proxy->reactive_push_to_consumer (consumer, event);
}

TAO_END_VERSIONED_NAMESPACE_DECL
