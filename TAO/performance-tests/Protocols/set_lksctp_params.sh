#!/bin/sh
# $Id: set_lksctp_params.sh 94675 2011-10-07 10:43:22Z msmit $

# $Id: set_lksctp_params.sh 94675 2011-10-07 10:43:22Z msmit $

B_PROC=/proc/sys/net/sctp

CONF_PATH=/groups/pces/uav_oep/oomworks/lksctp-debug/TAO/performance-tests/Protocols
. ${CONF_PATH}/lksctp_params.conf

for i in $SETTINGS; do
	eval "echo \"echo \$$i > \$B_PROC/\${PREFIX}${i}\""
	eval "echo \$$i > \$B_PROC/\${PREFIX}${i}"
done
