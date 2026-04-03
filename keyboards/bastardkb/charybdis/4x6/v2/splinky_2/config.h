#pragma once

// Пин для определения питания по USB
#define USB_VBUS_PIN GP25

// Автоопределение подключения USB и сторона (Master - правая)
#define SPLIT_USB_DETECT
#define MASTER_RIGHT

// МАТРИЦА (Pins для Charybdis 4x6 на Splinky)
#define MATRIX_ROW_PINS { GP22, GP20, GP23, GP21 }
#define MATRIX_COL_PINS { GP19, GP18, GP15, GP14, GP16, GP26 }
#define DIODE_DIRECTION COL2ROW  // ЭТО ИСПРАВИТ ОШИБКУ #error

// Светодиоды
#define RGB_MATRIX_LED_COUNT 58

// Настройки SPI для трекбола (датчик PMW3360)
#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11

// Настройки связи (Split)
// Пины для SERIAL и RGB закомментированы, так как QMK берет их из info.json
