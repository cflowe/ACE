package GNUAutobuildProjectCreator;

# ************************************************************
# Description   : A Project creator for the GNUAutobuild project type
# Author        : Chad Elliott
# Create Date   : 3/13/2002
# $Id: GNUAutobuildProjectCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use File::Basename;

use GNUACEProjectCreator;
use MakeProjectBase;
use ProjectCreator;

use vars qw(@ISA);
@ISA = qw(GNUACEProjectCreator MakeProjectBase ProjectCreator);

sub extractType {
    return 'gnuace';
}

1;
