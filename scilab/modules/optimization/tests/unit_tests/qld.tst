// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008 - INRIA
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

//Find x in R^6 such that:
//C1*x = b1 (3 equality constraints i.e me=3)
C1= [1,-1,1,0,3,1;
    -1,0,-3,-4,5,6;
     2,5,3,0,1,0];
b1=[1;2;3];
//C2*x <= b2 (2 inequality constraints)
C2=[0,1,0,1,2,-1;
    -1,0,2,1,1,0];
b2=[-1;2.5];
//with  x between ci and cs:
ci=[-1000;-10000;0;-1000;-1000;-1000];cs=[10000;100;1.5;100;100;1000];
//and minimize 0.5*x'*Q*x + p'*x with
p=[1;2;3;4;5;6]; Q=eye(6,6);
//No initial point is given;
C=[C1;C2] ; //
b=[b1;b2] ;  //
me=3;
[x,lagr]=qld(Q,p,C,b,ci,cs,me);
if size(lagr,'*') <> 17 then pause,end
if size(x,'*') <> 6 then pause,end
//Only linear constraints (1 to 4) are active (lagr(1:6)=0):
 
 