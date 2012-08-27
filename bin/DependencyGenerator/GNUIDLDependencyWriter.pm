package GNUIDLDependencyWriter;

# ************************************************************
# Description   : Generates GNU IDL Makefile dependencies.
# Author        : Chip Jones
# Create Date   : 11/01/2011
# $Id: GNUIDLDependencyWriter.pm 95440 2012-01-17 05:19:09Z jonesc $
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;
use DependencyWriter;

use vars qw(@ISA);
@ISA = qw(DependencyWriter);

# ************************************************************
# Subroutine Section
# ************************************************************

sub process {
  my($objects) = $_[1];
  my($files)   = $_[2];

  ## Sort the dependencies to make them reproducible
  if (scalar @$files > 0) {
    return '$(sort ' . join(' ', @$objects) . "): \\\n  "
      . join(" \\\n  ", sort @$files) . "\n";
  }
  else {
    return;
  }

}


1;
