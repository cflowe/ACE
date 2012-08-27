// $Id: wr_lifecycle_qos_test.cpp 89302 2010-03-04 10:23:34Z msmit $

#include "wr_lifecycle_qos_test.h"

WriterDataLifecyclePolicyTest::WriterDataLifecyclePolicyTest ()
{
}

bool
WriterDataLifecyclePolicyTest::check (const ::DDS_WriterDataLifecycleQosPolicy & dds_qos,
                                      const ::DDS::WriterDataLifecycleQosPolicy & qos)
{
  return dds_qos.autodispose_unregistered_instances ==
         static_cast <DDS_Boolean> (qos.autodispose_unregistered_instances);
}
