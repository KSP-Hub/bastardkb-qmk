#pragma once

#define USB_VBUS_PIN GP25
#define SPLIT_USB_DETECT
#define MASTER_RIGHT

// МАТРИЦА: Ставим 5 рядов, чтобы обойти ошибку "must be less than 8"
// и при этом покрыть все индексы макроса LAYOUT
#define MATRIX_ROWS 5
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { GP22, GP20, GP23, GP21, NO_PIN }
#define MATRIX_COL_PINS { GP19, GP18, GP15, GP14, GP16, GP26 }
#define DIODE_DIRECTION COL2ROW

// ТРЕКБОЛ
#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11
