/*  Scicos
*
*  Copyright (C) INRIA - METALAU Project <scicos@inria.fr>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
* See the file ./license.txt
*/
/*--------------------------------------------------------------------------*/
#include <math.h>
#include "scicos_block4.h"
#include "sci_malloc.h"
#include "dynlib_scicos_blocks.h"
/*--------------------------------------------------------------------------*/
SCICOS_BLOCKS_IMPEXP void bit_clear_32(scicos_block *block, int flag)
{
    int n = 0, m = 0, i = 0;
    SCSINT32_COP *opar = NULL;
    SCSINT32_COP *u = NULL, *y = NULL;
    opar = Getint32OparPtrs(block, 1);
    u = Getint32InPortPtrs(block, 1);
    y = Getint32OutPortPtrs(block, 1);
    m = GetInPortRows(block, 1);
    n = GetInPortCols(block, 1);
    for (i = 0; i < m * n; i++)
    {
        *(y + i) = ((*(u + i)) & (*opar));
    }
}
/*--------------------------------------------------------------------------*/
