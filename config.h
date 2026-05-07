#pragma once

// Combo settings
#define COMBO_COUNT 6
#define COMBO_ONLY_FROM_LAYER 0

// Tap-Hold Configuration Options
// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
// https://precondition.github.io/home-row-mods
#define TAPPING_TERM 190

#define NKRO_DEFAULT_ON true

#define RGBLIGHT_SLEEP

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

#define HLC_CIRQUE_TRACKPAD

#define CIRQUE_PINNACLE_DIAMETER_MM 35
#undef POINTING_DEVICE_CS_PIN
#define POINTING_DEVICE_CS_PIN GP13
// #define POINTING_DEVICE_ROTATION_180
#define CIRQUE_PINNACLE_CURVED_OVERLAY

#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#define CIRQUE_PINNACLE_POSITION_MODE CIRQUE_PINNACLE_ABSOLUTE_MODE
// #define CIRQUE_PINNACLE_TAP_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
