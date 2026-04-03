#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_user(void) {
    if (is_keyboard_master()) {
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
    [_BASE] = LAYOUT_charybdis_4x6(
        // Левая половина (4 ряда по 6 клавиш = 24)
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,

        // Правая половина (4 ряда по 6 клавиш = 24)
        KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_ENT,
        KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_RSFT,
        KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,  KC_SPC,
        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,

        // Блок большого пальца (Thumb cluster) — суммарно 8 клавиш
        // 5 клавиш слева:
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // 3 клавиши справа:
        KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#ifdef VIA_ENABLE
void via_custom_set_value(uint8_t page_id, uint8_t slot_id, uint8_t data[]) { }
void via_custom_get_value(uint8_t page_id, uint8_t slot_id, uint8_t *data) { }
void via_custom_save(void) { }
#endif
