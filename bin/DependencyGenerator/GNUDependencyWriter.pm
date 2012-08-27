package GNUDependencyWriter;

# ************************************************************
# Description   : Generates GNU Makefile dependencies.
# Author        : Chad Elliott
# Create Date   : 2/10/2002
# $Id: GNUDependencyWriter.pm 94638 2011-10-06 14:49:29Z johnnyw $
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
  return '$(sort ' . join(' ', @$objects). "): \\\n  "
    . join(" \\\n  ", sort @$files) . "\n";
}


1;
