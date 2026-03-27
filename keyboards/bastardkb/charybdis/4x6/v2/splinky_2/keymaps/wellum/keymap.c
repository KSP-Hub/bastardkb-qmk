#ifdef VIA_ENABLE
#    include "via.h"
#    ifndef LAYER_STATE_8BIT
#        define LAYER_STATE_8BIT
#    endif
#endif

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_set_color_all(RGB_WHITE);
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#ifdef VIA_ENABLE
    [_VIA1] = LAYOUT_charybdis_4x6(
#else
    [0] = LAYOUT_charybdis_4x6(
#endif
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LGUI, KC_LALT, KC_SPC,  MO(1),   MO(2),   KC_ENT,  KC_BTN1, KC_TRNS
    ),
    
    [1] = LAYOUT_charybdis_4x6(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(0),   _______, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    
    [2] = LAYOUT_charybdis_4x6(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(0),   _______, KC_TRNS, KC_TRNS, KC_TRNS
    )
#ifdef VIA_ENABLE
};
const uint16_t *const PROGMEM keymaps[] = {
    [0] = keymaps[_VIA1],
    [_VIA1] = keymaps[_VIA1],
    [_VIA2] = keymaps[1],
    [_VIA3] = keymaps[2]
};
#endif
