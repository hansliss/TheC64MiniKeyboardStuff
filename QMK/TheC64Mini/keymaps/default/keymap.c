/* Copyright 2021 Hans Liss
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
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
		     KC_1,    KC_3,    KC_5,    KC_7,    KC_9,    KC_F23,  KC_MINS, KC_BSPC,
		     KC_GRV,  KC_W,    KC_R,    KC_Y,    KC_I,    KC_P,    KC_SCLN, KC_ENT,
		     KC_LCTL, KC_A,    KC_D,    KC_G,    KC_J ,   KC_L,    KC_RBRC, KC_RGHT,
		     KC_ESC,  KC_LSFT, KC_X,    KC_V,    KC_N,    KC_COMM, KC_SLSH, KC_DOWN,
		     KC_SPC,  KC_Z,    KC_C,    KC_B,    KC_M,    KC_DOT,  KC_RSFT, KC_F1,
		     KC_LGUI, KC_S,    KC_F,    KC_H,    KC_K,    KC_LBRC, KC_EQL,  KC_F3,
		     KC_Q,    KC_E,    KC_T,    KC_U,    KC_O,    KC_BSLS, KC_QUOT, KC_F5,
		     KC_2,    KC_4,    KC_6,    KC_8,    KC_0,    KC_F24, KC_HOME, KC_F7,
		                                                                             KC_TAB
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
