#!/bin/sh
#
# $Id: gen_graphs.sh 42534 2001-12-20 00:03:34Z pradeep $
#

# test.dat test.png test
#gnuplot <<_EOF_ >/dev/null 2>&1
/usr/bin/gnuplot <<_EOF_
    set xlabel 'time (uS)'
    set ylabel 'Request latency (uS)'
    set terminal png small color
    set autoscale
    set output "$2"
    plot '$1' using 1:2 title '$3' w l
    exit
_EOF_
