#pragma once

// Питание и связь
#define USB_VBUS_PIN GP25
#define SPLIT_USB_DETECT
#define MASTER_RIGHT

// МАТРИЦА (Корректные параметры для Charybdis 4x6 Split)
// Указываем параметры ОДНОЙ половины, QMK сам удвоит их для сплита
#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { GP22, GP20, GP23, GP21 }
#define MATRIX_COL_PINS { GP19, GP18, GP15, GP14, GP16, GP26 }
#define DIODE_DIRECTION COL2ROW

// ТРЕКБОЛ (SPI настройки)
#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11

// ПОДСВЕТКА
#define RGB_MATRIX_LED_COUNT 58
