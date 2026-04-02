# =====================Фиксируем платформу для RP2040 (Splinky)=====================
# =====================Processor configuration=====================
MCU = RP2040
BOARD = PICO
# =====================BOOTLOADER = rp2040
# =====================ARCH = ARMV6-M
# =====================PLATFORM = ARM
# =====================PLATFORM_KEY = arm
# =====================ARM_GCC_VERSION = 13
# =====================OPT_DEFS += -DARM
# =====================CONVERT_TO = splinky

# =====================Включаем нужные функции=====================
# =====================Core features=====================
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
RGB_MATRIX_ENABLE = yes
SERIAL_DRIVER = vendor

# =====================QMK features=====================
# =====================QMK_SETTINGS = yes

# =====================Memory optimization=====================
# =====================BOOTMAGIC_ENABLE = no
# =====================MOUSEKEY_ENABLE = no
# =====================EXTRAKEY_ENABLE = no
# =====================CONSOLE_ENABLE = no
# =====================COMMAND_ENABLE = no

# =====================RGB features=====================
# =====================RGB_MATRIX_ENABLE = yes
# =====================RGB_MATRIX_KEYPRESSES = yes
# =====================RGB_MATRIX_FRAMEBUFFER_EFFECTS = yes

# =====================Pointing device=====================
# =====================POINTING_DEVICE_ENABLE = yes
# =====================POINTING_DEVICE_DRIVER = pmw3360
# =====================POINTING_DEVICE_INVERT_X = yes

# =====================VIA support=====================
# =====================VIA_ENABLE = yes
