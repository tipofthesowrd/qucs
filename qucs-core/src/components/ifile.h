/*
 * ifile.h - file based current source class definitions
 *
 * Copyright (C) 2007, 2008, 2009 Stefan Jahn <stefan@lkcc.org>
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
 * $Id: ifile.h,v 1.4 2009/11/03 21:26:01 ela Exp $
=======
 * $Id$
>>>>>>> 80028cb8206ee83926db69b5bd20c9a3c932403d
 *
 */

#ifndef __IFILE_H__
#define __IFILE_H__

class dataset;
class interpolator;

class ifile : public circuit
{
 public:
  CREATOR (ifile);
  ~ifile ();
  void initSP (void);
  void initDC (void);
  void initAC (void);
  void initTR (void);
  void calcTR (nr_double_t);
  void prepare (void);

private:
  dataset * data;
  int dataType;
  int interpolType;
  interpolator * inter;
};

#endif /* __IFILE_H__ */
