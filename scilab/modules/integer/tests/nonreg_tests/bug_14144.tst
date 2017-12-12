// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2015 - Scilab Enterprises - Antoine ELIAS
//
//  This file is distributed under the same license as the Scilab package.
// ===========================================================================
//
// <-- Non-regression test for bug 14144 -->
//
// <-- CLI SHELL MODE -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/14144
//
// <-- Short Description -->
// int64(2^63) causes scilab crash

a = int64(2^63);
assert_checkequal(a, int64(2^63));
