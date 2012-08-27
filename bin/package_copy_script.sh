#!/bin/sh
# $Id: package_copy_script.sh 94638 2011-10-06 14:49:29Z johnnyw $

for i in *.gz *.bz2 *.zip; do
  d=`echo $i | sed 's/\.[tz][ai][rp]/-5.5.10&/'`
  echo "Copying $i to $d"
  cp -ip $i /export/www/download.dre/previous_versions/$d
done
