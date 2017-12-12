// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2011 - DIGITEO - Clément DAVID
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- XCOS TEST -->
// <-- TEST WITH GRAPHIC -->

// test scope values 


assert_checktrue(importXcosDiagram(SCI + "/modules/xcos/tests/unit_tests/cfscope.zcos"));
xcos_simulate(scs_m, 4);

function assert_checkcfscope()
    f=gcf();
    assert_checkequal(size(f.children), [1 1])

    a=gca();
    assert_checkequal(size(a.children), [2 1])

    p1=a.children(1);
    p2=a.children(2);

    assert_checkequal(f.figure_id, 20006);
    assert_checkequal(a.data_bounds, [60 -15 ; 90 15]);
    assert_checkequal(a.x_label.text, "t");
    assert_checkequal(a.y_label.text, "y");

    assert_checkequal(size(p1.data), [302 2]);
    assert_checkequal(size(p2.data), [302 2]);

    assert_checkequal(p1.polyline_style, 1);
    assert_checkequal(p2.polyline_style, 1);

    assert_checkequal(p1.line_mode, "on");
    assert_checkequal(p2.line_mode, "on");

    assert_checkequal(p1.mark_mode, "off");
    assert_checkequal(p2.mark_mode, "off");
endfunction
assert_checkcfscope()

// Simulate again to check multi-simulations cases
xcos_simulate(scs_m, 4);
assert_checkcfscope();

