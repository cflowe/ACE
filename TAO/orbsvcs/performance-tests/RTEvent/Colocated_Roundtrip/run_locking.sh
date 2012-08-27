#! /bin/sh
#
# $Id: run_locking.sh 44115 2002-03-27 15:54:54Z coryan $
#

. parameters

for n in $NTHREADS; do
  for c in $NCONSUMERS; do
    for t in $LOCKING_TYPES; do
      date
      echo $t $c $n

      ./driver -ORBSvcConf ec.locking_${t}.conf -d -f -h 10000 -l 10000 -i $ITERATIONS -c $c -n $n > ec_locking.${t}.${c}.${n}.txt 2>&1
    done
  done
done
