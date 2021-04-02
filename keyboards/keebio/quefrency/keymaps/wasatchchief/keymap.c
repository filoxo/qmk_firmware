#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define SFT_UP RSFT_T(KC_UP)
#define GUI_LFT LGUI_T(KC_LEFT)
#define CTL_RHT RCTL_T(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_with_macro(
    KC_ESC,  KC_DEL,  KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  KC_BSPC, \
    KC_VOLD, KC_VOLU, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_MUTE, KC_F1,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_F2,   KC_F3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, SFT_UP, \
    KC_F4,   KC_F5,   KC_LCTL, KC_LGUI, KC_LALT, MO(_FN1),KC_SPC,           KC_SPC,  KC_SPC, KC_RALT, KC_RGUI,  GUI_LFT, KC_UP,   CTL_RHT
  ),

  [_FN1] = LAYOUT_60_with_macro(
    _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, KC_BRIU, KC_BRIU, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_M_P, RGB_M_B, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, RGB_M_R,RGB_M_SW,RGB_M_SN, _______, _______, _______, _______, _______, _______, _______,\
    _______, _______, _______, _______, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
  )
};
