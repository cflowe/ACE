eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id: run_test.pl 96891 2013-03-08 00:15:02Z stanleyk $
# -*- perl -*-

use lib "$ENV{ACE_ROOT}/bin";
use PerlACE::TestTarget;
use Cwd;


my @list=("run_failover_test.pl",
          "run_persistence_test.pl",
          "run_equivalence_test.pl",
          "run_backup_restart_test.pl");

my $status = 0;

my $debug_option = '';

foreach $i (@ARGV) {
    if ($i eq '-debug') {
        $debug_option = '-debug';
    }
}

for $cmd (@list) {
    if (-f $cmd) {
        if (system ("perl $cmd $debug_option") != 0) {
            $status = 1;
        }
    } else {
        print STDERR "ERROR: Can't find $cmd\n";
    }
}
my $test_label = "FT_Naming FaultTolerant";

if ($status != 0) {
    print STDERR "ERROR: One or more $test_label tests Failed\n";
} else {
    print STDERR "INFO: All $test_label tests report OK\n";
}

exit $status;
