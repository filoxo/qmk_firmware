/*
Copyright 2019 Carlos Filoteo

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Carlos Filoteo
#define PRODUCT         dactyl_64
#define DESCRIPTION     A custom keyboard

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/
// #define MATRIX_ROW_PINS { B3, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define EE_HANDS
#define USE_I2C

#define RGB_DI_PIN D2

#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 32, 32 }

#define DRIVER_LED_TOTAL 64
#define RGBLIGHT_LIMIT_VAL 100
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
