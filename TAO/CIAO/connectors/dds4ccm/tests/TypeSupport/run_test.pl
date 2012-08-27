eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id: run_test.pl 95816 2012-06-04 08:05:58Z johnnyw $
# -*- perl -*-

use lib "$ENV{ACE_ROOT}/bin";
use PerlACE::TestTarget;

my $program = PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";

$PROG = $program->CreateProcess ("typesupport_test", "");
$program_status = $PROG->Spawn ();

if ($program_status != 0) {
    print STDERR "ERROR: typesupport test returned $program_status\n";
    exit 1;
}

sleep ($program->ProcessStartWaitInterval());

$program_status = $PROG->Kill ();

exit 0;
