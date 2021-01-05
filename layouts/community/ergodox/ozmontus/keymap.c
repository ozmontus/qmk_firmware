#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "action_util.h"
#include "version.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define GAME 2 // game keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   Esc  |   1  |   2  |   3  |   4  |   5  |  6   |           |   7  |   8  |   9  |   0  |   -  |   =  |  Caps  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  =   |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LGui   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |' "/LGui|
 * |--------+------+------+------+------+------| Del  |           | Game |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | `/~  | LGui | Alt  | Left | Right|                                       |  Up  | Down | [/Alt|   ]  | C/A/D|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | F1   | Ins  |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.j
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_ESC,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_EQL,
        KC_LGUI,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        CTL_T(KC_Z),  KC_X,   KC_C,   KC_V,   KC_B,   KC_DELETE,
        KC_GRV,		KC_UP,      ALT_T(KC_DOWN),  KC_LEFT,KC_RGHT,
                                                      KC_F1,  KC_INS,
                                                              KC_HOME,
                                               KC_SPC,KC_BSPC,KC_END,
        // right hand
	     KC_7,     KC_8,   KC_9,   KC_0,   KC_MINS,   KC_EQL,             KC_CAPS,
	     TG(SYMB), KC_Y,   KC_U,   KC_I,   KC_O,      KC_P,             KC_BSLS,
    		         KC_H,   KC_J,   KC_K,   KC_L,      KC_SCLN,          GUI_T(KC_QUOT),
	     TG(GAME),	  KC_N,   KC_M,   KC_COMM,KC_DOT, CTL_T(KC_SLSH),   KC_RSFT,
		                  KC_UP,  KC_DOWN,ALT_T(KC_LBRC),KC_RBRC,   LALT(LCTL(KC_DEL)),
	     KC_LALT,        CTL_T(KC_ESC),
	     KC_PGUP,
	     KC_PGDN,KC_TAB, KC_ENT
),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  ESC   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   !  |   @  |   {  |   }  |   |  |      |           |BASE  |   Up |   7  |   8  |   9  |   /  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   *  |        |
 * |--------+------+------+------+------+------|      |           |GAME  |------+------+------+------+------+--------|
 * |        | %/Ctl|   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   -  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |    0 | ./Alt|   +  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| ESC  |   =  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       KC_ESC,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
       KC_TRNS,KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_TRNS,KC_HASH,KC_DLR, KC_LPRN,KC_RPRN,KC_GRV,
       KC_TRNS,CTL_T(KC_PERC),KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
       KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_F7, KC_F8,   KC_F9,  KC_F10,   KC_F11,   KC_F12,  KC_TRNS,
       KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    KC_PSLS, KC_TRNS,
                KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PAST, KC_TRNS,
       KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    CTL_T(KC_PMNS), KC_TRNS,
                         KC_TRNS,KC_0,  ALT_T(KC_DOT), KC_PPLS,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_ESC, KC_PENT
),
/* Keymap 2: FPS Key Map
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  | F10  | F11  | F12  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |  Q   |  W   |  E   |  UP  |  T   |  =   |           |SYMB  |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |    7   |  A   |  S   | LEFT | DOWN |RIGHT |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|Delete|           |BASE  |------+------+------+------+------+--------|
 * | 6/LShft|  Z   |  X   |  C   |  V   |  B   |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | `/~  |  R   |  D   |  F   |  G   |                                       |Play  |Stop  |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |  4   |  3   |       | Mute |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |  2   |       |VolUp |      |      |
 *                                 |  5   |Space |------|       |------|      |      |
 *                                 |      |      |  1   |       |VolDn |      |      |
 *                                 `--------------------'       `--------------------'
 */
// GAME
[GAME] = LAYOUT_ergodox(
        // left hand
        KC_ESC,         KC_F1,         KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_UP,   KC_T,   KC_EQL,
        KC_7,        KC_A,         KC_S,   KC_LEFT,   KC_DOWN,   KC_RGHT,
        LSFT_T(KC_6),        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   KC_DELETE,
        KC_GRV,		KC_R,      KC_D,  KC_F,KC_G,
                                                      KC_4,  KC_3,
                                                              KC_2,
                                               KC_5,KC_SPC,KC_1,
    // right hand
       KC_F7,  KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_MPLY, KC_MSTP, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_MUTE, KC_TRNS,
       KC_VOLU,
       KC_VOLD, KC_TRNS, KC_TRNS
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
