// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * power off, sleep, wake
    * rewind, play/pause, fast foreward
    * copy, paste, find
     */
    [0] = LAYOUT_ortho_3x3(
        KC_PWR,    KC_SLEP,    KC_WAKE,
        KC_MRWD,    KC_MPLY,    KC_MFFD,
        KC_COPY,    KC_PSTE,    KC_FIND
    )
};


// rotary encoder volume
#if defines(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif

bool oled_task_user(void) {
    oled_write_P(PSTR("LOCK IN"), false);
    return false;
}
