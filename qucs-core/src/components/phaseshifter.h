/*
 * phaseshifter.h - phase shifter class definitions
 *
 * Copyright (C) 2004, 2008 Stefan Jahn <stefan@lkcc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
 * Boston, MA 02110-1301, USA.  
 *
<<<<<<< HEAD
 * $Id: phaseshifter.h,v 1.9 2008/10/05 17:52:12 ela Exp $
=======
 * $Id$
>>>>>>> 80028cb8206ee83926db69b5bd20c9a3c932403d
 *
 */

#ifndef __PHASESHIFTER_H__
#define __PHASESHIFTER_H__

class phaseshifter : public circuit
{
 public:
  CREATOR (phaseshifter);
  void initSP (void);
  void initDC (void);
  void initAC (void);
};

#endif /* __PHASESHIFTER_H__ */
