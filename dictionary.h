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
#define L_RND    A(KC_A)                       // Left Parenthesis (round bracket)
#define R_RND    A(KC_B)                       // Right Parenthesis (round bracket)
#define L_SQR    A(KC_C)                       // Left Square Bracket
#define R_SQR    A(KC_D)                       // Right Square Bracket
#define L_CUR    A(KC_E)                       // Left Curly Bracket (brace)
#define R_CUR    A(KC_F)                       // Right Curly Bracket (brace)
#define L_ANG    A(KC_COMMA)                   // Less-Than Sign (left angle bracket) (chevron)
#define R_ANG    A(KC_DOT)                     // Greater-Than Sign (right angle bracket) (chevron)

//Special characters: Punctuation
#define COMMA    A(KC_I)                       // Comma
#define PERIOD   A(KC_J)                       // Period
#define QMARK    A(KC_PPLS)                    // Question mark
#define EMARK    A(KC_PMNS)                    // Exclamation mark
#define COLON    A(KC_M)                       // Colon
#define SMCOLON  A(KC_N)                       // Semicolon

//Special characters
#define APOSTR   A(KC_O)                       // Apostrophe
#define DQUOT    A(KC_Q)                       // Quotation Mark
#define GACCENT  A(KC_PAST)                    // Grave Accent
#define L_SQM    A(KC_R)                       // Left Single Quotation Mark
#define R_SQM    A(KC_S)                       // Right Single Quotation Mark
#define L_DQM    A(KC_T)                       // Left Double Quotation Mark
#define R_DQM    A(KC_U)                       // Right Double Quotation Mark

//Special characters
#define SOL      A(S(KC_V))                    // Solidus (Slash)
#define RSOL     A(KC_W)                       // Reverse Solidus (Backslash)
#define VLINE    A(KC_X)                       // Vertical Line
#define MSIGN    A(KC_Y)                       // Multiplication Sign
#define TILDE    A(KC_Z)                       // Tilde

//Special characters
#define HYPHEN   A(KC_0)                       // Hyphen-Minus (Hyphen)
#define UNDRSC   A(KC_1)                       // Low Line (Underscore)
#define NDASH    A(KC_2)                       // En Dash
#define MDASH    A(KC_3)                       // Em Dash
#define HLINE    A(KC_4)                       // Horizontal Bar
#define MDOT     A(KC_5)                       // Middle Dot
#define BUL      A(KC_6)                       // Bullet
#define WBUL     A(KC_7)                       // White Bullet
#define DEGREE   A(KC_8)                       // Degree Sign
#define PRCNT    A(KC_9)                       // Percent Sign

//Special characters
#define DLLR     A(KC_MINS)                    // Dollar Sign
#define HRVN     A(KC_PEQL)                    // Hryvnia Sign
#define ATSGN    A(KC_BSLS)                    // Commercial At (at sign)
#define NMBR     A(KC_EQL)                     // Number Sign
#define CARET    A(KC_LBRC)                    // Circumflex Accent (Caret)
#define AMPRD    A(KC_RBRC)                    // Ampersand

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
#define RCAST    C(G(KC_PPLS))                 // Run Raycast
#define EMOJI    C(G(KC_SPC))                  // Emoji & Symbols (via Raycast)
#define SCR      C(G(KC_PMNS))                 // Screenshot and recording options
#define DND      C(G(KC_PAST))                 // Do Not Disturb
#define MCTRL    C(G(KC_KP_3))                 // Mission Control
#define LOCK     C(G(KC_Q))                    // Lock screen

// macOS shortcuts
#define UNDO     G(KC_Z)                       // Undo
#define REDO     S(G(KC_Z))                    // Redo
#define CUT      G(KC_X)                       // Cut
#define COPY     G(KC_C)                       // Copy
#define PASTE    G(KC_V)                       // Paste
#define XPASTE   G(A(S(KC_V)))                 // Paste and Match Style
#define SELALL   G(KC_A)                       // Select all
#define HIDE     G(KC_H)                       // Hide current app
#define MINIM    G(KC_M)                       // Minimize current window

// macOS shortcuts
#define DESK1    C(G(KC_A))                    // Select Desktop 1
#define DESK2    C(G(KC_B))                    // Select Desktop 2
#define DESK3    C(G(KC_C))                    // Select Desktop 3
#define DESKL    C(G(KC_D))                    // Move left a space
#define DESKR    C(G(KC_E))                    // Move right a space