#include QMK_KEYBOARD_H

// РУЧНОЕ ОПРЕДЕЛЕНИЕ МАКРОСА (Маппинг 56 клавиш в матрицу 4x6)
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35, \
         LT1, LT2, LT3, LT4, LT5, RT1, RT2, RT3 \
) \
{ \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, R35 }  \
}

// Теперь используем наш созданный макрос
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_ENT,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_RSFT,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,  KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,  KC_SPC,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,  KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
ы
