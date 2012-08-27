#/bin/sh
# $Id: generate_histo.sh 94637 2011-10-06 14:46:04Z johnnyw $

. parameters

for i in *.txt; do
  b=`basename $i .txt`
  echo $i
  awk '/^HISTO/ {print $3}' $i | sort -n | uniq -c |
    awk -v N=$ITERATIONS '{print $2, $1 / N}' > $b.histo.dat
done
