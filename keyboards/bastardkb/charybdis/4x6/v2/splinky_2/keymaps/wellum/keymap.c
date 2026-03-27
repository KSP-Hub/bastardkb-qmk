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

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
#ifdef VIA_ENABLE
    _VIA1 = 4,
    _VIA2,
    _VIA3
#endif
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_charybdis_4x6(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LGUI, KC_LALT, KC_SPC,  MO(_FN1),MO(_FN2),KC_ENT,  KC_BTN1, KC_TRNS
    ),
    
    [_FN1] = LAYOUT_charybdis_4x6(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(_BASE),_______, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    
    [_FN2] = LAYOUT_charybdis_4x6(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(_BASE),_______, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#ifdef VIA_ENABLE
const uint16_t *const PROGMEM vias[] = {
    keymaps[_BASE],
    keymaps[_FN1],
    keymaps[_FN2],
    keymaps[_BASE]
};

void via_custom_set_value(uint8_t page_id, uint8_t slot_id, uint8_t data[]) {
    // Custom config values
}

void via_custom_get_value(uint8_t page_id, uint8_t slot_id, uint8_t *data) {
    // Custom config values
}

void via_custom_save(void) {
    // Save custom config values
}
#endif
