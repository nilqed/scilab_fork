// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Paul Bignier
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 13468 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=13468
//
// <-- Short Description -->
// Scilab hanged when incorrect format was used for file reading using mfscanf.

f = mopen(pathconvert("SCI/modules/fileio/tests/nonreg_tests")+"bug_13468.dat");
[n, a, b] = mfscanf(-1, f, "%lg %lg");
mclose(f);

assert_checkequal(n, 0);
assert_checkequal(a, []);
assert_checkequal(b, []);
