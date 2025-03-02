#include QMK_KEYBOARD_H
#include "config.h"

/**
 * @brief Layer definitions for the keyboard
 */
enum layers {
    _BASE,
    _SYMBOL,
    _NUMBER,
    // _UNUSED1,
    // _UNUSED2,
};

/**
 * @brief Default keymap layout for Vial
 *
 * This provides a basic keymap for Vial to use as a starting point.
 * The actual keymap will be loaded from vial.json.vil at runtime.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_4x6_5(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE, KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                          KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_ENT,  KC_BSPC, MO(2),   KC_RGUI, KC_RALT, KC_RCTL
    ),
    [1] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    // [3] = LAYOUT_split_4x6_5(
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    // ),
    // [4] = LAYOUT_split_4x6_5(
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    //                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    // ),
};

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
    // Layer 1 colors (SYMBOL - Pink)
    uint8_t layer1_full[3] = {LAYER1_RGB_R, LAYER1_RGB_G, LAYER1_RGB_B};
    uint8_t layer1_dim[3] = {LAYER1_RGB_R/4, LAYER1_RGB_G/4, LAYER1_RGB_B/4};

    // Layer 2 colors (NUMBER - Cyan)
    uint8_t layer2_full[3] = {LAYER2_RGB_R, LAYER2_RGB_G, LAYER2_RGB_B};
    uint8_t layer2_dim[3] = {LAYER2_RGB_R/4, LAYER2_RGB_G/4, LAYER2_RGB_B/4};

    // Pre-calculate colors for each LED in each layer
    for (uint8_t i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        int8_t row = led_to_matrix_row[i];
        int8_t col = led_to_matrix_col[i];

        // Layer 1 (SYMBOL)
        if (row >= 0 && col >= 0) {
            if (led_is_mapped[i][_SYMBOL]) {
                memcpy(led_colors[_SYMBOL][i], layer1_full, 3);
            } else {
                led_colors[_SYMBOL][i][0] = 0;
                led_colors[_SYMBOL][i][1] = 0;
                led_colors[_SYMBOL][i][2] = 0;
            }
        } else if (i >= 29) {
            memcpy(led_colors[_SYMBOL][i], layer1_dim, 3);
        }

         // Layer 2 (NUMBER)
        if (row >= 0 && col >= 0) {
            if (led_is_mapped[i][_NUMBER]) {
                memcpy(led_colors[_NUMBER][i], layer2_full, 3);
            } else {
                led_colors[_NUMBER][i][0] = 0;
                led_colors[_NUMBER][i][1] = 0;
                led_colors[_NUMBER][i][2] = 0;
            }
        } else if (i >= 29) {
            memcpy(led_colors[_NUMBER][i], layer2_dim, 3);
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
    for (uint8_t layer = 0; layer < 3; layer++) {
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

    // Only handle layers we care andknow about
    if (layer != _SYMBOL && layer != _NUMBER) {
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
    rgb_matrix_indicators();

    return state;
}
