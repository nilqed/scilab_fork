// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Clément DAVID
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 14192 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/14192
//
// <-- Short Description -->
// When the transfer function is just a double integrator 1/s^2, g_margin()
// gives error. It works fine with other functions.
//

s=%s;
G=syslin("c",1/s^2);
g_margin(G)

