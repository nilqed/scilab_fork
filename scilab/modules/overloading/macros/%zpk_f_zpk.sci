// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C)  2016 - INRIA - Serge Steer
//
// This file is licensed under the terms of the GNU GPL v2.0,
// pursuant to article 5.3.4 of the CeCILL v.2.1.
// For more information, see the COPYING file which you should have received
// along with this program.
function r=%zpk_f_zpk(a,b)
    [ma,na]=size(a)
    [mb,nb]=size(b)
    if a.dt<>b.dt then
        error(msprintf(_("%s: time domains are not compatible.\n"),"[a;b]"))
    end
    if na<>nb then
        error(msprintf(_("%s: Incompatible input arguments #%d and #%d: Same number of columns expected.\n"),"[a;b]",1,2))
    end
    //next instruction produce wrong results (bug 14801)
    //r=zpk([a.Z;b.Z],[a.P;b.P],[a.K;b.K],a.dt)

    Z=a.Z
    Z(ma+1:ma+mb,:)=b.Z
    P=a.P
    P(ma+1:ma+mb,:)=b.P
    K=[a.K;b.K]
    r=zpk(Z,P,K,a.dt)
endfunction
