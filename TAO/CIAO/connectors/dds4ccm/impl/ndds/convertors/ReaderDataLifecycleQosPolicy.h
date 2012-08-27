/**
 * @author Johnny Willemsen (jwillemsen@remedy.nl)
 *
 * $Id: ReaderDataLifecycleQosPolicy.h 95809 2012-06-03 17:56:00Z johnnyw $
 *
 * Wrapper facade for NDDS.
 */

#ifndef DDS4CCM_READERDATALIFECYCLEQOSPOLICY_H
#define DDS4CCM_READERDATALIFECYCLEQOSPOLICY_H

#include "dds4ccm/impl/dds4ccm_conf.h"

#include "Duration_t.h"

inline void
operator<<= (::DDS::ReaderDataLifecycleQosPolicy &ddsqos, const ::DDS_ReaderDataLifecycleQosPolicy & qos)
{
  ddsqos.autopurge_nowriter_samples_delay <<= qos.autopurge_nowriter_samples_delay;
  ddsqos.autopurge_disposed_samples_delay <<= qos.autopurge_disposed_samples_delay;
}

inline void
operator<<= (::DDS_ReaderDataLifecycleQosPolicy &ddsqos, const ::DDS::ReaderDataLifecycleQosPolicy & qos)
{
  ddsqos.autopurge_nowriter_samples_delay <<= qos.autopurge_nowriter_samples_delay;
  ddsqos.autopurge_disposed_samples_delay <<= qos.autopurge_disposed_samples_delay;
}

#endif /* DDS4CCM_READERDATALIFECYCLEQOSPOLICY_H */
