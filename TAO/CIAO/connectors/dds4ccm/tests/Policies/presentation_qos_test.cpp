// $Id: presentation_qos_test.cpp 89302 2010-03-04 10:23:34Z msmit $

#include "presentation_qos_test.h"

PresentationPolicyTest::PresentationPolicyTest ()
{
}

bool
PresentationPolicyTest::check (const ::DDS_PresentationQosPolicy & dds_qos,
                               const ::DDS::PresentationQosPolicy & qos)
{
  return dds_qos.access_scope ==
              static_cast <DDS_PresentationQosPolicyAccessScopeKind>(qos.access_scope) &&
         dds_qos.coherent_access ==
              static_cast <DDS_Boolean> (qos.coherent_access) &&
         dds_qos.ordered_access ==
              static_cast <DDS_Boolean> (qos.ordered_access);
}
