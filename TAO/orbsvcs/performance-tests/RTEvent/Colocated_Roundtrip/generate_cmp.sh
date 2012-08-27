#/bin/sh
# $Id: generate_cmp.sh 94637 2011-10-06 14:46:04Z johnnyw $

for i in $TYPES; do
  echo $i ;
  for j in 99 999 9999; do
    paste $i.avg.dat ${i}.${j}.dat |
      awk '{print $1, $4 / $2}' > $i.${j}.cmp.dat
  done
done

