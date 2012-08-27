#!/bin/sh
# $Id: cleanbuilds.sh 95621 2012-03-17 12:12:23Z johnnyw $

if test -z $1; then CURRENTDATE=YYYY_MM_DD; else CURRENTDATE=$1; fi

wget http://teststat.theaceorb.nl/teststat/cleanbuild_testfails-$CURRENTDATE.txt -O cleanbuild.txt
#
grep -h \!FIXED_BUGS_ONLY ${ACE_ROOT}/tests/*.lst ${ACE_ROOT}/bin/*.lst ${TAO_ROOT}/bin/*.lst ${CIAO_ROOT}/bin/*.lst ${DANCE_ROOT}/bin/*.lst | sed -e "s/^\([^\:]*\).*/\1/" | sed -e "s/\(\/run_test.pl\)\?\s*$//" > Ignore.txt
#
cat cleanbuild.txt | grep -v -f Ignore.txt | tee cleanbuildresults.txt

