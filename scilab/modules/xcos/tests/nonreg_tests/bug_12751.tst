// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2014 - Scilab Enterprises - Vladislav TRUBKIN
//
// This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- XCOS TEST -->
//
// <-- ENGLISH IMPOSED -->
//
// <-- Non-regression test for bug 12751 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=12751
//
// <-- Short Description -->
// cdummy_ entry point not found when using Code Generation
//

assert_checktrue(importXcosDiagram(SCI + "/modules/xcos/tests/nonreg_tests/bug_12751.zcos"));
xcos_simulate(scs_m, 4);

prot = funcprot();
funcprot(0);

function str = x_mdialog(desc, labels, ini)
    str = ["bug_12751"; TMPDIR+"/bug_12751/"; ""];
endfunction

funcprot(prot);

[ok, XX] = do_compile_superblock42(scs_m.objs(1), [], [], %f);
assert_checktrue(ok);
rmdir(TMPDIR+"/bug_12751/","s");
