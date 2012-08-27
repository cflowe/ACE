# $Id: platform_vxworks6.9.GNU 95534 2012-02-17 23:19:33Z mitza $
# VxWorks 6.9

ifeq ($(VXWORKS_VERSION_FLAG),)
  VXWORKS_VERSION_FLAG = -DACE_VXWORKS=0x690
endif # VXWORKS_VERSION_FLAG

WIND_USR_LIB = ../lib/usr/lib

include $(ACE_ROOT)/include/makeinclude/platform_vxworks6.8.GNU

# override. we do not want -Wsystem-header (new in vx6.9)
CC_WARNINGS_ALL = -Wall
