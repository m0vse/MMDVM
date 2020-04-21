/*
 *   Copyright (C) 2020 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(FMTimeout_H)
#define  FMTimeout_H

#include "Config.h"

class CFMTimeout {
public:
  CFMTimeout();

  void setParams(uint8_t level);

  void start();
  void stop();

  void getAudio(q15_t* samples, uint8_t length);

  q15_t getAudio(q15_t sample);

private:
  q15_t    m_level;
  bool     m_running;
  uint32_t m_pos;
  uint8_t  m_n;
};

#endif
