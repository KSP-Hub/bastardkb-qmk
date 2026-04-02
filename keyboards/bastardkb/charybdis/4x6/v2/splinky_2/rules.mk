# Платформа для Splinky (RP2040)
MCU = RP2040
BOARD = PICO

# Включаем основные функции
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
RGB_MATRIX_ENABLE = yes

# Драйверы (исправление ошибок 87 и 88)
POINTING_DEVICE_DRIVER = pmw3360
RGB_MATRIX_DRIVER = ws2812
SERIAL_DRIVER = vendor
