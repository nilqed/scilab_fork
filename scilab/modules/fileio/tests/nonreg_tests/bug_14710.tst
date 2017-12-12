// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Paul Bignier
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 14710 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=14710
//
// <-- Short Description -->
// fullpath(TMPDIR+...) was bugged on MacOS

short = TMPDIR;
long  = TMPDIR + filesep() + "api_c";

assert_checkequal(fullpath(short) + filesep() + "api_c", fullpath(long));
