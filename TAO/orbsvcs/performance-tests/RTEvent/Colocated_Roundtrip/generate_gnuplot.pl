#!/usr/bin/perl -w
#
# $Id: generate_gnuplot.pl 44115 2002-03-27 15:54:54Z coryan $
#

foreach $t (@ARGV) {
  print "plot '", $t, "_delta.32.histo.dat'\n";
  foreach $i (2..16) {
    print "replot '", $t, "_delta.", 32*$i, ".histo.dat'\n";
  }
}
