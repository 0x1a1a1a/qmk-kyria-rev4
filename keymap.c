//
// Keymap
// Location: /repos/qmk_firmware/keyboards/splitkb/halcyon/kyria/keymaps/qmk-kyria-rev4
//


// Include keyboard-specific headers instead of <keyboard.h>
#include QMK_KEYBOARD_H


// Include headers and other components
#include "dictionary.h"
#include "macros.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    // Layer: Letters
    [_LTR] = LAYOUT(
          R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
          COMMA,  _CTL_A,  _SFT_S,  _OPT_D,  _CMD_F,    KC_G,                                             KC_H,  _CMD_J,  _CMD_K,  _SFT_L, _CTL_SC,  PERIOD,
          QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,________,________,     ________,________,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                  ________,  LTR_EN,TO(_CT1),  KC_SPC,  KC_DEL,     ________, KC_BSPC,TO(_CT2),  LTR_UA,________
    ),


    // Layer: Navigation
    [_NAV] = LAYOUT(
        TO(_NMT), M_LIN_L, M_WRD_L,   KC_UP, M_WRD_R, M_LIN_R,                                        ________,________,________,________,________,________,
           TAB_L,   TAB_R, KC_LEFT, KC_DOWN, KC_RGHT,________,                                        ________, KC_LCMD, KC_LOPT, KC_LSFT, KC_LCTL,________,
        ________,  SWRD_L,  SSYM_L,________,  SSYM_R,  SWRD_R, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,________,________,________,________,________,________,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


    // Layer: Special characters
    [_SPC] = LAYOUT(
         GACCENT,   L_CUR,   R_CUR,   L_SQM,   R_SQM,    RSOL,                                            MDOT,  APOSTR,   COLON,   PRCNT,   CARET,   NDASH,
           TILDE,   L_SQR,   R_SQR,   L_RND,   R_RND, KC_PSLS,                                             BUL,   DQUOT, SMCOLON,   ATSGN,    NMBR,   MDASH,
           HLINE,   L_ANG,   R_ANG,   L_DQM,   R_DQM,   VLINE, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,    WBUL,  UNDRSC,   AMPRD,    DLLR,    HRVN,   MSIGN,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


    // Layer: Without mod-taps
    [_NMT] = LAYOUT(
           R_SQM,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  HYPHEN,
           COMMA,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                            KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  PERIOD,
           QMARK,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   EMARK,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


    // Layer: Numpad
    [_NUM] = LAYOUT(
        ________,________,________,________,________,________,                                         KC_PPLS,    KC_7,    KC_8,    KC_9,   COMMA, KC_PAST,
        ________, KC_RCTL, KC_RSFT, KC_ROPT, KC_RCMD,________,                                         KC_PMNS,    KC_0,    KC_1,    KC_2,    KC_3, KC_PSLS,
        ________,________,________,________,________,________, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,________,    KC_4,    KC_5,    KC_6,  PERIOD, KC_PEQL,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


    // Layer: Controls 1
    [_CT1] = LAYOUT(
         KC_VOLU,    HIDE,   MINIM,   MCTRL,TO(_NAV),   RCAST,                                        ________,   DESK1,   DESK2,   DESK3,________, KC_BRIU,
         KC_VOLD,  SELALL,  KC_ESC,  KC_TAB,  KC_ENT,   EMOJI,                                        ________, KC_RCMD, KC_ROPT, KC_RSFT, KC_RCTL, KC_BRID,
          KC_DEL,    UNDO,     CUT,    COPY,   PASTE,  XPASTE, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,________,________,________,________,________,________,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


    // Layer: Controls 2
    [_CT2] = LAYOUT(
        ________,________,________,________,________,________,                                             DND,TO(_SPC),________,________,________,________,
        ________,________,________,________,________,________,                                             SCR,TO(_NUM),________,________,________,________,
        ________,________,________,________,________,________, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,  KC_DEL, LTR_CMD, LTR_OPT, LTR_SFT, LTR_CTL,________,
                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),


};