// $Id: entity_factory_qos_test.cpp 89302 2010-03-04 10:23:34Z msmit $

#include "entity_factory_qos_test.h"

EntityFactoryPolicyTest::EntityFactoryPolicyTest ()
{
}

bool
EntityFactoryPolicyTest::check (const ::DDS_EntityFactoryQosPolicy & dds_qos,
                                const ::DDS::EntityFactoryQosPolicy & qos)
{
  return dds_qos.autoenable_created_entities ==
         static_cast <DDS_Boolean> (qos.autoenable_created_entities);
}
