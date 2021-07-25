#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, 
		KC_ESC, KC_1, KC_2, KC_3, KC_4, 
		KC_LALT, KC_Q, KC_W, KC_E, KC_R, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, 
		KC_LCTL, KC_T, KC_Y, KC_U, KC_I, 
		KC_B, KC_UP, KC_L, 
		KC_LEFT, KC_DOWN, KC_RGHT, 
		KC_SPC)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}