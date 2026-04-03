#pragma once

// Пин для определения питания по USB
#define USB_VBUS_PIN GP25

// Автоопределение подключения USB
#define SPLIT_USB_DETECT

// Указываем сторону подключения
#define MASTER_RIGHT

// Светодиоды
#define RGB_MATRIX_LED_COUNT 58

// Настройки SPI для трекбола (датчик PMW3360)
// ВАЖНО: Используем PMW33XX_CS_PIN на GP13, как требует драйвер QMK
#define PMW33XX_CS_PIN GP13
#define SPI_SCK_PIN GP10
#define SPI_MISO_PIN GP12
#define SPI_MOSI_PIN GP11

// Пины для связи и RGB закомментированы (они в info.json)
// #define SOFT_SERIAL_PIN GP1
// #define WS2812_DI_PIN GP0
