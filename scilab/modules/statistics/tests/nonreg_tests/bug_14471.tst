// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Samuel GOUGEON
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
// <-- CLI SHELL MODE -->
// <-- Non-regression test for bug 14471 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/14471
//
// <-- Short Description -->
// strange([]) returned [] instead of %nan as all other stat. dispersion functions

assert_checkequal(strange([]), %nan);
