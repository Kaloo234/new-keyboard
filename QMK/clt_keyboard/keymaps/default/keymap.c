// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_canadian_multilingual.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *   REAL :
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐    ┌───┬───┬───┬───┐
     * │Esc│ F1│ F2│ F3│ F4│ F5│ F6│ F7│ F8│ F9│F10│F11│F12│Pwr│    │LCK│ / │ * │ - │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┤
     * │ / │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Del│    │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┤ + │
     * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ Ç │Ent│    │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┤
     * │Lck│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ È │ À │Ent│    │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┤    ├───┴───┼───┤ENT│
     * │Shf│ Ù │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ É │Shf    │    │ 0     │ ↑ │   │
     * ├───┼───┼───┼───┼───┴───┴───┴───┴───┴───┼───┼───┼───┬───┤    ├───┬───┼───┼───┤
     * │ FN│CTR│ALT│CMD│         SPACE         │CMD│ALT│   │   │    │ . │ ← │ ↓ │ → │
     * └───┴───┴───┴───┴───────────────────────┴───┴───┴───┴───┘    └───┴───┴───┴───┘
     */

    /*
     *   CODE :
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ F1│ F2│ F3│ F4│ F5│ F6│
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │ / │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E │ R │ T │ Y │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Lck│ A │ S │ D │ F │ G │ H │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │Shf│ Ù │ Z │ X │ C │ V │ B │
     * ├───┼───┼───┼───┼───┴───┴───┘
     * │ FN│CTR│ALT│CMD│
     * ├───┼───┼───┼───┼───┬───┬───┐    ┌───┬───┬───┬───┐
     * │PWR│F12│F11│F10│ F9│ F8│ F7│    │LCK│ / │ * │ - │
     * ├───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┤
     * │DEL│ = │ - │ 0 │ 9 │ 8 │ 7 │    │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┤ + │
     * │ENT│ Ç │ ^ │ P │ O │ I │ U │    │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┼───┼───┤    ├───┼───┼───┼───┤
     * │ENT│ À │ È │ ; │ L │ K │ J │    │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┼───┼───┼───┼───┤    ├───┴───┼───┤ENT│
     * │    Shf│ É │ . │ , │ M │ N │    │ 0     │ ↑ │   │
     * ├───┬───┼───┼───┼───┴───┴───┤    ├───┬───┼───┼───┤
     * │   │   │ALT│CMD│   SPACE   │    │ . │ ← │ ↓ │ → │s
     * └───┴───┴───┴───┴───────────┘    └───┴───┴───┴───┘
     * 
     */

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        CA_SLSH, CA_1,    CA_2,    CA_3,    CA_4,    CA_5,    CA_6,
        KC_TAB,  CA_Q,    CA_W,    CA_E,    CA_R,    CA_T,    CA_Y,
        KC_LCAP, CA_A,    CA_S,    CA_D,    CA_F,    CA_G,    CA_H,
        KC_LSFT, CA_UGRV, CA_Z,    CA_X,    CA_C,    CA_V,    CA_B,
        KC_TRNS, KC_LCTL, KC_LOPT, KC_LCMD,

        KC_PWR,  KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,   KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_BSPC, CA_EQL,  CA_MINS, CA_0,    CA_9,    CA_8,    CA_7,    KC_P7,   KC_P8,   KC_P9,
        KC_ENT,  CA_CCED, CA_CIRC, CA_P,    CA_O,    CA_I,    CA_U,    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_ENT,  CA_AGRV, CA_EGRV, CA_SCLN, CA_L,    CA_K,    CA_J,    KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_RSFT, CA_EACU, CA_DOT,  CA_COMM, CA_M,    CA_N,    KC_P0,   KC_UP,
        CW_TOGG, KC_TRNS, KC_ROPT, KC_RCMD, KC_SPC,  KC_PDOT, KC_LEFT, KC_DOWN, KC_RGHT
    )
};
