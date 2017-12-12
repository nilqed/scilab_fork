// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Paul Bignier
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->

loadXcosLibs();
scicos_log("TRACE");

o = CLOCK_c("define");
d = scicos_diagram();
d.objs(1) = o;

assert_checkequal(d.objs(1).model.rpar.objs(3).from, [2 1 0]);
assert_checkequal(d.objs(1).model.rpar.objs(3).to,   [4 1 1]);

dClone = d;
dClone.props.tol(6) = d.props.tol(6); // COW: effectively cloning

assert_checkequal(dClone.objs(1).model.rpar.objs(3).from, [2 1 0]);
assert_checkequal(dClone.objs(1).model.rpar.objs(3).to,   [4 1 1]);

// Check that all the model items are freed
clear
