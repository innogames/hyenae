/*
 * Hyenae
 *   Advanced Network Packet Generator
 *
 * Copyright (C) 2009 - 2010 Robin Richter
 *
 *   Contact  : richterr@users.sourceforge.net
 *   Homepage : http://sourceforge.net/projects/hyenae/
 *
 * This file is part of Hyenae.
 *
 * Hyenae is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Hyenae is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Hyenae.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef HYENAE_UDP_H
  #define HYENAE_UDP_H

#include "hyenae-base.h"
#include "hyenae-patterns.h"
#include "hyenae-attack.h"

/* -------------------------------------------------------------------------- */

int
  hy_build_udp_packet
    (
      hy_pattern_t*,
      hy_pattern_t*,
      int,
      unsigned char**,
      int*,
      unsigned char*,
      int,
      unsigned int
    );

/* -------------------------------------------------------------------------- */

#endif /* HYENAE_UDP_H */
