#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _GAME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    /* Default layer: */
    [_QWERTY] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_TAB,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_EQL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
 LSFT_T(KC_GRV),  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC,           KC_RBRC,   KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_BSLS),
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐ ┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────────┴────────┴────────┘
                                      KC_LALT, KC_LGUI,   TT(1),  KC_SPC,    KC_ENT,  TT(2), KC_BSPC,  KC_RALT
    //                               └────────┴────────┴────────┘────────┘ └────────┴────────┴────────┴────────┘
    ),
    /* Lower layer: */
    [_LOWER] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_MINS,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR, KC_PERC,                             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TILD, _______, _______, _______, _______, _______, KC_LCBR,           KC_RCBR, KC_QUES, KC_PIPE,  KC_LT,   KC_GT,  KC_COLN, KC_DQUO,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐ ┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────────┴────────┴────────┘
                                      _______, _______, _______, _______,   _______,  KC_NO,   KC_DEL,  _______
    //                               └────────┴────────┴────────┘────────┘ └────────┴────────┴────────┴────────┘
    ),
    /* Raise layer: */
    [_RAISE] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_VOLD,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_F12,  TO(3),   KC_NO,   KC_END, KC_AGIN, KC_BRIU,                             KC_COPY, KC_UNDO,  KC_INS, KC_EXEC, KC_PASTE,KC_VOLU,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______,  KC_NO,   KC_NO,   KC_CUT,  KC_NO,  KC_BRID,                             KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT,  _______, KC_PSCR,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_WBAK, KC_WFWD, KC_CALC, KC_SLCT, KC_HOME, KC_PGUP,           KC_PGDN, KC_MPLY, KC_MUTE, KC_MPRV, KC_MNXT, KC_FIND, KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐ ┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────────┴────────┴────────┘
                                      _______, _______,  KC_NO,  _______,   _______, _______, KC_BSPC,  _______
    //                               └────────┴────────┴────────┘────────┘ └────────┴────────┴────────┴────────┘
    ),
    /* GAME layer: */
    [_GAME] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_TAB,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                              KC_LEFT, KC_DOWN,  KC_UP,  KC_RGHT, KC_MPLY,  KC_PSCR,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_GRV,           KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT,  KC_NO,   KC_NO,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┴───┐ ┌───┴────┬───┴────┬───┴────┬───┴────┬───┴────────┴────────┴────────┘
                                      KC_LALT,  KC_NO,   KC_NO,  KC_SPC,    KC_ENT,   TO(0),  KC_BSPC,  KC_RALT
    //                               └────────┴────────┴────────┘────────┘ └────────┴────────┴────────┴────────┘
    ),
    // clang-format on
};

// SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED 10
#    define MIN_RUN_SPEED 50

/* advanced settings */
#    define ANIM_FRAME_DURATION 200 // how long each frame lasts in ms
#    define ANIM_SIZE 128           // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;

