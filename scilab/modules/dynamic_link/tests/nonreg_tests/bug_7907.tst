// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010 - DIGITEO - Allan CORNET
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
// <-- ENGLISH IMPOSED -->
//
// <-- Non-regression test for bug 7907 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=7907
// <-- Short Description -->
// ilib_build, ilib_for_link, ... did not check 'files' input argument.
// 
//

if getos() <> "Windows" then
  fnameref = "ilib_gen_Make_unix";
  idargref = 2;
else
  fnameref = "ilib_gen_Make";
  idargref = 3;
end

ilib_verbose(0);
cd(TMPDIR);

// check with old extension (file fun1.c exists) (no more managed)
mputl("void sci_fun1(){}", TMPDIR + "/fun1.c");
files = "fun1.o";
if execstr("ilib_build(""build_c"", [""fun1"", ""sci_fun1""],files,[]);", "errcatch") <> 999 then pause,end
if lasterror() <> msprintf(gettext("%s: A managed file extension for input argument #%d expected."), "ilib_build", 3) then pause, end
mdelete(TMPDIR + "/fun1.c");

// check with old extension (file fun2.c does not exist)
files = "fun2.o";
if execstr("ilib_build(""build_c"", [""fun2"", ""sci_fun2""],files,[]);", "errcatch") <> 999 then pause,end
if lasterror() <> msprintf(gettext("%s: A managed file extension for input argument #%d expected."), "ilib_build", 3) then pause, end

if execstr("ilib_for_link(""ext1c"", ""fun1.c"", [], ""c"");", "errcatch") <> 999 then pause, end
if lasterror() <> msprintf(_("%s: Wrong value for input argument #%d: existing file(s) expected.\n"), "ilib_for_link", 2) then pause, end

if execstr("ilib_mex_build(""libmex"", [""mexf16"", ""mexfunction16"", ""cmex""],[""fun1.c""],[],[],"""","""","""");", "errcatch") <> 999 then pause, end
if lasterror() <> msprintf(_("%s: Wrong value for input argument #%d: existing file(s) expected.\n"), "ilib_mex_build", 3) then pause, end
// =============================================================================
