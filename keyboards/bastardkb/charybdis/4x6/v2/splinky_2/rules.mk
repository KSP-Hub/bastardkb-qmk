# Платформа для Splinky (RP2040)
MCU = RP2040
BOARD = PICO

# Включаем основные функции
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
RGB_MATRIX_ENABLE = yes

# Настройки трекбола:
# Указываем конкретный драйвер для трекбола Charybdis
POINTING_DEVICE_DRIVER = pmw3360
SERIAL_DRIVER = vendor
