#/bin/sh
# $Id: generate_histo.sh 94637 2011-10-06 14:46:04Z johnnyw $

for i in *.txt; do
  b=`basename $i .txt`
  echo $i
  awk '/^HISTO/ {print $3}' $i | sort -n | uniq -c |
    awk '{print $2, 100.0 * $1 / 20000.0}' > $b.histo.dat
done
