/* Copyright 2019 Carlos Filoteo
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
#include "lamp.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*

void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up

  matrix_init_user();
}

void matrix_scan_kb(void) {
  // put your looping keyboard code here
  // runs every cycle (a lot)

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  // put your per-action keyboard code here
  // runs for every action, just before processing by the firmware

  return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
  // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

  led_set_user(usb_led);
}

*/

led_config_t g_led_config = { {
  {  0,  1,  2,  3 },
  {  4,  5,  6,  7 },
  {  8,  9, 10, 11 },
  { 12, 13, 14, 15 }
}, {
  // LED Index to Physical Position

  { 244,   0 }, { 162,   0 }, {  81,   0 }, {   0,   0 },   
  {   0,  21 }, {  81,  21 }, { 162,  21 }, { 244,  21 },
  { 244,  42 }, { 162,  42 }, {  81,  42 }, {   0,  42 },
  {   0,  64 }, {  81,  64 }, { 162,  64 }, { 244,  64 }

  // {   0,   0 }, {  81,   0 }, { 162,   0 }, { 244,   0 },
  // {   0,  21 }, {  81,  21 }, { 162,  21 }, { 244,  21 },
  // {   0,  42 }, {  81,  42 }, { 162,  42 }, { 244,  42 },  
  // {   0,  64 }, {  81,  64 }, { 162,  64 }, { 244,  64 }
}, {
  // LED Index to Flag
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1,
  1, 1, 1, 1
} };