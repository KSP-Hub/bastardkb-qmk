#include QMK_KEYBOARD_H

// Слои
enum layers { _BASE, _SYM, _NAV };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_charybdis_4x6(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_ENT,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_RSFT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,  KC_SPC,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,  KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        // Большие пальцы: Sticky Shift, Symbol layer, Space | Nav layer, Sticky Ctrl, Sticky Alt
        OSM(MOD_LSFT), MO(_SYM), KC_SPC, MO(_NAV), OSM(MOD_LCTL), OSM(MOD_LALT), KC_TRNS, KC_TRNS
    )
};
