// $Id: deadline_qos_test.cpp 89294 2010-03-04 08:35:13Z msmit $

#include "deadline_qos_test.h"

#include "duration.h"

DeadlinePolicyTest::DeadlinePolicyTest ()
{
}

bool
DeadlinePolicyTest::check (const ::DDS_DeadlineQosPolicy & dds_qos,
                           const ::DDS::DeadlineQosPolicy & qos)
{
  return Duration::check (dds_qos.period, qos.period);
}
