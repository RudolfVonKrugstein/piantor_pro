// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "features/achordion.h"

// special german characters
#define KC_SS RALT(KC_S)
#define KC_UE RALT(KC_Y)
#define KC_OE RALT(KC_P)
#define KC_AE RALT(KC_Q)

// shift characters
#define KC_EXCL LSFT(KC_1)
//#define KC_AT LSFT(KC_2)
//#define KC_HASH LSFT(KC_3)
//#define KC_DOLLAR LSFT(KC_4)
#define KC_PERCNT LSFT(KC_5)
#define KC_HAT LSFT(KC_6)
#define KC_AND LSFT(KC_7)
#define KC_STAR LSFT(KC_8)
#define KC_LPARANTHESE LSFT(KC_9)
#define KC_RPARANTHESE LSFT(KC_0)

//#define KC_UNDERSCORE LSFT(KC_MINUS)
//#define KC_PLUS LSFT(KC_EQUAL)
#define KC_LBRACE LSFT(KC_LBRC)
#define KC_RBRACE LSFT(KC_RBRC)
//#define KC_PIPE LSFT(KC_BSLS)
//#define KC_COLON LSFT(KC_SEMICOLON)
#define KC_DQUOTE LSFT(KC_QUOTE)
//#define KC_TILDE LSFT(KC_GRAVE)
#define KC_LARROW LSFT(KC_COMMA)
#define KC_RARROW LSFT(KC_DOT)
//#define KC_QUESTION LSFT(KC_SLASH)

#define KC_VI_ESC LCTL(KC_LBRC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,            KC_Q,            KC_W,            KC_E,            KC_R,     LT(4, KC_T),                                           LT(5, KC_Y),            KC_U,            KC_I,            KC_O,            KC_P,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,            KC_A,    LGUI_T(KC_S),    LALT_T(KC_D),    LCTL_T(KC_F),     LT(4, KC_G),                                           LT(1, KC_H),    RCTL_T(KC_J),    RALT_T(KC_K),    RGUI_T(KC_L),         KC_BSPC,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,            KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,                                                  KC_N,            KC_M,        KC_COMMA,          KC_DOT,          KC_TAB,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                   OSL(3),          OSL(2),   OSM(MOD_LSFT),    LSFT_T(KC_VI_ESC), LT(2, KC_SPACE),          OSL(3)
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
            KC_ESCAPE,       KC_ESCAPE,           KC_SS,           KC_UE,           KC_OE,           KC_AE,                                                 KC_AE,           KC_AE,           KC_UE,           KC_SS,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,       KC_ESCAPE,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,         KC_LCTL,         KC_LALT,         KC_LGUI,         KC_BSPC,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,          KC_TAB,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  XXXXXXX,         XXXXXXX,   OSM(MOD_LSFT),       OSM(MOD_RSFT),         XXXXXXX,         XXXXXXX
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [2] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,       KC_PERCNT,  KC_LPARANTHESE,  KC_RPARANTHESE,         KC_SCLN,          KC_HAT,                                                KC_AND,       KC_DQUOTE,       KC_RARROW,       KC_LARROW,        KC_QUOTE,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,     KC_QUESTION, LGUI_T(KC_LBRC), LALT_T(KC_RBRC),LCTL_T(KC_COLON),        KC_SLASH,                                            LSFT(KC_3),RCTL_T(KC_EQUAL), RALT_T(KC_PLUS), RGUI_T(KC_STAR),         KC_EXCL,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,           KC_AT,       KC_LBRACE,       KC_RBRACE,       KC_DOLLAR,        KC_TILDE,                                              KC_MINUS,   KC_UNDERSCORE,        KC_GRAVE,         KC_PIPE,         KC_BSLS,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  XXXXXXX,       KC_ESCAPE,         XXXXXXX,           KC_ESCAPE,        KC_ENTER,         XXXXXXX
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [3] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,           KC_F1,           KC_F2,           KC_F3,           KC_F4,           KC_F5,                                                 KC_F6,           KC_F7,           KC_F8,           KC_F9,          KC_F10,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,            KC_1,    LGUI_T(KC_2),    LALT_T(KC_3),    LCTL_T(KC_4),            KC_5,                                                  KC_6,    RCTL_T(KC_7),    LALT_T(KC_8),    RGUI_T(KC_9),            KC_0,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  XXXXXXX,         XXXXXXX,         XXXXXXX,             XXXXXXX,         XXXXXXX,         XXXXXXX
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [4] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               KC_HOME,         KC_PGDN,         KC_PGUP,          KC_END,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         KC_LGUI,         KC_LALT,        KC_LCTL,         XXXXXXX,                                               KC_LEFT,         KC_DOWN,           KC_UP,        KC_RIGHT,         KC_BSPC,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               XXXXXXX,       KC_ESCAPE,   LCTL(KC_LBRC),         XXXXXXX,          KC_TAB,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  XXXXXXX,         XXXXXXX,   OSM(MOD_LSFT),       OSM(MOD_RSFT),         XXXXXXX,         XXXXXXX
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [5] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              XXXXXXX,       KC_ESCAPE,         XXXXXXX,         KC_MS_U,         XXXXXXX,         KC_WH_U,                                               XXXXXXX,         KC_BTN1,         KC_BTN3,         KC_BTN2,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         KC_MS_L,         KC_MS_D,         KC_MS_R,         KC_WH_D,                                               KC_ACL1,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,                                               KC_ACL0,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  XXXXXXX,         XXXXXXX,   OSM(MOD_LSFT),       OSM(MOD_RSFT),         XXXXXXX,         XXXXXXX
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [6] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [7] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [8] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [9] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [10] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [11] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [12] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [13] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [14] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  ),

  [15] = LAYOUT_split_3x6_3(
  //,----------------+----------------+----------------+----------------+----------------+----------------.                                     ,----------------+----------------+----------------+----------------+----------------+----------------.
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //|----------------+----------------+----------------+----------------+----------------+----------------|                                     |----------------+----------------+----------------+----------------+----------------+----------------|
              _______,         _______,         _______,         _______,         _______,         _______,                                               _______,         _______,         _______,         _______,         _______,         _______,
  //`----------------+----------------+----------------+----------------+----------------+----------------+----------------.   ,----------------+----------------+----------------+----------------+----------------+----------------+----------------'
                                                                                  _______,         _______,         _______,             _______,         _______,         _______
  //                                                                    `----------------+----------------+----------------'   `----------------+----------------+----------------'

  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // achordion
    // see: https://getreuer.info/posts/keyboards/achordion/index.html
    if (!process_achordion(keycode, record)) { return false; }
    // fix mod-tap keys with shifted or other modifier keys
    // see: https://docs.qmk.fm/mod_tap
    switch (keycode) {
        case LCTL_T(KC_COLON):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLON); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RALT_T(KC_PLUS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_PLUS); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RGUI_T(KC_STAR):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_STAR); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LSFT_T(KC_VI_ESC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_VI_ESC); // Send KC_DQUO on tap
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}