/* logic */
static void render_penguin(int PINGU_X, int PINGU_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x32px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x90, 0xc8, 0xc4, 0xc4, 0x82, 0x02, 0x81, 0xc1, 0xc7, 0x85, 0x9c, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x6e, 0xff, 0xfb, 0xc9, 0xcf, 0xa7, 0xa7, 0xa7, 0xa7, 0xcf, 0xcb, 0xf9, 0xff, 0x6f, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x84, 0x42, 0x03, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0x03, 0x42, 0x84, 0x18, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x1d, 0x74, 0x82, 0x01, 0x03, 0x01, 0x03, 0x07, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x07, 0x03, 0x01, 0x03, 0x80, 0x44, 0x27, 0x19, 0x01, 0x00, 0x00},
                                                   /* 'sit2', 32x32px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x90, 0xc8, 0xc4, 0xc4, 0x82, 0x02, 0x81, 0xc1, 0xc7, 0x85, 0x9c, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xfe, 0x01, 0x6e, 0xff, 0xfb, 0xc9, 0xcf, 0xa7, 0xa7, 0xa7, 0xa7, 0xcf, 0xcb, 0xf9, 0xff, 0x6f, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x84, 0x42, 0xe1, 0x01, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0x01, 0x61, 0xa2, 0x44, 0x88, 0xf0, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x1f, 0x74, 0x83, 0x01, 0x01, 0x01, 0x03, 0x07, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0x07, 0x03, 0x01, 0x00, 0x81, 0x40, 0x24, 0x1f, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x32px */ {0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x28, 0xca, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xc1, 0xe1, 0xf1, 0x72, 0x72, 0xe4, 0xe8, 0xd0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x09, 0xf9, 0x11, 0x22, 0x64, 0x40, 0x00, 0x80, 0xe1, 0xf3, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xf9, 0xf9, 0xf9, 0xe5, 0x23, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0x90, 0x10, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0xf8, 0x88, 0x90, 0xf0, 0x38, 0x38, 0x3c, 0x3e, 0x3f, 0x3f, 0x3f, 0xdf, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x9f, 0x91, 0xa0, 0xc0, 0x00, 0x00, 0x00},

                                                    /* 'walk2', 32x32px */ {0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x28, 0xca, 0x05, 0x01, 0x01, 0x01, 0x01, 0x01, 0x81, 0xc1, 0xe1, 0xf1, 0x72, 0x72, 0xe4, 0xe8, 0xd0, 0x80, 0x40, 0x20, 0x20, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x9f, 0x90, 0x88, 0x44, 0x20, 0x10, 0x80, 0xe1, 0xf3, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xf9, 0xf9, 0xf9, 0xe5, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0x90, 0x10, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x91, 0x8a, 0x84, 0x88, 0x48, 0x50, 0x30, 0x38, 0x38, 0x3c, 0x3e, 0x3f, 0x3f, 0x3f, 0x1f, 0x1f, 0x1f, 0x1f, 0x2f, 0x27, 0x27, 0x25, 0x24, 0x28, 0x10, 0x00, 0x00}};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x32px */ {0x0e, 0x0a, 0x08, 0x08, 0x08, 0xc8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x80, 0x80, 0x80, 0x01, 0x01, 0x81, 0x41, 0x21, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x28, 0x38, 0x29, 0x09, 0x09, 0x89, 0xc9, 0xe9, 0x70, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0xe1, 0x11, 0x11, 0x20, 0x40, 0x40, 0xfe, 0x01, 0x00, 0x00, 0x01, 0x82, 0x82, 0x82, 0x82, 0x81, 0x81, 0x00, 0x00, 0x00, 0x00, 0xe3, 0xf7, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xfc, 0x7c, 0x02, 0x01, 0x4e, 0x49, 0x49, 0x6a, 0x2a, 0x28, 0x28, 0x0f, 0x1c, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00},
                                                   /* 'run2', 32x32px */
                                                   {0xc0, 0x40, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x08, 0x08, 0x08, 0x08, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x81, 0x81, 0x81, 0x01, 0x01, 0x01, 0x00, 0x80, 0x40, 0x20, 0xc0, 0x00, 0x01, 0x01, 0x01, 0x01, 0xc1, 0x29, 0x38, 0x28, 0x08, 0x08, 0x88, 0xc8, 0xe8, 0x70, 0xc1, 0x81, 0x81, 0x81, 0x81, 0x01, 0xc0, 0x20, 0x21, 0x21, 0x21, 0x40, 0xfe, 0x01, 0x00, 0x00, 0x01, 0x82, 0x82, 0x82, 0x9e, 0xa5, 0xc5, 0x88, 0x88, 0x90, 0xa0, 0xe3, 0xf7, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xfc, 0x7c, 0x02, 0x01, 0x38, 0x45, 0x45, 0x22, 0x92, 0xd0, 0x48, 0x4f, 0x1c, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00}};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x32px */
                                                     {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0xfc, 0xfe, 0xe6, 0xe6, 0xfc, 0xfd, 0x9e, 0x98, 0x90, 0x50, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x83, 0x87, 0x8f, 0x1f, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x88, 0x70, 0x20, 0x40, 0x40, 0x40, 0x40, 0xf0, 0x79, 0x7b, 0x7f, 0x7f, 0x7f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0xbf, 0xef, 0xc7, 0x03, 0x00, 0x00, 0x00, 0x00},
                                                     /* 'sneak2', 32x32px */
                                                     {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xa0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3c, 0xfc, 0xfe, 0xe6, 0xe6, 0xfc, 0xfd, 0x9e, 0x98, 0x90, 0x50, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x48, 0x54, 0x32, 0x13, 0x11, 0x08, 0x04, 0x02, 0x70, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xc9, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x44, 0xa8, 0x90, 0x88, 0x88, 0x88, 0x48, 0x48, 0x30, 0x39, 0x7b, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x5f, 0x4f, 0x4f, 0x4f, 0x4b, 0x50, 0x20, 0x00, 0x00}};
    static const char PROGMEM black[]             = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    /* animation */
    void animate_penguin(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(PINGU_X, PINGU_Y + 3);
            oled_write_raw_P(black, sizeof(black));

            oled_set_cursor(PINGU_X, PINGU_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(PINGU_X, PINGU_Y - 1);
            oled_write_raw_P(black, sizeof(black));

            oled_set_cursor(PINGU_X, PINGU_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION && timer_elapsed32(anim_sleep) < OLED_TIMEOUT) {
        anim_timer = timer_read32();
        animate_penguin();
    }

    /* this fixes the screen on and off bug */
    if (current_wpm > 0) {
        if (!is_oled_on()) oled_on();
        anim_sleep = timer_read32();
    } else if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        if (is_oled_on()) oled_off();
    }
}

