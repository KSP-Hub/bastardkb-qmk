#pragma once

// Питание и связь
#define USB_VBUS_PIN GP25
#define SPLIT_USB_DETECT
#define MASTER_RIGHT

// МАТРИЦА (Юбилейная настройка для 100-й итерации)
#define MATRIX_ROWS 8
#define MATRIX_COLS 6
// Указываем пины для одной стороны, остальные QMK подтянет сам через SPLIT
#define MATRIX_ROW_PINS { GP22, GP20, GP23, GP21, NO_PIN, NO_PIN, NO_PIN, NO_PIN }
#define MATRIX_COL_PINS { GP19, GP18, GP15, GP14, GP16, GP26 }
#define DIODE_DIRECTION COL2ROW

// ТРЕКБОЛ (SPI настройки)
#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11

// ПОДСВЕТКА
#define RGB_MATRIX_LED_COUNT 58
