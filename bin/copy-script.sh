#!/bin/sh
# $Id: copy-script.sh 94668 2011-10-07 09:53:46Z johnnyw $

for i in *.gz *.bz2 *.zip *.md5; do
  d=`echo $i | sed 's/\.[tz][ai][rp]/-$1&/'`
  echo "Copying $i to $d"
  cp -ip $i /export/www/download.dre/previous_versions/$d
done

