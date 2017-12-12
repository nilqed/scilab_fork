// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2015 - Scilab Enterprises - Adeline CARNIS
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

// <-- Non-regression test for bug 14109 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=14109
//
// <-- Short Description -->
//    lsq function crashed Scilab when Scilab version depended on mkl library.
// =============================================================================

load(fullfile(SCI, "modules", "linear_algebra", "tests", "nonreg_tests", "bug_14109.dat"));
res = lsq(b, a);
assert_checkalmostequal(res, [209.39340429829; 0.9832004326031], [], %eps);
