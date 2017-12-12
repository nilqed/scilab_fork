// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) ????-2008 - INRIA - Vincent COUVERT <vincent.couvert@inria.fr>
// Copyright (C) 2005-2008 - INRIA - Pierre MARECHAL <pierre.marechal@inria.fr>
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->
// <-- ENGLISH IMPOSED -->

// <-- Non-regression test for bug 942 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=942
//
// <-- Short Description -->
//    Adding a comment character '%' at the end of a function 
//    prototype makes the conversion fail.
//
//    File Test.m :
//
//    function [a] = Test (x) % test
//    a = x;

MFILECONTENTS=["function [a] = bug942 (x) % bug942";"% help line";"% help line";"a = x;"];

MFILE=TMPDIR+"/bug942.m";
SCIFILE=TMPDIR+"/bug942.sci";

mputl(MFILECONTENTS,MFILE);
mfile2sci(MFILE,TMPDIR);
SCIFILECONTENTS=mgetl(SCIFILE);

SCIFILECONTENTSREF=["function [a] = bug942(x) // bug942";
		"";
		"// Output variables initialisation (not found in input variables)";
		"a=[];";
		"";
		"// Display mode";
		"mode(0);";
		"";
		"// Display warning for floating point exception";
		"ieee(1);";
		"";
		"// help line";
		"// help line";
		"a = x;";
		"endfunction"];

if or(SCIFILECONTENTSREF<>SCIFILECONTENTS) then pause,end
