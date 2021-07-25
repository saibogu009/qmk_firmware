#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04,                \
	K10, K11, K12, K13, K14,                \
	K20, K21, K22, K23, K24,                \
	K30, K31, K32, K33, K34,                \
	K40, K41, K42, K43, K44,                \
	K50, K51, K52, K53, K54,                \
	                         K65, K66, K67, \
	                         K75, K76, K77, \
	                              K86  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   KC_NO, KC_NO, KC_NO }, \
	{ K10,   K11,   K12,   K13,   K14,   KC_NO, KC_NO, KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   KC_NO, KC_NO, KC_NO }, \
	{ K30,   K31,   K32,   K33,   K34,   KC_NO, KC_NO, KC_NO }, \
	{ K40,   K41,   K42,   K43,   K44,   KC_NO, KC_NO, KC_NO }, \
	{ K50,   K51,   K52,   K53,   K54,   KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K65,   K66,   K67 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K75,   K76,   K77 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K86,   KC_NO }  \
}

#endif