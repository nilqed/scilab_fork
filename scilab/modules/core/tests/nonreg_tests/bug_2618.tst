//<-- CLI SHELL MODE -->
// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008 - INRIA - Serge STEER <serge.steer@inria.fr>
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================


// <-- Non-regression test for bug 2618  -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=2618
//
// <-- Short Description -->
// try/catch statement makes Scilab unstable,

//catched error in a compiled function in a try
function r=ev(str), execstr("r="+str),endfunction
r=%f;a = 1;
try
    ev("a*z");
catch
    r=%t
end
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end

//catched error in a uncompiled function in a try
clear ev
deff(" r=ev(str)","execstr(''r=''+str),")
r=%f;a = 1;
try
    ev("a*z");
catch
    r=%t
end
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end


//catched error in a compiled function in a try in a compiled function
clear ev foo
function r=ev(str), execstr("r="+str),endfunction
function r=foo()
    r=%f;a=1;
    try
        ev("a*z");
    catch
        r=%t;
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end

//catched error in a exec'ed compiled function in a try in a compiled function
clear ev foo
function r=ev(str), execstr("r="+str),endfunction
function r=foo()
    r=%f;a=1;
    try
        str="a*z";
        exec(ev);
    catch
        r=%t;
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end

//catched error in a exec'ed uncompiled function in a try in a compiled function
clear ev foo
deff(" r=ev(str)","execstr(''r=''+str),")
function r=foo()
    r=%f;a=1;
    try
        str="a*z";
        exec(ev);
    catch
        r=%t;
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end


//catched error in an uncompiled function in a try in a compiled function
clear ev foo
deff(" r=ev(str)","execstr(''r=''+str),")
function r=foo()
    r=%f;
    try
        ev("a*z")
    catch
        r=%t
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end


//catched error in a compiled function in a try in a uncompiled function
clear ev foo
function r=ev(str), execstr("r="+str),endfunction
deff("r=foo()",[
"r=%f;a = 1;"
"try"
"   ev(a*z);"
"catch"
"   r=%t"
"end"])
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end



//catched error in a uncompiled function in a try in a uncompiled function
clear ev foo
deff(" r=ev(str)","execstr(''r=''+str),")
deff("r=foo()",[
"r=%f;a = 1;"
"try"
"   ev(a*z);"
"catch"
"   r=%t"
"end"])
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end


//catched error in a execstr in a try in a compiled function
clear  foo
function r=foo()
    r=%f;a=1;
    try
        execstr("r=a*z")
    catch
        r=%t;
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end


//catched error in a exec in a try in a compiled function
clear  foo
mputl("r=a*z",TMPDIR+"/ev");
function r=foo()
    r=%f;a=1;
    try
        exec(TMPDIR+"/ev")
    catch
        r=%t;
    end
endfunction
r=foo();
if ~r then pause,end
[str,n]=lasterror();
if n == 0 then pause,end
