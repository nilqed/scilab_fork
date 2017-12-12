// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Clement DAVID
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- TEST WITH GRAPHIC -->

s=poly(0,"s")
num=10*s+20;
den=s^3+14*s^2+35*s-50;
h=syslin("c",num/den);
show_margins(h,"bode");