/* KEYBOARD PET END */

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    static const char PROGMEM shukumei[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF8, 0x60, 0xC4, 0x9C, 0xFC, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0x7C, 0x3C, 0x1C, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x08, 0x04, 0x04, 0x02, 0xC1, 0xE1, 0xE0, 0x70, 0x30, 0x38, 0x78, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xF8, 0xF8, 0xF9, 0xF1, 0xE2, 0xC4, 0x08, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x30, 0x30, 0x60, 0x40, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xF0, 0xF8, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x0D, 0xFC, 0xFC, 0x00, 0x00, 0xE1, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xEF, 0xE7, 0xE1, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x90, 0x1C, 0x12, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x3F, 0x7F, 0xFF, 0xFE, 0xFD, 0xFC, 0xFE, 0x1F, 0xE3, 0xF9, 0x0C, 0xF9, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x07, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0xE0, 0xCF, 0xC0, 0x80, 0x00, 0x84, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x86, 0x04, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x0F, 0x0F, 0x1C, 0x3C, 0x70, 0xF0, 0xC0, 0x80, 0x3F, 0x3F, 0x00, 0x00, 0x0C, 0xFC, 0xFC, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0C, 0x30, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFE, 0xFF, 0x7F, 0x3F, 0x3F, 0x7F, 0xF8, 0xC7, 0x9F, 0x30, 0x9F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x07, 0x07, 0x0E, 0x0C, 0x1C, 0x18, 0x01, 0x01, 0x03, 0x03, 0x07, 0x05, 0x09, 0x11, 0x21, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x18, 0x30, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x10, 0x20, 0x20, 0x40, 0x83, 0x87, 0x07, 0x0E, 0x0D, 0x1C, 0x1E, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x1F, 0x1F, 0x9F, 0x8F, 0x47, 0x23, 0x10, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    };

    if (is_keyboard_master()) {
        // If you want to change the display of OLED, you need to change here
        current_wpm = get_current_wpm();
        oled_write_ln("LAYER", false);
        switch (get_highest_layer(layer_state)) {
            case _QWERTY:
                oled_write_ln("Base ", false);
                break;
            case _GAME:
                oled_write_ln("Games", false);
                break;
            case _RAISE:
                oled_write_ln("Raise", false);
                break;
            case _LOWER:
                oled_write_ln("Lower", false);
                break;
            default:
                oled_write_ln("Undef", false);
        }
        oled_write_ln("WPM", false);
        oled_write_ln(get_u8_str(current_wpm, '0'), false);
        /* KEYBOARD PET RENDER START */
        render_penguin(0, 12);
        /* KEYBOARD PET RENDER END */
    } else {
        oled_write_raw_P(shukumei, sizeof(shukumei));
    }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE
    switch (keycode) {
            /* KEYBOARD PET STATUS START */
        case KC_LCTL:
        case KC_RCTL:
            if (record->event.pressed) {
                isSneaking = true;
            } else {
                isSneaking = false;
            }
            break;
        case KC_SPC:
            if (record->event.pressed) {
                isJumping  = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;
            /* KEYBOARD PET STATUS END */
    }
#endif
    // set_timelog();
    return true;
}
