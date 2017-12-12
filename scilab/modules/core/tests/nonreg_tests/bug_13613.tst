// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Adeline CARNIS
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- Non-regression test for bug 13613 -->
//
// <-- CLI SHELL MODE -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/13613
//
// <-- Short Description -->
// isdef(name, 'l') produced wrong output.

A = 1; B = 2; C = 3; D = 4;
res = isdef(["A", "B"; "C", "D"]);
expected = [%t %t;%t %t];
assert_checkequal(res, expected);

res = isdef(["A", "B"; "C", "D"], "l");
assert_checkequal(res, expected);
