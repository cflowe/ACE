/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: OwnershipStrengthQosPolicy.h 95809 2012-06-03 17:56:00Z johnnyw $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H
#define DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H

#include "dds4ccm/impl/dds4ccm_conf.h"

inline void
operator<<= (::DDS::OwnershipStrengthQosPolicy &ddsqos, const ::DDS_OwnershipStrengthQosPolicy & qos)
{
  ddsqos.value = qos.value;
}

inline void
operator<<= (::DDS_OwnershipStrengthQosPolicy &ddsqos, const ::DDS::OwnershipStrengthQosPolicy & qos)
{
  ddsqos.value = qos.value;
}

#endif /* DDS4CCM_OWNERSHIPSTRENGTHQOSPOLICY_H */
