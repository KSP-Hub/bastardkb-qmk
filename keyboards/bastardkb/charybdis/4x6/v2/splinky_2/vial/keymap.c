#include QMK_KEYBOARD_H

// Кастомные коды для управления трекболом в Vial
enum custom_keycodes {
    DPI_MOD = SAFE_RANGE,
    DPI_RMOD,
    SNIPING,
    SNP_TOG,
    DRGSCRL,
    DRG_TOG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_charybdis_4x6(
        //|L.C1, C2,      C3,      C4,      C5,      C6,   |      |R=C1,    C2,      C3,      C4,      C5,         C6,  | row 1, row 2, row 3, row 4; Thumb; column 12; 
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NO,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       KC_NO,    
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_NO,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_NO,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_NO,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,       KC_NO,
        KC_ESC,  KC_SPC,  KC_TAB,  KC_NO,   KC_NO,                 KC_ENT,   KC_BSPC, KC_RSFT
    ),

    [1] = LAYOUT_charybdis_4x6(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
    ),
    
    [2] = LAYOUT_charybdis_4x6(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_charybdis_4x6(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
    )
};
