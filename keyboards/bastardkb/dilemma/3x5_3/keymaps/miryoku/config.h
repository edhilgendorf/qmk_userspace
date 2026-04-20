/*
 * Copyright 2023 casuanoob (@casuanoob)
 * Adapted for Dilemma 3x5_3 from Charybdis Miryoku
 */
#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE

#define ENCODER_RESOLUTION 4

#define COMBO_TERM 30

#ifndef __arm__
#    define NO_ACTION_ONESHOT
#endif // __arm__

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* Dilemma-specific features. */
#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `DILEMMA_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `DILEMMA_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define DILEMMA_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE