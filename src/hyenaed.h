/*
 * Hyenae Daemon
 *   Advanced Network Packet Generator Daemon
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

#ifndef HYENAED_H
  #define HYENAED_H

#include "hyenae-common.h"
#include "hyenaed-daemon.h"

#include <getopt.h>

/* -------------------------------------------------------------------------- */

void
  hy_handle_output
    (
      FILE*,
      int,
      const char*,
      const char*
    );

/* -------------------------------------------------------------------------- */

void
  hy_handle_attack_blocking
    (
      hy_attack_loop_t*
    );

/* -------------------------------------------------------------------------- */

int
  main
    (
      int argc,
      char** argv
    );

/* -------------------------------------------------------------------------- */

#endif /* HYENAED_H */
