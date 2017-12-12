// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2016 - Samuel GOUGEON
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 13166 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/13166
//
// <-- Short Description -->
// The "l" and "b" endian modes were sticky with mget and mgeti

binfile = TMPDIR+"/mgetest.bin";
idF = mopen(binfile, "wb");
mput(int8(0:16),"uc");
mclose(idF);

for mod = ["c" "uc" "s" "us" "i" "ui" "l" "ul"]
    idF = mopen(binfile, "rb");
    dres = mget(1, mod);   // Default endian mode

    mseek(0);
    mget(1, mod+"l");
    mseek(0);
    assert_checkequal(mget(1,mod), dres);
    mseek(0);
    mget(1, mod+"b");
    mseek(0);
    assert_checkequal(mget(1, mod), dres);

    mseek(0);
    dres = mgeti(1, mod);
    mseek(0);
    mgeti(1, mod+"l");
    mseek(0);
    assert_checkequal(mgeti(1, mod), dres);
    mseek(0);
    mgeti(1, mod+"b");
    mseek(0);
    assert_checkequal(mgeti(1, mod), dres);

    mclose(idF);
end
