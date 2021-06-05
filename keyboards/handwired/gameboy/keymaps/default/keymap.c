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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

enum keycodes {
  GB_LIGHTS = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,   KC_BSPC,
        KC_P4,   KC_P5,   KC_P6,   KC_P0,
        KC_P1,   KC_P2,   KC_P3,   KC_P0,
        MO(_FN), KC_P0,   KC_PDOT, KC_P0
    ),
    [_FN] = LAYOUT(
        RESET, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, 
        KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, 
        KC_NO, RGB_TOG, RGB_MOD, GB_LIGHTS 
    )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case GB_LIGHTS:
      if (record->event.pressed) {
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_gb_lights);
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
};

