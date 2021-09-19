#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT_60_iso_5x1u_split_rshift( 
    KC_ESC,        KC_1,    KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,     KC_MINS, KC_EQL,  KC_BSPC,      
    LT(1, KC_TAB),        KC_Q,    KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,     KC_LBRC, KC_RBRC,               
    KC_CAPS, KC_A,    KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT, KC_NUHS,  KC_ENT,      
    OSM(MOD_LSFT), KC_NUBS, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT),  TT(1), 
    KC_LCTL,       KC_LGUI, KC_LALT,                   KC_SPC,                       KC_RALT, KC_RGUI, KC_RCTL, MO(3), TG(2)),
 [1] = LAYOUT_60_iso_5x1u_split_rshift( 
    KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,       
    _______, XXXXXXX, LCTL(KC_RGHT), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, KC_PSTE, KC_PSCR, KC_INS,               
    _______, XXXXXXX, XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_END, XXXXXXX, _______,        
    _______, XXXXXXX, KC_COPY, KC_CUT, XXXXXXX, XXXXXXX, LCTL(KC_LEFT), XXXXXXX, KC_APP, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______),
 [2] = LAYOUT_60_iso_5x1u_split_rshift( 
    KC_ESC, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, _______,           
    _______, XXXXXXX, KC_MS_U, XXXXXXX, KC_WREF, XXXXXXX, KC_WBAK, LCTL(KC_PGUP), LCTL(KC_PGDN), KC_WFWD, KC_ACL0, KC_ACL1, KC_ACL2, 
    _______, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BTN1, KC_BTN2, KC_BTN3, _______,  
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,                    
    _______, _______, _______, KC_BTN1, _______, _______, _______, _______, _______),
 [3] = LAYOUT_60_iso_5x1u_split_rshift( 
    _______, BL_INC,  BL_DEC,  RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD,  KC_BRIU, KC_BRID, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,       
    _______, BL_ON,   BL_OFF,  RGB_HUI, RGB_HUD, RGB_M_P, RGB_M_B,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     
    _______, XXXXXXX, XXXXXXX, RGB_SAI, RGB_SAD, RGB_M_R, RGB_M_SW, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET, _______,            
    _______, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_RMOD, XXXXXXX, MAGIC_HOST_NKRO, MAGIC_UNHOST_NKRO, MAGIC_NO_GUI, MAGIC_UNNO_GUI, TG(4), _______, _______, 
    _______, _______, _______, KC_SPC,  _______, _______, _______, _______, _______),
 [4] = LAYOUT_60_iso_5x1u_split_rshift( 
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
   KC_TAB,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
   KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSFT, _______,
   _______, XXXXXXX, _______, _______, _______, XXXXXXX, _______, _______, _______)
};
