// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Clement DAVID
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

//<-- CLI SHELL MODE -->
// <-- ENGLISH IMPOSED -->

// Unit test for csim function

S=ssrand(1,1,0);
t=0:5;
y=csim("step",t,S);

