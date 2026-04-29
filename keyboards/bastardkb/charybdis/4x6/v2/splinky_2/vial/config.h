#pragma once

#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 1000

#define RP2040_BOOTLOADER 1
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP1

// Ограничим слои до 4 для экономии RAM (хватит за глаза)
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define VIAL_KEYBOARD_UID {0xBE, 0xEF, 0x42, 0x69, 0x01, 0x02, 0x03, 0x04}
#define VIAL_UNLOCK_COMBO {0, 0}

// Настройки трекбола
#define POINTING_DEVICE_ROTATION_90 // Если трекбол инвертирован, удалите или замените
