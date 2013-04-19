# $Id: platform_vxworks6.7.GNU 96812 2013-02-13 14:29:47Z mitza $
# VxWorks 6.7

ifeq ($(VXWORKS_VERSION_FLAG),)
  VXWORKS_VERSION_FLAG = -DACE_VXWORKS=0x670
endif # VXWORKS_VERSION_FLAG

include $(ACE_ROOT)/include/makeinclude/platform_vxworks6.6.GNU
