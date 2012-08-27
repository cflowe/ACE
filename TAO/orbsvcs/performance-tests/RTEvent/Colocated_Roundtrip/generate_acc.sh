#!/bin/sh
# $Id: generate_acc.sh 94637 2011-10-06 14:46:04Z johnnyw $

. parameters

for t in $TYPES; do
  for i in $t.*.dat; do
    b=`basename $i .dat`
    awk 'BEGIN {
           s = 0;
         }
         {
           s += $2;
           print $1, s
         }' $i > $b.acc.dat;
    echo $i
  done
done
