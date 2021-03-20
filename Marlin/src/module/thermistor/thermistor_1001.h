/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Custom bed thermistor 15k and table from original metamaquina firmware

const temp_entry_t temptable_1001[] PROGMEM = {
  { OV(    1), 669 },
  { OV(   54), 180 },
  { OV(  107), 140 },
  { OV(  160), 119 },
  { OV(  213), 104 },
  { OV(  266),  93 },
  { OV(  319),  83 },
  { OV(  372),  75 },
  { OV(  425),  68 },
  { OV(  478),  61 },
  { OV(  531),  55 },
  { OV(  584),  48 },
  { OV(  637),  42 },
  { OV(  690),  36 },
  { OV(  743),  29 },
  { OV(  796),  22 },
  { OV(  849),  14 },
  { OV(  902),   5 },
  { OV(  955),  -7 },
  { OV( 1008),  -35}
};
