eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
& eval 'exec perl -S $0 $argv:q'
if 0;

# $Id: run_test.pl 85325 2009-05-13 13:36:08Z sma $
# -*- perl -*-

use lib "$ENV{'ACE_ROOT'}/bin";
use PerlACE::TestTarget;

my $target=  PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";
my $theTest= $target->CreateProcess ("Bug_3674_Regression", "");
my $status=  $theTest->SpawnWaitKill ($target->ProcessStartWaitInterval());
if ($status != 0) {
    print STDERR "ERROR: theTest failed with status = $status\n";
}
exit $status;
