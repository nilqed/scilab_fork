// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010 - Allan CORNET
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 8528 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=8528
//
// <-- Short Description -->
// length returned a wrong size for malformed characters.
//

if length(ascii(181)) <> 1 then pause, end
if length(ascii([83 99 105 108 97 98])) <> 6 then pause, end
if length("Scilab") <> 6 then pause, end
if length(ascii([83 99 105 181 108 97 98])) <> 7 then pause, end
if length("Sciµlab") <> 7 then pause, end
for i=127:255
    if length(ascii(i)) <> 1 then pause, end
end
