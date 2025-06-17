//
// Dictionary
//

// Multiple-include optimization. Include a header file only a single time, no matter how many times it has been imported
#pragma once

// Aliases: Layers
enum layers {
  _LTR = 0,                                    // Letters
  _NAV = 1,                                    // Navigation
  _SPC = 2,                                    // Special characters
  _NMT = 3,                                    // A layer without mod-taps
  _NUM = 4,                                    // Numpad. Should be above “Navigation” layer for accessibiIty
  _CT1 = 5,                                    // macOS shortcuts. Should be above other layers for accessibility from any of them
  _CT2 = 6,                                    // macOS shortcuts. Should be above other layers for accessibility from any of them
};

// Aliases: Language switch
enum custom_keycodes {
  LTR_EN = SAFE_RANGE,
  LTR_UA,
  LTR_CMD,
  LTR_OPT,
  LTR_SFT,
  LTR_CTL,
};

// Aliases: 8-symbol underscores for disabled keys instead of "KC_NO" and "XXXXXXX"
#define ________ KC_NO

// Navigation: lace the insertion point
#define M_WRD_L  A(KC_LEFT)                    // To the beginning of the previous word
#define M_WRD_R  A(KC_RGHT)                    // To the end of the next word
#define M_LIN_L  G(KC_LEFT)                    // To the beginning of the line
#define M_LIN_R  G(KC_RGHT)                    // To the end of the line

// Navigation: Select text
#define SSYM_L   S(KC_LEFT)                    // Select a previous letter
#define SSYM_R   S(KC_RGHT)                    // Select a next letter
#define SWRD_L   S(A(KC_LEFT))                 // Select a previous word
#define SWRD_R   S(A(KC_RGHT))                 // Select a next word

// Navigation: Chrome
#define TAB_L    G(S(KC_LBRC))                 // Go to the previous tab
#define TAB_R    G(S(KC_RBRC))                 // Go to the next tab

// Special characters: Brackets
#define L_RND    MEH(KC_A)                     // Left Parenthesis (round bracket)
#define R_RND    MEH(KC_B)                     // Right Parenthesis (round bracket)
#define L_SQR    MEH(KC_C)                     // Left Square Bracket
#define R_SQR    MEH(KC_D)                     // Right Square Bracket
#define L_CUR    MEH(KC_E)                     // Left Curly Bracket (brace)
#define R_CUR    MEH(KC_F)                     // Right Curly Bracket (brace)
#define L_ANG    MEH(KC_G)                     // Less-Than Sign (left angle bracket) (chevron)
#define R_ANG    MEH(KC_H)                     // Greater-Than Sign (right angle bracket) (chevron)

//Special characters: Punctuation
#define COMMA    MEH(KC_I)                     // Comma
#define PERIOD   MEH(KC_J)                     // Period
#define QMARK    MEH(KC_K)                     // Question mark
#define EMARK    MEH(KC_L)                     // Exclamation mark
#define COLON    MEH(KC_M)                     // Colon
#define SMCOLON  MEH(KC_N)                     // Semicolon

//Special characters
#define APOSTR   MEH(KC_O)                     // Apostrophe
#define DQUOT    MEH(KC_P)                     // Quotation Mark
#define GACCENT  MEH(KC_Q)                     // Grave Accent
#define L_SQM    MEH(KC_R)                     // Left Single Quotation Mark
#define R_SQM    MEH(KC_S)                     // Right Single Quotation Mark
#define L_DQM    MEH(KC_T)                     // Left Double Quotation Mark
#define R_DQM    MEH(KC_U)                     // Right Double Quotation Mark

//Special characters
#define SOL      MEH(KC_V)                     // Solidus (Slash)
#define RSOL     MEH(KC_W)                     // Reverse Solidus (Backslash)
#define VLINE    MEH(KC_X)                     // Vertical Line
#define MSIGN    MEH(KC_Y)                     // Multiplication Sign
#define TILDE    MEH(KC_Z)                     // Tilde

//Special characters
#define HYPHEN   MEH(KC_0)                     // Hyphen-Minus (Hyphen)
#define UNDRSC   MEH(KC_1)                     // Low Line (Underscore)
#define NDASH    MEH(KC_2)                     // En Dash
#define MDASH    MEH(KC_3)                     // Em Dash
#define HLINE    MEH(KC_4)                     // Horizontal Bar
#define MDOT     MEH(KC_5)                     // Middle Dot
#define BUL      MEH(KC_6)                     // Bullet
#define WBUL     MEH(KC_7)                     // White Bullet
#define DEGREE   MEH(KC_8)                     // Degree Sign
#define PRCNT    MEH(KC_9)                     // Percent Sign

//Special characters
#define DLLR     MEH(KC_MINS)                  // Dollar Sign
#define HRVN     MEH(KC_SLSH)                  // Hryvnia Sign
#define ATSGN    MEH(KC_BSLS)                  // Commercial At (at sign)
#define NMBR     MEH(KC_EQL)                   // Number Sign
#define CARET    MEH(KC_LBRC)                  // Circumflex Accent (Caret)
#define AMPRD    MEH(KC_RBRC)                  // Ampersand

// Home row mods (as mod-taps)
#define _CTL_A   LCTL_T(KC_A)
#define _SFT_S   LSFT_T(KC_S)
#define _OPT_D   LOPT_T(KC_D)
#define _CMD_F   LCMD_T(KC_F)
#define _CMD_J   RCMD_T(KC_J)
#define _CMD_K   ROPT_T(KC_K)
#define _SFT_L   RSFT_T(KC_L)
#define _CTL_SC  RCTL_T(KC_SCLN)

// macOS shortcuts
#define RCAST    MEH(KC_PPLS)                  // Run Raycast
#define EMOJI    C(G(KC_SPC))                  // Emoji & Symbols. Not reassignable
#define SS_OPT   MEH(KC_PMNS)                  // Screenshot and recording options
#define DND      MEH(KC_PAST)                  // Do Not Disturb
#define MCTRL    MEH(KC_KP_3)                  // Mission Control

// macOS shortcuts
#define UNDO     G(KC_Z)                       // Undo
#define REDO     G(S(KC_Z))                    // Redo
#define CUT      G(KC_X)                       // Cut
#define COPY     G(KC_C)                       // Copy
#define PASTE    G(KC_V)                       // Paste
#define XPASTE   G(A(S(KC_V)))                 // Paste and Match Style
#define SELALL   G(KC_A)                       // Select all
#define HIDE     G(KC_H)                       // Hide current app
#define MINIM    G(KC_M)                       // Minimized current window

// macOS shortcuts
#define PROF1    G(S(C(KC_A)))                 // Select Profile 1 in Google Chrome
#define PROF2    G(S(C(KC_B)))                 // Select Profile 2 in Google Chrome
#define PROF3    G(S(C(KC_C)))                 // Select Profile 3 in Google Chrome