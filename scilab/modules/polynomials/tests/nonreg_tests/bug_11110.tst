//<-- CLI SHELL MODE -->
// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2012 - DIGITEO - Allan CORNET
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- JAVA NOT MANDATORY -->
//
// <-- Non-regression test for bug 11110 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=11110
//
// <-- Short Description -->
// poly() result was wrong on windows x64
//

REF = [0 2 2 1];

r = poly([0 -1+%i -1-%i],'s',"roots");
assert_checkequal(coeff(r), REF);

r = poly([-1+%i 0 -1-%i],'s',"roots");
assert_checkequal(coeff(r), REF);

r = poly([-1+%i -1-%i 0],'s',"roots");
assert_checkequal(coeff(r), REF);

r = poly([-1-%i -1+%i 0],'s',"roots");
assert_checkequal(coeff(r), REF);
