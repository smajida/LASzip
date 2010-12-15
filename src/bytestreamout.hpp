/******************************************************************************
 *
 * Project:  integrating laszip into liblas - http://liblas.org -
 * Purpose:
 * Author:   Martin Isenburg
 *           isenburg at cs.unc.edu
 *
 ******************************************************************************
 * Copyright (c) 2010, Martin Isenburg
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Licence as published
 * by the Free Software Foundation.
 *
 * See the COPYING file for more information.
 *
 ****************************************************************************/

/*
===============================================================================

  FILE:  bytestreamout.hpp
  
  CONTENTS:
      
  PROGRAMMERS:
  
    martin isenburg@cs.unc.edu
  
  COPYRIGHT:
  
    copyright (C) 2010  martin isenburg@cs.unc.edu
    
    This software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  CHANGE HISTORY:
  
    8 December 2010 -- unified framework for all entropy coders
  
===============================================================================
*/
#ifndef BYTE_STREAM_OUT_H
#define BYTE_STREAM_OUT_H

#include "mydefs.hpp"

class ByteStreamOut
{
public:
/* write a single byte                                       */
  virtual bool putByte(unsigned char byte) = 0;
/* write an array of bytes                                   */
  virtual bool putBytes(unsigned char* bytes, unsigned int num_bytes) = 0;
/* returns how many bytes were written since reset           */
  virtual unsigned int byteCount() const = 0;
/* returns how many bytes were written                       */
  virtual void resetCount() = 0;
/* destructor                                                */
  virtual ~ByteStreamOut() {};
};

#endif