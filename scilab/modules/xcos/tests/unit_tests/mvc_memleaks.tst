// ============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Scilab Enterprises - Clement DAVID
//
//  This file is distributed under the same license as the Scilab package.
// ============================================================================

// <-- TEST WITH GRAPHIC -->
// <-- LINUX ONLY -->
//
// <-- Short Description -->
// Check that a diagram import and a simulation does not leak MVC objects.

// helper function to generate a MVC log of a script
function logfile = generatelog(script)
    mputl( ["loadXcosLibs();"
    "jimport java.lang.System;"
    ""
    "scicos_log(""DEBUG"");"
    ""
    script
    ""
    "System.gc();"
    "clear scs_m;"], "memleaks.sce");

    cmd = SCI+"/bin/scilab -nw <memleaks.sce &>memleaks.sce.log"
    host(cmd);

    logfile = "memleaks.sce.log";

    deletefile("memleaks.sce");
endfunction

// helper function to parse the MVC log and extract leaks
function leaks = parselog(logfile)
    leaks = [];

    fd = mopen(logfile, "r");
    if fd < 0 then pause, end

    line = mgetl(fd, 1);
    while line <> [] do
        t = tokens(line);
        if and(size(t) == [9 1]) & and(t(1:2) == ["Xcos";"debug:"]) then
            if t(3) == "objectUnreferenced(" then
                increment = -1;
            elseif t(3) == "objectReferenced(" then
                increment = +1;
            else
                increment = 0;
            end
            uid = msscanf(t(4), "%d");

            if size(leaks, "*") < uid then
                leaks(uid) = 0;
            end
            leaks(uid) = leaks(uid) + increment;
        end

        line = mgetl(fd, 1);
    end
    mclose(fd);
endfunction

logfile = generatelog("importXcosDiagram(SCI+""/modules/xcos/demos/Discrete-KalmanFilter.zcos"");");
leaks = parselog(logfile);
find(leaks)

logfile = generatelog( ["importXcosDiagram(SCI+""/modules/xcos/demos/Discrete-KalmanFilter.zcos"");"
"xcos_simulate(scs_m);"]);
leaks = parselog(logfile);
find(leaks)
