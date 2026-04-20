/*
 * Copyright 2023 casuanoob (@casuanoob) + your Miryoku port
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
