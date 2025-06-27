#include QMK_KEYBOARD_H
#include "config.h"

/**
 * @brief Layer definitions for the keyboard
 */
enum layers {
    _BASE,
    _LAYER1,
    _LAYER2,
    _LAYER3,
    _LAYER4,
    _LAYER5,
    _LAYER6,
    _LAYER7,
    _LAYER8,
    _LAYER9
};

/**
 * @brief Default keymap layout for Vial
 *
 * This provides a basic keymap for Vial to use as a starting point.
 * The actual keymap will be loaded from vial.json.vil at runtime.
 */

// Define a macro for empty layers to avoid repetition
#define EMPTY_LAYER LAYOUT_split_4x6_5( \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO \
)

// Your keymap definition
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base layer needs all keys defined!
    [_BASE] = LAYOUT_split_4x6_5(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,  KC_MPLY,KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LGUI, KC_LALT, KC_LCTL, MO(_LAYER1), KC_SPC, KC_ENT, MO(_LAYER2), KC_RCTL, KC_RALT, KC_RGUI
    ),
    [_LAYER1] = EMPTY_LAYER,
    [_LAYER2] = EMPTY_LAYER,
    [_LAYER3] = EMPTY_LAYER,
    [_LAYER4] = EMPTY_LAYER,
    [_LAYER5] = EMPTY_LAYER,
    [_LAYER6] = EMPTY_LAYER,
    [_LAYER7] = EMPTY_LAYER,
    [_LAYER8] = EMPTY_LAYER,
    [_LAYER9] = EMPTY_LAYER
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [4] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [5] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [6] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [7] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [8] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
    [9] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U)},
};
#endif

/**
 * @brief Default OLED display configuration
 *
 * This provides a basic OLED display configuration
 */

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
    oled_write_P(qmk_logo, false);
}

void print_status_narrow(void) {
    // oled_write_P(PSTR("\n\n"), false);
    oled_write_P(PSTR("LAYER"), false);
    oled_write_P(PSTR("\n\n"), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_ln_P(PSTR("Base\n"), false);
            break;
        case _LAYER1:
            oled_write_ln_P(PSTR("Layer 1\n"), false);
            break;
        case _LAYER2:
            oled_write_ln_P(PSTR("Layer 2\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
            break;
    }

    oled_write_P(PSTR("\n\n"), false);

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return true;
}
#endif

/**
 * @brief Mapping arrays for LED to matrix position conversion
 */
int8_t led_to_matrix_row[RGB_MATRIX_LED_COUNT];
int8_t led_to_matrix_col[RGB_MATRIX_LED_COUNT];

/**
 * @brief Pre-calculated mapping status for each LED in each layer
 */
bool led_is_mapped[RGB_MATRIX_LED_COUNT][16];

/**
 * @brief Arrays to store LEDs by keyboard half
 */
uint8_t left_half_leds[RGB_MATRIX_LED_COUNT/2];
uint8_t right_half_leds[RGB_MATRIX_LED_COUNT/2];
uint8_t left_count = 0;
uint8_t right_count = 0;

/**
 * @brief Pre-calculated color arrays for each layer and LED
 */
uint8_t led_colors[16][RGB_MATRIX_LED_COUNT][3];
bool led_colors_initialized = false;

/**
 * @brief Pre-calculate all LED colors for all layers
 *
 * This function computes and caches the RGB values for each LED
 * in each layer to improve performance during rendering.
 */
void precalculate_all_led_colors(void) {
    // Get current RGB matrix brightness
    uint8_t brightness = rgb_matrix_get_val();
    float brightness_factor = (float)brightness / 255.0f;

    // Define RGB values for each layer
    uint8_t layer_rgb[10][3] = {
        {0, 0, 0},                  // _BASE - No specific color
        {LAYER1_RGB_R, LAYER1_RGB_G, LAYER1_RGB_B},  // _LAYER1
        {LAYER2_RGB_R, LAYER2_RGB_G, LAYER2_RGB_B},  // _LAYER2
        {LAYER3_RGB_R, LAYER3_RGB_G, LAYER3_RGB_B},  // _LAYER3
        {LAYER4_RGB_R, LAYER4_RGB_G, LAYER4_RGB_B},  // _LAYER4
        {LAYER5_RGB_R, LAYER5_RGB_G, LAYER5_RGB_B},  // _LAYER5
        {LAYER6_RGB_R, LAYER6_RGB_G, LAYER6_RGB_B},  // _LAYER6
        {LAYER7_RGB_R, LAYER7_RGB_G, LAYER7_RGB_B},  // _LAYER7
        {LAYER8_RGB_R, LAYER8_RGB_G, LAYER8_RGB_B},  // _LAYER8
        {LAYER9_RGB_R, LAYER9_RGB_G, LAYER9_RGB_B},  // _LAYER9
    };

    // Pre-calculate colors for each LED in each layer
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        int8_t row = led_to_matrix_row[i];
        int8_t col = led_to_matrix_col[i];

        // Loop through all layers (skip _BASE layer if you don't need it)
        for (uint8_t layer = _LAYER1; layer <= _LAYER8; layer++) {
            if (row >= 0 && col >= 0) {
                if (led_is_mapped[i][layer]) {
                    // Full brightness for mapped keys
                    led_colors[layer][i][0] = (uint8_t)(layer_rgb[layer][0] * brightness_factor);
                    led_colors[layer][i][1] = (uint8_t)(layer_rgb[layer][1] * brightness_factor);
                    led_colors[layer][i][2] = (uint8_t)(layer_rgb[layer][2] * brightness_factor);
                } else {
                    // Unmapped keys are turned off
                    led_colors[layer][i][0] = 0;
                    led_colors[layer][i][1] = 0;
                    led_colors[layer][i][2] = 0;
                }
            } else {
                // Dim brightness for non-key LEDs (like underglow)
                led_colors[layer][i][0] = (uint8_t)(layer_rgb[layer][0] * brightness_factor / 4);
                led_colors[layer][i][1] = (uint8_t)(layer_rgb[layer][1] * brightness_factor / 4);
                led_colors[layer][i][2] = (uint8_t)(layer_rgb[layer][2] * brightness_factor / 4);
            }
        }
    }

    led_colors_initialized = true;
}

/**
 * @brief Initialize keyboard-specific settings after QMK initialization
 *
 * Sets up LED-to-matrix mapping and pre-calculates LED states for each layer.
 */
void keyboard_post_init_user(void) {
    // Initialize all to -1 (not in matrix)
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        led_to_matrix_row[i] = -1;
        led_to_matrix_col[i] = -1;
    }

    // Fill in the mapping
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        for (uint8_t col = 0; col < MATRIX_COLS; col++) {
            uint8_t led_idx = g_led_config.matrix_co[row][col];
            if (led_idx != NO_LED) {
                led_to_matrix_row[led_idx] = row;
                led_to_matrix_col[led_idx] = col;
            }
        }
    }

    // Pre-calculate mapped status and colors for each LED in each layer
    for (uint8_t layer = 0; layer < 9; layer++) {
        for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
            int8_t row = led_to_matrix_row[i];
            int8_t col = led_to_matrix_col[i];

            if (row >= 0 && col >= 0) {
                uint16_t keycode = keymap_key_to_keycode(layer, (keypos_t){.row = row, .col = col});
                led_is_mapped[i][layer] = (keycode != KC_NO && keycode != KC_TRNS);
            } else {
                led_is_mapped[i][layer] = false;
            }
        }
    }

    precalculate_all_led_colors();
}

