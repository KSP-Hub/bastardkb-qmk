#pragma once

#define USB_VBUS_PIN GP25
#define SPLIT_USB_DETECT
#define MASTER_RIGHT

// Возвращаемся к 4 рядам, чтобы не злить 4x6.c
#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { GP22, GP20, GP23, GP21 }
#define MATRIX_COL_PINS { GP19, GP18, GP15, GP14, GP16, GP26 }
#define DIODE_DIRECTION COL2ROW

#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11

// Временно уменьшим число LED до физического на одну сторону,
// чтобы массив в 4x6.c влез в память
#define RGB_MATRIX_LED_COUNT 29
