// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Cedric Delamarre
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 14398 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/14398
//
// <-- Short Description -->
//
// Array mistaken for a function call in calling sequence

x = zeros(1,10);
y = x;

function [a, b] = F(x1, y1)
    a = 0;
    b = 0;
endfunction

err = execstr("[a, b] = F(x, y1=y(1:3));", "errcatch");
assert_checkequal(err, 0);
