


#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x6A6A
#define PRODUCT_ID 0x4810
#define DEVICE_VER 0x0001
#define MANUFACTURER Josh Johnson
#define PRODUCT Hub16

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS \
    { F0, C7, C6, B6, E6}
#define MATRIX_COL_PINS \
    { F4, F1, D5, D3 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D1
#define RGBLED_NUM 11
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#define RGBLIGHT_SLEEP         /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// /*== all animations enable ==*/
#define RGBLIGHT_ANIMATIONS
// /*== or choose animations ==*/
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 20

/* ENCODER THINGS */
// #define ENCODER_DIRECTION_FLIP
#define ENCODERS_PAD_A \
    { F5, B5 }
#define ENCODERS_PAD_B \
    { F6, B4 }

/* Tap Dance timing */
#define TAPPING_TERM 200

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
