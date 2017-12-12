// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2009 - DIGITEO - Allan CORNET
// Copyright (C) 2013 - Scilab Enterprises - Simon MARCHETTO
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

ilib_verbose(0);
exec(SCI+"/modules/completion/tests/utilities/build_primitives.sce","errcatch",-1);
exec(TMPDIR + "/completion/loader.sce","errcatch",-1);

currentline = 'cd /t';
r = completeline(currentline,'/tmp',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'cd /tmp');

currentline = 'cd /T';
r = completeline(currentline,'/tmp',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'cd /tmp');

r = completeline('cd /home/sy','sylvestre',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'cd /home/sylvestre');

r = completeline('cd /home/sci','Scilab',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'cd /home/Scilab');

r = completeline('cd d:\GIT-scilab-','d:\GIT-scilab-branch',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd d:\GIT-scilab-branch');

currentline = 'cd C:\ProgramD';
r = completeline(currentline,'ProgramData',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\ProgramData');

currentline = 'cd C:\programd';
r = completeline(currentline,'ProgramData',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\ProgramData');

currentline = 'cd C:\Program F';
r = completeline(currentline,'Program Files',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\Program Files');

currentline = 'cd C:\program f';
r = completeline(currentline,'Program Files',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\Program Files');

currentline = 'cd C:\Windows\Sys';
r = completeline(currentline,'System32',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\Windows\System32');

currentline = 'cd C:\Windows\sys';
r = completeline(currentline,'System32',getpartlevel(currentline),getfilepartlevel(currentline),%t);
assert_checkequal(r, 'cd C:\Windows\System32');

currentline = 'ho';
r = completeline(currentline,'home',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'home');

currentline = 'HO';
r = completeline(currentline,'home',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'home');

currentline = 'tmp';
r = completeline(currentline,'TMPDIR',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'TMPDIR');

currentline = 'Tmp';
r = completeline(currentline,'TMPDIR',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'TMPDIR');

currentline = 'disp(TMP';
r = completeline(currentline,'TMPDIR',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'disp(TMPDIR');

currentline = '1 + ab';
r = completeline(currentline,'abs',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, '1 + abs');

currentline = '1 + AB';
r = completeline(currentline,'abs',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, '1 + abs');

currentline = 'tmpStr = ""TMP = "" + TMP';
r = completeline(currentline,'TMPDIR',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'tmpStr = ""TMP = "" + TMPDIR');

currentline = 'mytab = ab';
r = completeline(currentline,'abs',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'mytab = abs');

currentline = 't.fie';
r = completeline(currentline,'field1',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 't.field1');

currentline = 't.field1 = t.fie';
r = completeline(currentline,'field2',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 't.field1 = t.field2');

currentline = 'totoa';
r = completeline(currentline,'toto',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'toto');

currentline = 'totototoa';
r = completeline(currentline,'toto',getfilepartlevel(currentline),getpartlevel(currentline),%t);
assert_checkequal(r, 'toto');
