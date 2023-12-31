#include QMK_KEYBOARD_H
#include "mattly.h"

// extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE_MAC] = LAYOUT(
    KC_DEL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ESC,
    KC_BSPC, KC_Q,    W_CTL,   E_ALT,   R_GUI,   KC_T,                               KC_Y,    U_GUI,   I_ALT,   O_CTL,   KC_P,    KC_SCLN,
    KC_CAPS, A_CTL,   S_ALT,   D_GUI,   F_SFT,   KC_G,                               KC_H,    J_SFT,   K_GUI,   L_ALT,   MINSCTL, KC_QUOT,
    NAVLOCK, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    ENT_SYM,         TAB_NUM,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   ESC_HYP, TAB_NUM, SPC_SFT,                   SPC_SFT, BSP_SYM, DEL_WRP
),

  [_OVER_WIN] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, _______, W_GUI,   _______, R_CTL,   _______,                            _______, U_CTL,   _______, O_GUI,   _______, _______,
    _______, A_GUI,   _______, D_CTL,   _______, _______,                            _______, _______, K_CTL,   _______, MINSGUI, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
                                  _______, _______, _______,                     _______, _______, _______
  ),

  [_SYMBOL] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, KC_AMPR, KC_GRV,  KC_TILD, KC_LBRC, KC_RBRC,                            KC_LABK, KC_RABK, KC_PLUS, KC_ASTR, XXXXXXX, _______,
    _______, KC_DLR,  KC_PERC, KC_EQL,  KC_LPRN, KC_RPRN,                            KC_SCLN, KC_COLN, KC_EXLM, KC_AT,   KC_UNDS, _______,
    _______, XXXXXXX, KC_CIRC, KC_HASH, KC_LCBR, KC_RCBR, _______,          _______, KC_QUOT, KC_DQUO, KC_PIPE, KC_BSLS, KC_QUES, _______,
                                  _______, _______, _______,                     _______, _______, _______
  ),

  [_NAVNUM] = LAYOUT(
    M_PVWIN, M_NXWIN, XXXXXXX, M_BPARA, XXXXXXX, KC_HOME,                            XXXXXXX, KC_SLSH, KC_ASTR, KC_MINS, KC_PLUS, XXXXXXX,
    M_PVTAB, M_NAVFW, M_BWORD, KC_UP,   M_FWORD, KC_PGUP,                            KC_DLR,  KC_P7,   KC_P8,   KC_P9,   KC_DOT,  XXXXXXX,
    XXXXXXX, M_NAVBK, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                            KC_PERC, KC_P4,   KC_P5,   KC_P6,   KC_EQL,  XXXXXXX,
    _______, M_NAVFW, M_BLINE, M_NPARA, M_ELINE, KC_END, _______,          _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_COMM, _______,
                                   _______, _______, _______,                   _______, _______, KC_P0
  ),
  [_NAVNUM_WIN] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, W_NAVFW, W_BWORD, _______, W_FWORD, _______,                            _______, _______, _______, _______, _______, _______,
    _______, W_NAVBK, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
                                  _______, _______, _______,                     _______, _______, _______
  ),

  [_GAME] = LAYOUT(
    KC_BSPC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SCLN,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_MINS, KC_QUOT,
    KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, MO(_NAVNUM),     MO(_SYMBOL), KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                                   KC_LCTL, KC_LALT, KC_SPC,                   KC_SPC, KC_LGUI, KC_LSFT
  ),

  [_FUNCT] = LAYOUT(
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    QK_BOOT, M_NAVFW, XXXXXXX, M_NXWIN, XXXXXXX, XXXXXXX,                            XXXXXXX, RGB_TOG, RGB_M_P, RGB_M_B, XXXXXXX, QK_BOOT,
    DB_TOGG, M_NAVBK, M_PVTAB, M_PVWIN, M_NXTAB, XXXXXXX,                            XXXXXXX, TOG_WIN, TOG_GAM, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_MUTE, KC_VOLD, KC_VOLU, KC_MRWD, KC_MFFD, KC_MPLY, _______,          _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,
                                   _______, _______, _______,                   _______, _______, _______
  ),
[_FUNCT_WIN] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, W_NAVFW, _______, W_NXWIN, _______, _______,                            _______, _______, _______, _______, _______, _______,
    _______, W_NAVBK, W_PVTAB, W_PVWIN, W_NXTAB, _______,                            _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
                                  _______, _______, _______,                     _______, _______, _______
  ),
};

