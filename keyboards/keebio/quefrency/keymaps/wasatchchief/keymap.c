#include QMK_KEYBOARD_H

#define _BASE 0
#define _FN 1

#define FN MO(_FN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_with_macro(
    KC_ESC,  KC_DEL,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_BSPC, KC_BSPC,
    KC_VOLD, KC_VOLU, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_MUTE, KC_F1,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
    KC_F2,   KC_F3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, 
    KC_F4,   KC_F5,   KC_LCTL, KC_LGUI, KC_LALT, FN,      KC_SPC,  KC_SPC,  KC_SPC,  KC_RALT, KC_RGUI, KC_RGUI, KC_APP,  KC_RCTL
  ),

  [_FN] = LAYOUT_60_with_macro(
    KC_NO,   KC_NO,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   RGB_RMOD,RGB_HUD, RGB_SAD, RGB_M_P, RGB_M_B, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_R, RGB_M_SW,RGB_M_SN,KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};
