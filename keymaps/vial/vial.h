#pragma once

// Define a unique keyboard UID for Vial
// This should be a random 8-byte value
// You can generate one from https://www.uuidgenerator.net/
#define VIAL_KEYBOARD_UID {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0}

// Define the unlock combo for Vial
// This is the key combination that will unlock the keyboard for configuration
// Format: {row, column} pairs
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Optionally, you can define a secure unlock combo
// This is a more complex key combination that will unlock the keyboard for configuration
#define VIAL_INSECURE

// Define the number of dynamic keymaps
#define DYNAMIC_KEYMAP_LAYER_COUNT 10
