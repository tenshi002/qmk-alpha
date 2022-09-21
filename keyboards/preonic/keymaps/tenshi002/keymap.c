/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_french.h"

enum preonic_layers {
  _AZERTY,
  _DEV,
  _FN,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  AZERTY = SAFE_RANGE,
  DEV,
  FN,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Azerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   &  |   é  |   "  |   '  |   (  |   -  |   è  |   _  |   ç  |   à  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | DEV  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ,  |   ;  |   :  |   !  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  |  FN  | Alt  |Lower |    Space    |Raise |   $  |   ^  |      |  %   |
 * `-----------------------------------------------------------------------------------'
 */
[_AZERTY] = LAYOUT_preonic_grid(
  KC_GESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN, FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, KC_BSPC,
  KC_TAB , KC_Q   , KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL ,
  DEV    , KC_A   , KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, FR_W   , FR_X   , FR_C   , FR_V   , FR_B   , FR_N   , FR_COMM, FR_SCLN, FR_COLN, FR_EXLM, KC_RSFT,
  KC_LCTL, KC_LGUI, FN     , KC_LALT, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_RBRC, KC_LBRC, _______, FR_PERC
),


/* DEV
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   (  |   )  |   \  |   /  |      |      |      |      |  Up  |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   {  |   }  |   [  |   ]  |      |      |      | Left | Down |Right |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   <  |   >  |   &  |   |  |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_DEV] =
LAYOUT_preonic_grid(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
    _______, FR_LPRN, FR_RPRN, FR_BSLS, FR_SLSH, _______, _______, _______, _______, KC_UP  , _______, FR_ASTR,
    _______, FR_LCBR, FR_RCBR, FR_LBRC, FR_RBRC, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
    _______, FR_LABK, FR_RABK, FR_AMPR, FR_PIPE, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* FN
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_FN] =
LAYOUT_preonic_grid(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      | NLCK |   /  |   *  |  -   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   7  |   8  |   9  |  +   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   4  |   5  |   6  |  ,   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   1  |   2  |   3  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |   0  |      |      |  %   |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] =
LAYOUT_preonic_grid(
    _______, _______, _______, _______  , _______ , _______ , _______ , _______ , KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    _______, _______, _______, _______  , _______ , _______ , _______ , _______ , KC_P7  , KC_P8  , KC_P9  , KC_PPLS,
    _______, _______, _______, _______  , _______ , _______ , _______ , _______ , KC_P4  , KC_P5  , KC_P6  , KC_PCMM,
    _______, _______, _______, _______  , _______ , _______ , _______ , _______ , KC_P1  , KC_P2  , KC_P3  , KC_PEQL,
    _______, _______, _______, _______  , _______ , _______ , _______ , _______ , KC_P0  , _______, _______, FR_PERC
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   ¹  |   ~  |   #  |   {  |   [  |   |  |   `  |   \  |   ^  |   @  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |   €  |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] =
LAYOUT_preonic_grid(
    ALGR(FR_SUP2), ALGR(FR_AMPR), ALGR(FR_EACU), ALGR(FR_DQUO), ALGR(FR_QUOT), ALGR(FR_LPRN), ALGR(FR_MINS), ALGR(FR_EGRV), ALGR(FR_UNDS), ALGR(FR_CCED), ALGR(FR_AGRV), KC_DEL,
    _______      , _______      , _______      , FR_EURO      , _______      , _______      ,_______      , _______      , _______      ,_______      , _______      , _______      ,
    _______      , _______      , _______      , _______      , _______      , _______      ,_______      , _______      , _______      ,_______      , _______      , _______      ,
    _______      , _______      , _______      , _______      , _______      , _______      ,_______      , _______      , _______      ,_______      , _______      , _______      ,
    _______      , _______      , _______      , _______      , _______      , _______      ,_______      , _______      , KC_MNXT      , KC_VOLD     , KC_VOLU      , KC_MPLY
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|AZERTY|      |  FN  |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =
LAYOUT_preonic_grid(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
    _______, RESET  , DEBUG  , _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL ,
    _______, _______, MU_MOD , AU_ON  , AU_OFF , AG_NORM, AG_SWAP, AZERTY , _______, _______, _______, _______,
    _______, MUV_DE , MUV_IN , MU_ON  , MU_OFF , MI_ON  , MI_OFF , _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)


};

bool process_record_user (uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
    case AZERTY:
      if (record->event.pressed)
      {
        set_single_persistent_default_layer (_AZERTY);
      }
      return false;
      break;
    case DEV:
      if (record->event.pressed)
      {
        layer_on (_DEV);
      }
      else
      {
        layer_off (_DEV);
      }
      return false;
      break;
    case FN:
      if (record->event.pressed)
      {
        layer_on (_FN);
      }
      else
      {
        layer_off (_FN);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed)
      {
        layer_on (_LOWER);
        update_tri_layer (_LOWER, _RAISE, _ADJUST);
      }
      else
      {
        layer_off (_LOWER);
        update_tri_layer (_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed)
      {
        layer_on (_RAISE);
        update_tri_layer (_LOWER, _RAISE, _ADJUST);
      }
      else
      {
        layer_off (_RAISE);
        update_tri_layer (_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
  }
  return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode)
  {
    if (IS_LAYER_ON (_RAISE))
    {
      if (clockwise)
      {
        muse_offset++;
      }
      else
      {
        muse_offset--;
      }
    }
    else
    {
      if (clockwise)
      {
        muse_tempo += 1;
      }
      else
      {
        muse_tempo -= 1;
      }
    }
  }
  else
  {
    if (clockwise)
    {
      register_code (KC_PGDN);
      unregister_code (KC_PGDN);
    }
    else
    {
      register_code (KC_PGUP);
      unregister_code (KC_PGUP);
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
