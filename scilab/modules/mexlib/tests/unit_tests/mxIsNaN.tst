// ============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2011-2011 - Gsoc 2011 - Iuri SILVIO
//
//  This file is distributed under the same license as the Scilab package.
// ============================================================================

// <-- CLI SHELL MODE -->
// ============================================================================
// Unitary tests for mxIsNaN mex function
// ============================================================================

cd(TMPDIR);
ilib_verbose(0);
ieee(2);
mputl(["#include ""mex.h""";
"void mexFunction(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])";
"{";
"    double value = mxGetScalar(prhs[0]);";
"    bool isNaN = mxIsNaN(value);";
"    mxArray* pOut = mxCreateLogicalScalar(isNaN);";
"    plhs[0] = pOut;";
"}"],"mexisNaN.c");
ilib_mex_build("libmextest",["isNaN","mexisNaN","cmex"], "mexisNaN.c",[]);
exec("loader.sce");

assert_checkfalse(isNaN(%inf));
assert_checkfalse(isNaN(1/0));
assert_checkfalse(isNaN(1));
assert_checktrue(isNaN(%nan));
