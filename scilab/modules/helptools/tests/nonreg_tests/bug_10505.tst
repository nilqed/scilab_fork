// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2011 - Calixte DENIZET
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- JVM MANDATORY -->
//
// <-- ENGLISH IMPOSED -->
//
// <-- NO CHECK ERROR OUTPUT --> 
//
// <-- Non-regression test for bug 10505 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/10505
//
// <-- Short Description -->
// Docbook tag <note> was not handled.

tmpdir = TMPDIR + "/testxml";
mkdir(tmpdir);
tmpdir = tmpdir + "/en_US";
mkdir(tmpdir);
tmpfile = tmpdir + "/foo.xml";
mputl(["<?xml version=""1.0"" encoding=""UTF-8""?>"
       "<refentry version=""5.0-subset Scilab"""
       "xmlns=""http://docbook.org/ns/docbook"""
       "xmlns:html=""http://www.w3.org/1999/xhtml"""
       "xmlns:db=""http://docbook.org/ns/docbook"">"
       "<refnamediv xml:id=""foo"">"
       "<refname>Foo</refname>"
       "<refpurpose>calculates foo</refpurpose>"
       "</refnamediv>"
       "<refsection>"
       "<para>foo</para>"
       "<note>A note about foo</note>"
       "</refsection>"
       "</refentry>"], tmpfile);
cd(tmpdir);
jar = xmltojar('.', 'foo', 'en_US');
if ~isfile(jar) then pause, end
