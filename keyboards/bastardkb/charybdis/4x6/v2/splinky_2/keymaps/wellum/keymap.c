#ifdef VIA_ENABLE
#    include "via.h"
#    ifndef LAYER_STATE_16BIT
#        define LAYER_STATE_16BIT
#    endif
#endif

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_user(void) {
    #ifdef MASTER_RIGHT
    if (is_keyboard_right()) {
    #else
    if (is_keyboard_left()) {
    #endif
        rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_set_color_all(RGB_WHITE);
    }
}
#endif

enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_4x6(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_LGUI, KC_LALT, KC_SPC,  MO(_FN1),MO(_FN2),KC_ENT
    ),
    
    [_FN1] = LAYOUT_4x6(
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(_BASE),_______, KC_TRNS
    ),
    
    [_FN2] = LAYOUT_4x6(
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, MO(_BASE),_______, KC_TRNS
    )
};

#ifdef VIA_ENABLE
void via_custom_set_value(uint8_t page_id, uint8_t slot_id, uint8_t data[]) {
    // =====================Custom config values=====================
}

void via_custom_get_value(uint8_t page_id, uint8_t slot_id, uint8_t *data) {
    // =====================Custom config values=====================
}

void via_custom_save(void) {
    // =====================Save custom config values=====================
}
#endif