/**
 * @brief Custom RGB matrix indicator function
 *
 * Efficiently updates LED colors based on the active layer using pre-calculated values.
 *
 * @param led_min The first LED to update
 * @param led_max The last LED to update
 * @return bool Whether the default RGB matrix effect should be skipped
 */
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = get_highest_layer(layer_state);

    // Skip for base layer - use default RGB effects
    if (layer == _BASE) {
        return false;
    }

    // Process all LEDs
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        rgb_matrix_set_color(i,
                            led_colors[layer][i][0],
                            led_colors[layer][i][1],
                            led_colors[layer][i][2]);
    }
    // if there's too much leds and a noticable delay try loop unroll
    // for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i += 4) {
    //     rgb_matrix_set_color(i,   led_colors[layer][i][0],   led_colors[layer][i][1],   led_colors[layer][i][2]);
    //     rgb_matrix_set_color(i+1, led_colors[layer][i+1][0], led_colors[layer][i+1][1], led_colors[layer][i+1][2]);
    //     rgb_matrix_set_color(i+2, led_colors[layer][i+2][0], led_colors[layer][i+2][1], led_colors[layer][i+2][2]);
    //     rgb_matrix_set_color(i+3, led_colors[layer][i+3][0], led_colors[layer][i+3][1], led_colors[layer][i+3][2]);
    // }

    return false;
}

/**
 * @brief Layer state change handler
 *
 * Forces immediate update of RGB matrix when layer changes.
 *
 * @param state The new layer state
 * @return layer_state_t The processed layer state
 */
layer_state_t layer_state_set_user(layer_state_t state) {
    // Force RGB matrix update
    rgb_matrix_indicators_advanced_user(0, RGB_MATRIX_LED_COUNT - 1);

    return state;
}

/**
 * @brief Initialize keyboard-specific settings after QMK initialization and keymap changes
 *
 * Listens for keymap changes via Vial and reinitializes LED colors.
 */
void keyboard_post_init_kb(void) {
    // Reinitialize LED colors after keymap changes
    precalculate_all_led_colors();
    keyboard_post_init_user();
}

