/* Copyright 2019 Louwii
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

#define _BL 0
#define _AL 1
#define _FL 2
#define _SL 3
#define _FSL 4
// Row 1
#define JP_GRV  S(KC_LBRC) // ` (USキーボードの Shift+[)
#define JP_MINS KC_MINS    // - (USキーボードの -)
#define JP_EQL  S(KC_MINS) // = (USキーボードの Shift+-)
// Row 2
#define JP_LBRC KC_RBRC    // [ (USキーボードの ])
#define JP_RBRC KC_BSLS    // ] (USキーボードの \)
#define JP_BSLS KC_INT3    // \ (KC_INT3. USキーボードには無いキー)
// Row 3
#define JP_SCLN KC_SCLN    // ; (USキーボードの ;)
#define JP_QUOT S(KC_7)    // ' (USキーボードの Shift+7)
// Row 4
#define JP_COMM KC_COMM    // , (USキーボードの ,)
#define JP_DOT  KC_DOT     // . (USキーボードの .)
#define JP_SLSH KC_SLSH    // / (USキーボードの /)
// Row 1 (FN)
#define JP_ZKHK KC_GRV     // 半角/全角 (USキーボードの `)
// Row 1 (Shift)
#define JP_TILD S(KC_EQL)  // ~ (USキーボードの Shift+0)
#define JP_EXLM S(KC_1)    // ! (USキーボードの Shift+1)
#define JP_AT   KC_LBRC    // @ (USキーボードの [)
#define JP_HASH S(KC_3)    // # (USキーボードの Shift+3)
#define JP_DLR  S(KC_4)    // $ (USキーボードの Shift+4)
#define JP_PERC S(KC_5)    // % (USキーボードの Shift+5)
#define JP_CIRC KC_EQL     // ^ (USキーボードの =)
#define JP_AMPR S(KC_6)    // & (USキーボードの Shift+6)
#define JP_ASTR S(KC_QUOT) // * (USキーボードの Shift+')
#define JP_LPRN S(KC_8)    // ( (USキーボードの Shift+8)
#define JP_RPRN S(KC_9)    // ) (USキーボードの Shift+9)
#define JP_UNDS S(KC_INT1) // _ (KC_INT1. USキーボードには無いキー)
#define JP_PLUS S(KC_SCLN) // + (USキーボードの Shift+;)
// Row 2 (Shift)
#define JP_LCBR S(KC_RBRC) // { (USキーボードの Shift+])
#define JP_RCBR S(KC_BSLS) // } (USキーボードの Shift+\)
#define JP_PIPE S(KC_INT3) // | (S(KC_INT3). USキーボードには無いキー)
// Row 3 (Shift)
#define JP_COLN KC_QUOT    // : (USキーボードの ')
#define JP_DQUO S(KC_2)    // " (USキーボードの Shift+2)
// Row 4 (Shift)
#define JP_LABK S(KC_COMM) // < (USキーボードの Shift+,)
#define JP_RABK S(KC_DOT)  // > (USキーボードの Shift+.)
#define JP_QUES S(KC_SLSH) // ? (USキーボードの Shift+/)

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Keymap _BL: Base Layer
  [_BL] = LAYOUT_tkl_ansi(
      KC_ESC,  KC_F2,  KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,                      KC_PSCR, KC_SLCK, KC_PAUS,
      KC_GRV,  KC_1,   KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   JP_MINS, JP_EQL,  KC_BSPC,            KC_INS,  KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,   KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   JP_LBRC, JP_RBRC, JP_BSLS,            KC_DEL,  KC_END,  KC_PGDN,
      KC_CAPS, KC_A,   KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   JP_SCLN,JP_QUOT,          KC_ENT,                                       
      MO(_SL), KC_Z,   KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  JP_COMM,JP_DOT, JP_SLSH,                  MO(_SL),                     KC_UP,           
      KC_LCTL, MO(_FL),LM(_AL,MOD_LALT),            KC_SPC,             LM(_AL,MOD_RALT),MO(_FL),  KC_APP, KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT   ),

  // Keymap _AL: Alt Layer
  [_AL] = LAYOUT_tkl_ansi(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS,
      JP_ZKHK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                            
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,           KC_TRNS,         
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS   ),

  // Keymap _FL: Function Layer
  [_FL] = LAYOUT_tkl_ansi(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS,   RESET,
      JP_ZKHK,   KC_F2,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_TRNS, KC_TRNS, KC_TRNS,
    A(KC_TAB), KC_TRNS, C(KC_S), KC_TRNS, KC_TRNS, KC_TRNS, C(KC_C), KC_TRNS, KC_TRNS, KC_TRNS, C(KC_V), KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_TOG, RGB_HUD, RGB_HUI, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_TRNS, KC_TRNS,        A(KC_ENT),                            
      KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS,  BL_DEC, BL_TOGG,  BL_INC, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU,                   KC_RSFT,           KC_TRNS,         
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS   ),

  // Keymap _SL: Shift Layer
  [_SL] = LAYOUT_tkl_ansi(
      KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS,    KC_TRNS,    KC_PAUS,
      JP_TILD,  JP_EXLM,   JP_AT, JP_HASH,  JP_DLR, JP_PERC, JP_CIRC, JP_AMPR, JP_ASTR, JP_LPRN, JP_RPRN, JP_UNDS, JP_PLUS, KC_BSPC,     KC_TRNS,    KC_TRNS, S(KC_PGUP),
    S(KC_TAB),  S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), JP_LCBR, JP_RCBR, JP_PIPE,     KC_TRNS,    KC_TRNS, S(KC_PGDN),
      KC_TRNS,  S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), JP_COLN, JP_DQUO,           KC_ENT,                            
      KC_TRNS,  S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), JP_LABK, JP_RABK, JP_QUES,                   KC_TRNS,                S(KC_UP),         
      KC_TRNS, MO(_FSL), KC_TRNS,                          KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  S(KC_LEFT), S(KC_DOWN), S(KC_RGHT)  ),

  // Keymap _FSL: Function + Shift Layer
  [_FSL] = LAYOUT_tkl_ansi(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), KC_TRNS, KC_TRNS,          KC_TRNS,                            
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS,                   KC_TRNS,           KC_TRNS,         
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS   )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {
  // Empty
}

void matrix_scan_user(void) {
  // Empty
}

void led_set_user(uint8_t usb_led) {
  // Empty
}
