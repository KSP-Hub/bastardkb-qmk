{
    "keyboard_name": "Charybdis (4x6) Splinky Custom",
    "manufacturer": "BastardKB",
    "url": "https://bastardkb.com",
    "maintainer": "wellum",
    "processor": "RP2040",
    "bootloader": "rp2040",
    "usb": {
        "vid": "0x535A",
        "pid": "0x0002",
        "device_version": "2.0.0"
    },
    "matrix_pins": {
        "cols": ["GP27", "GP28", "GP15", "GP6", "GP7", "GP8"],
        "rows": ["GP29", "GP26", "GP5", "GP4", "GP9"]
    },
    "diode_direction": "ROW2COL",
    "split": {
        "enabled": true,
        "soft_serial_pin": "GP1"
    },
    "ws2812": {
        "pin": "GP0",
        "driver": "vendor"
    },
    "features": {
        "mousekey": true,
        "pointing_device": true,
        "rgb_matrix": true
    }
}
