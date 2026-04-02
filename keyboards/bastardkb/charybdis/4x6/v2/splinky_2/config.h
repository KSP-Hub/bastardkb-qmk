#pragma once

// Пин для определения питания по USB. Без него контроллер RP2040 на Splinky "спит".
#define USB_VBUS_PIN GP25
// Автоопределение подключения USB
#define SPLIT_USB_DETECT
// Указываем, что кабель вставлен в правую половину (где трекбол)
#define MASTER_RIGHT
// Общее количество светодиодов в матрице (29 слева + 29 справа в сетке)
#define RGB_MATRIX_LED_COUNT 58
// Пин для связи между половинками
#define SOFT_SERIAL_PIN GP1
