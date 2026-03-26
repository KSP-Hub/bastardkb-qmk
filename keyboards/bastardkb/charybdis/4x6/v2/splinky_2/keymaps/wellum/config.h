#define RGB_MATRIX_SPLIT { 29, 29 }

#pragma once

#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1000

// Добавить RGB-конфигурацию для раскладки
#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR
#   define RGB_MATRIX_STARTUP_HUE 0
#   define RGB_MATRIX_STARTUP_SAT 255
#   define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#endif

// Увеличить количество слоев
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
