/***********************************************************************
Copyright 2003-2006 Raza Microelectronics, Inc.(RMI).
This is a derived work from software originally provided by the external
entity identified below. The licensing terms and warranties specified in
the header of the original work apply to this derived work.
Contribution by RMI: 
*****************************#RMI_1#**********************************/
/* Common target dependent code for GDB on MIPS systems running NetBSD.
   Copyright 2002 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifndef mipsfbsd_TDEP_H
#define mipsfbsd_TDEP_H

void mipsfbsd_supply_reg (char *, int);
void mipsfbsd_fill_reg (char *, int);

void mipsfbsd_supply_fpreg (char *, int);
void mipsfbsd_fill_fpreg (char *, int);

#define SIZEOF_STRUCT_REG	(40 * mips_regsize (current_gdbarch))
#define SIZEOF_STRUCT_FPREG	(34 * mips_regsize (current_gdbarch))

#endif /* mipsfbsd_TDEP_H */
