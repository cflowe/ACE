#!/bin/sh
# $Id: group_test_stats.sh 94638 2011-10-06 14:49:29Z johnnyw $

if test -e tmp; then unlink tmp; fi
if test -e tmp2; then unlink tmp2; fi
cat t.txt | grep '+[a-z|A-Z]' > tmp
sort tmp | uniq -c > tmp2
unlink tmp
sort -n -r tmp2 > uniq.txt
unlink tmp2
cat uniq.txt
