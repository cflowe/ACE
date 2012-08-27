package VXTestWorkspaceCreator;

# ************************************************************
# Description   : VxTest Workspace create
# Author        : Johnny Willemsen
# Create Date   : 28/03/2008
# $Id: VXTestWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
# ************************************************************

# ************************************************************
# Pragmas
# ************************************************************

use strict;

use VXTestProjectCreator;
use WorkspaceCreator;

use vars qw(@ISA);
@ISA = qw(WorkspaceCreator);

# ************************************************************
# Subroutine Section
# ************************************************************

sub write_workspace {
  return 1;
}

1;
