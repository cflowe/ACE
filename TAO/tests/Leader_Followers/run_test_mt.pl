eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
    & eval 'exec perl -S $0 $argv:q'
    if 0;

# $Id: run_test_mt.pl 38003 2001-03-05 19:39:21Z brunsch $
# -*- perl -*-

system 'perl run_test.pl -m ' . join ' ', @ARGV;


