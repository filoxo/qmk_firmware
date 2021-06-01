/* Copyright 2021 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "gameboy.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 12, 13, 14, 15 },
  { 11, 10,  9,  8 },
  {  4,  5,  6,  7 },
  {  3,  2,  1,  0 }
}, {
  // LED Index to Physical Position
  { 244,  0 }, { 163,  0 }, {  81,  0 }, {   0, 0  },   
  {   0, 21 }, {  81, 21 }, { 163, 21 }, { 244, 21 },
  { 244, 43 }, { 163, 43 }, {  81, 43 }, {   0, 43 },
  {   0, 64 }, {  81, 64 }, { 163, 64 }, { 244, 64 }
}, {
  // LED Index to Flag
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1
} };