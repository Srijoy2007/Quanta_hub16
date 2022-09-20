
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
      KC_MUTE,   KC_MPLY,
    KC_7, KC_8, KC_9, KC_PAST,
    KC_4, KC_5, KC_6, KC_PMNS,
    KC_1, KC_2, KC_3, KC_PPLS,
    MO(1), KC_0, KC_PDOT, KC_PENT
  ),

  [1] = LAYOUT( /* LED Control */
        _______,           _______,
    _______, RGB_MOD, RGB_RMOD, RGB_TOG,
    RGB_VAD, RGB_VAI, RGB_HUD,  RGB_HUI,
    RGB_SAD, RGB_SAI, _______,  _______,
    _______, _______, RESET,    _______
  ),

  [2] = LAYOUT(
        _______,           _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  ),

  [3] = LAYOUT(
        _______,           _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* Left Encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) { /* Right Encoder */
        if (clockwise) {
            tap_code(KC_MPRV);
        } else {
            tap_code(KC_MNXT);
        }
    }
}
