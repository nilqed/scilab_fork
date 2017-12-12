// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Clement DAVID
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 13831 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=13831
//
// <-- Short Description -->
// ss2ss does not transform initial state

before = syslin("c",-1,1,1,0,1);
after = ss2ss(before, 2);
assert_checkequal(after.x0, before.x0 / 2);
