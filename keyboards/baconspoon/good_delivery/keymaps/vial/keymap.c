/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
	       KC_Q,    KC_W,    KC_E,         KC_R,         KC_T,          KC_Y,          KC_U,         KC_I,         KC_O,    KC_P,
	       KC_A,    KC_S,    LCTL_T(KC_D), LSFT_T(KC_F), KC_G,          KC_H,          LSFT_T(KC_J), LCTL_T(KC_K),          KC_L,
	       KC_Z,             KC_X,         KC_C,         KC_V,          KC_B,          KC_N,         KC_M,         KC_COMM, KC_DOT,
	       KC_LCTL, KC_LALT, KC_LGUI,                    LT(1, KC_SPC), LT(1, KC_SPC),               KC_RALT,      KC_RGUI, KC_RCTL
	),

  [1] = LAYOUT(
	       KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_F,    KC_G,    KC_LBRC, KC_MINS, KC_EQL,           KC_SCLN,
	       KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_RBRC, KC_QUOT, KC_BSLS, KC_TRNS, KC_GRV,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	),

    
  [2] = LAYOUT(
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	       KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	),

    
  [3] = LAYOUT(
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	       KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
	),
};