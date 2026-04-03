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
// Используем универсальное имя PMW33XX, которое требует драйвер QMK
#define PMW33XX_CS_PIN GP13 // Пин выбора чипа (Chip Select)
#define SPI_SCK_PIN GP10 // Тактовый сигнал
#define SPI_MISO_PIN GP12 // Вход данных
#define SPI_MOSI_PIN GP11 // Выход данных

// Пины для связи и RGB закомментированы (они в info.json)
// #define SOFT_SERIAL_PIN GP1
// #define WS2812_DI_PIN GP0
