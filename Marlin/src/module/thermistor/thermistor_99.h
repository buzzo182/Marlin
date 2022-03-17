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
// R25 = 100 kOhm, 4.7 kOhm pull-up, extruder thermistor, self identified
constexpr temp_entry_t temptable_99[] PROGMEM = {
{ OV(   37), 280 }, // estimated
{ OV(   38), 260 }, // estimated
{ OV(   39), 250 }, // estimated
{ OV(   40), 245 }, // estimated
{ OV(   41), 238 },
{ OV(   44), 234 },
{ OV(   48), 228 },
{ OV(   52), 224 },
{ OV(   56), 219 },
{ OV(   61), 214 },
{ OV(   66), 210 },
{ OV(   71), 205 },
{ OV(   78), 200 },
{ OV(   84), 197 },
{ OV(   92), 192 },
{ OV(  100), 188 },
{ OV(  109), 184 },
{ OV(  120), 179 },
{ OV(  131), 174 },
{ OV(  143), 170 },
{ OV(  156), 165 },
{ OV(  187), 156 },
{ OV(  268), 137 },
{ OV(  379), 115 },
{ OV(  516),  98 },
{ OV(  665),  80 },
{ OV(  801),  62 },
{ OV(  903),  45 },
{ OV(  966),  28 },
{ OV(  983),  21 },
{ OV( 1000),  10 } // estimated
};
