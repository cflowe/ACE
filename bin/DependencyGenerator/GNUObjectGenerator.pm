package GNUObjectGenerator;

# ************************************************************
# Description   : Generates object files for GNU Makefiles.
# Author        : Chad Elliott
# Create Date   : 5/23/2003
# $Id: GNUObjectGenerator.pm 94638 2011-10-06 14:49:29Z johnnyw $
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use ObjectGenerator;

use vars qw(@ISA);
@ISA = qw(ObjectGenerator);

# ************************************************************
# Subroutine Section
# ************************************************************

sub process {
  my($noext) = $_[1];
  $noext =~ s/\.[^\.]+$//o;
  $noext =~ s/.+\/// if $noext =~ /\.\.\//;
  return ["\$(VDIR)$noext.\$(SOEXT)",
          "\$(VDIR)$noext.\$(OBJEXT)",
          "\$(VSHDIR)$noext.\$(SOEXT)",
          "\$(VSHDIR)$noext.\$(OBJEXT)",
         ];
}


1;
