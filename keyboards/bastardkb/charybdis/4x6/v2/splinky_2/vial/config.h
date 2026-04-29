#pragma once

#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1000

#define RP2040_BOOTLOADER 1

#define USE_SERIAL

/* Soft Serial configuration for split keyboard */
#define SOFT_SERIAL_PIN GP1

// Increasing the number of layers
#define LAYER_STATE_16BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

#define VIAL_KEYBOARD_UID {0xBE, 0xEF, 0x42, 0x69, 0x01, 0x02, 0x03, 0x04} // Случайный ID
#define VIAL_UNLOCK_COMBO {0, 0} // Разблокировка настроек (нажать 0 и 1 клавишу вместе)
