/*
* Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
* Copyright (C) 2013 - Scilab Enterprises - Cedric Delamarre
*
 * Copyright (C) 2012 - 2016 - Scilab Enterprises
 *
 * This file is hereby licensed under the terms of the GNU GPL v2.0,
 * pursuant to article 5.3.4 of the CeCILL v.2.1.
 * This file was originally licensed under the terms of the CeCILL v2.1,
 * and continues to be available under such terms.
 * For more information, see the COPYING file which you should have received
 * along with this program.
*
*/

/*--------------------------------------------------------------------------*/
#ifndef __DYNLIB_SPARSE_GW_H__
#define __DYNLIB_SPARSE_GW_H__

#ifdef _MSC_VER
#ifdef SPARSE_GW_EXPORTS
#define SPARSE_GW_IMPEXP __declspec(dllexport)
#else
#define SPARSE_GW_IMPEXP __declspec(dllimport)
#endif
#else
#define SPARSE_GW_IMPEXP
#endif

#endif /* __DYNLIB_SPARSE_GW_H__ */
/*--------------------------------------------------------------------------*/