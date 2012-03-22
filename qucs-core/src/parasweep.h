/*
 * parasweep.h - parameter sweep class definitions
 *
 * Copyright (C) 2004, 2007, 2008 Stefan Jahn <stefan@lkcc.org>
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
 * $Id: parasweep.h,v 1.8 2008/10/05 17:52:11 ela Exp $
=======
 * $Id$
>>>>>>> 80028cb8206ee83926db69b5bd20c9a3c932403d
 *
 */

#ifndef __PARASWEEP_H__
#define __PARASWEEP_H__

class analysis;
class variable;
class sweep;

class parasweep : public analysis
{
 public:
  ACREATOR (parasweep);
  parasweep (char *);
  parasweep (parasweep &);
  ~parasweep ();
  int  initialize (void);
  int  solve (void);
  int  cleanup (void);
  void saveResults (void);

 private:
  variable * var;
  sweep * swp;
  void * eqn;
};

#endif /* __PARASWEEP_H__ */
