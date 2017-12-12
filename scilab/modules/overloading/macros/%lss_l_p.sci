// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) INRIA - Serge Steer
//
// Copyright (C) 2012 - 2016 - Scilab Enterprises
//
// This file is hereby licensed under the terms of the GNU GPL v2.0,
// pursuant to article 5.3.4 of the CeCILL v.2.1.
// This file was originally licensed under the terms of the CeCILL v2.1,
// and continues to be available under such terms.
// For more information, see the COPYING file which you should have received
// along with this program.

function [sr]=%lss_l_p(s,p)
    //sr=%lss_l_p(s,p) <=> sr=s\p
    // p polynomial matrix
    // s syslin list
    //!
    sr=s\tlist(["lss","A","B","C","D","X0","dt"],[],[],[],p,[],[])
endfunction
