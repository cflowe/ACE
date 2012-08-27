eval '(exit $?0)' && eval 'exec perl -pi -S $0 ${1+"$@"}'
    & eval 'exec perl -pi -S $0 $argv:q'
    if 0;

# $Id: tao_svcconf.pl 86784 2009-09-26 08:33:52Z johnnyw $
#
# This script can help you convert TAO svc.conf using dynamic services
# to use static services.
#
# You may want to run the "find" command with this script, which maybe
# something like this:
#
# find . -name svc.conf -print | xargs $TAO_ROOT/bin/tao_svcconf.pl

s/^ *dynamic *([A-Za-z_]+) [^\"]+(\"[^\"]+\").*/static $1 $2/;
