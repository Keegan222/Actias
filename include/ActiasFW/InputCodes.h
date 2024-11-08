/*
File:		InputCodes.h
Author:		Keegan MacDonald (keeganm742@gmail.com)
Created:	2024.08.08@21:00
Purpose:	Contains enumerations of keyboard, mouse, and game controller input
			codes overridden from GLFW
*/

#ifndef ACTIASFW_INPUT_CODES_H
#define ACTIASFW_INPUT_CODES_H

#include <GLFW/glfw3.h>

namespace ActiasFW {
	// Enumeration of all keys on a standard US english keyboard overloaded from
	// the GLFW library
	enum KeyCode {
		KEY_UNKNOWN = GLFW_KEY_UNKNOWN,
		KEY_ESCAPE = GLFW_KEY_ESCAPE,
		KEY_F1 = GLFW_KEY_F1,
		KEY_F2 = GLFW_KEY_F2,
		KEY_F3 = GLFW_KEY_F3,
		KEY_F4 = GLFW_KEY_F4,
		KEY_F5 = GLFW_KEY_F5,
		KEY_F6 = GLFW_KEY_F6,
		KEY_F7 = GLFW_KEY_F7,
		KEY_F8 = GLFW_KEY_F8,
		KEY_F9 = GLFW_KEY_F9,
		KEY_F10 = GLFW_KEY_F10,
		KEY_F11 = GLFW_KEY_F11,
		KEY_F12 = GLFW_KEY_F12,
		KEY_PRINT_SCREEN = GLFW_KEY_PRINT_SCREEN,
		KEY_SCROLL_LOCK = GLFW_KEY_SCROLL_LOCK,
		KEY_PAUSE = GLFW_KEY_PAUSE,
		KEY_GRAVE = GLFW_KEY_GRAVE_ACCENT,
		KEY_0 = GLFW_KEY_0,
		KEY_1 = GLFW_KEY_1,
		KEY_2 = GLFW_KEY_2,
		KEY_3 = GLFW_KEY_3,
		KEY_4 = GLFW_KEY_4,
		KEY_5 = GLFW_KEY_5,
		KEY_6 = GLFW_KEY_6,
		KEY_7 = GLFW_KEY_7,
		KEY_8 = GLFW_KEY_8,
		KEY_9 = GLFW_KEY_9,
		KEY_DASH = GLFW_KEY_MINUS,
		KEY_EQUALS = GLFW_KEY_EQUAL,
		KEY_BACKSPACE = GLFW_KEY_BACKSPACE,
		KEY_INSERT = GLFW_KEY_INSERT,
		KEY_HOME = GLFW_KEY_HOME,
		KEY_PAGE_UP = GLFW_KEY_PAGE_UP,
		KEY_TAB = GLFW_KEY_TAB,
		KEY_Q = GLFW_KEY_Q,
		KEY_W = GLFW_KEY_W,
		KEY_E = GLFW_KEY_E,
		KEY_R = GLFW_KEY_R,
		KEY_T = GLFW_KEY_T,
		KEY_Y = GLFW_KEY_Y,
		KEY_U = GLFW_KEY_U,
		KEY_I = GLFW_KEY_I,
		KEY_O = GLFW_KEY_O,
		KEY_P = GLFW_KEY_P,
		KEY_LEFT_BRACKET = GLFW_KEY_LEFT_BRACKET,
		KEY_RIGHT_BRACKET = GLFW_KEY_RIGHT_BRACKET,
		KEY_BACKSLASH = GLFW_KEY_BACKSLASH,
		KEY_DELETE = GLFW_KEY_DELETE,
		KEY_END = GLFW_KEY_END,
		KEY_PAGE_DOWN = GLFW_KEY_PAGE_DOWN,
		KEY_CAPS_LOCK = GLFW_KEY_CAPS_LOCK,
		KEY_A = GLFW_KEY_A,
		KEY_S = GLFW_KEY_S,
		KEY_D = GLFW_KEY_D,
		KEY_F = GLFW_KEY_F,
		KEY_G = GLFW_KEY_G,
		KEY_H = GLFW_KEY_H,
		KEY_J = GLFW_KEY_J,
		KEY_K = GLFW_KEY_K,
		KEY_L = GLFW_KEY_L,
		KEY_SEMICOLON = GLFW_KEY_SEMICOLON,
		KEY_APOSTROPHE = GLFW_KEY_APOSTROPHE,
		KEY_ENTER = GLFW_KEY_ENTER,
		KEY_LEFT_SHIFT = GLFW_KEY_LEFT_SHIFT,
		KEY_Z = GLFW_KEY_Z,
		KEY_X = GLFW_KEY_X,
		KEY_C = GLFW_KEY_C,
		KEY_V = GLFW_KEY_V,
		KEY_B = GLFW_KEY_B,
		KEY_N = GLFW_KEY_N,
		KEY_M = GLFW_KEY_M,
		KEY_COMMA = GLFW_KEY_COMMA,
		KEY_PERIOD = GLFW_KEY_PERIOD,
		KEY_SLASH = GLFW_KEY_SLASH,
		KEY_RIGHT_SHIFT = GLFW_KEY_RIGHT_SHIFT,
		KEY_UP = GLFW_KEY_UP,
		KEY_LEFT_CONTROL = GLFW_KEY_LEFT_CONTROL,
		KEY_LEFT_SUPER = GLFW_KEY_LEFT_SUPER,
		KEY_LEFT_ALT = GLFW_KEY_LEFT_ALT,
		KEY_SPACE = GLFW_KEY_SPACE,
		KEY_RIGHT_ALT = GLFW_KEY_RIGHT_ALT,
		KEY_RIGHT_SUPER = GLFW_KEY_RIGHT_SUPER,
		KEY_RIGHT_CONTROL = GLFW_KEY_RIGHT_CONTROL,
		KEY_LEFT = GLFW_KEY_LEFT,
		KEY_DOWN = GLFW_KEY_DOWN,
		KEY_RIGHT = GLFW_KEY_RIGHT,
		KEY_KEYPAD_NUM_LOCK = GLFW_KEY_NUM_LOCK,
		KEY_KEYPAD_DIVIDE = GLFW_KEY_KP_DIVIDE,
		KEY_KEYPAD_MULTIPLY = GLFW_KEY_KP_MULTIPLY,
		KEY_KEYPAD_SUBTRACT = GLFW_KEY_KP_SUBTRACT,
		KEY_KEYPAD_7 = GLFW_KEY_KP_7,
		KEY_KEYPAD_8 = GLFW_KEY_KP_8,
		KEY_KEYPAD_9 = GLFW_KEY_KP_9,
		KEY_KEYPAD_ADD = GLFW_KEY_KP_ADD,
		KEY_KEYPAD_4 = GLFW_KEY_KP_4,
		KEY_KEYPAD_5 = GLFW_KEY_KP_5,
		KEY_KEYPAD_6 = GLFW_KEY_KP_6,
		KEY_KEYPAD_1 = GLFW_KEY_KP_1,
		KEY_KEYPAD_2 = GLFW_KEY_KP_2,
		KEY_KEYPAD_3 = GLFW_KEY_KP_3,
		KEY_KEYPAD_0 = GLFW_KEY_KP_0,
		KEY_KEYPAD_DECIMAL = GLFW_KEY_KP_DECIMAL,
		KEY_KEYPAD_ENTER = GLFW_KEY_KP_ENTER,
		KEY_LAST_ITERATE = GLFW_KEY_LAST,
	};

	// Enumeration of all buttons on a standard mouse overloaded from the GLFW
	// library
	enum MouseButtonCode {
		MOUSE_BUTTON_UNKNOWN = GLFW_KEY_UNKNOWN,
		MOUSE_BUTTON_LEFT = GLFW_MOUSE_BUTTON_LEFT,
		MOUSE_BUTTON_MIDDLE = GLFW_MOUSE_BUTTON_MIDDLE,
		MOUSE_BUTTON_RIGHT = GLFW_MOUSE_BUTTON_RIGHT,
		MOUSE_BUTTON_1 = GLFW_MOUSE_BUTTON_1,
		MOUSE_BUTTON_2 = GLFW_MOUSE_BUTTON_2,
		MOUSE_BUTTON_3 = GLFW_MOUSE_BUTTON_3,
		MOUSE_BUTTON_4 = GLFW_MOUSE_BUTTON_4,
		MOUSE_BUTTON_5 = GLFW_MOUSE_BUTTON_5,
		MOUSE_BUTTON_6 = GLFW_MOUSE_BUTTON_6,
		MOUSE_BUTTON_7 = GLFW_MOUSE_BUTTON_7,
		MOUSE_BUTTON_8 = GLFW_MOUSE_BUTTON_8,
		MOUSE_BUTTON_LAST_ITERATE = GLFW_MOUSE_BUTTON_LAST,
	};

	// Enumeration of all 16 game controller slots overloaded from the GLFW
	// library
	enum Controller {
		CONTROLLER_UNKNOWN = GLFW_KEY_UNKNOWN,
		CONTROLLER_0 = GLFW_JOYSTICK_1,
		CONTROLLER_1 = GLFW_JOYSTICK_2,
		CONTROLLER_2 = GLFW_JOYSTICK_3,
		CONTROLLER_3 = GLFW_JOYSTICK_4,
		CONTROLLER_4 = GLFW_JOYSTICK_5,
		CONTROLLER_5 = GLFW_JOYSTICK_6,
		CONTROLLER_6 = GLFW_JOYSTICK_7,
		CONTROLLER_7 = GLFW_JOYSTICK_8,
		CONTROLLER_8 = GLFW_JOYSTICK_9,
		CONTROLLER_9 = GLFW_JOYSTICK_10,
		CONTROLLER_10 = GLFW_JOYSTICK_11,
		CONTROLLER_11 = GLFW_JOYSTICK_12,
		CONTROLLER_12 = GLFW_JOYSTICK_13,
		CONTROLLER_13 = GLFW_JOYSTICK_14,
		CONTROLLER_14 = GLFW_JOYSTICK_15,
		CONTROLLER_15 = GLFW_JOYSTICK_16,
		CONTROLLER_LAST_ITERATE = GLFW_JOYSTICK_LAST,
	};

	// Enumeration of all buttons on a game controller overloaded from the GLFW
	// library
	enum ControllerButtonCode {
		CONTROLLER_BUTTON_UNKNOWN = GLFW_KEY_UNKNOWN,
		CONTROLLER_BUTTON_A = GLFW_GAMEPAD_BUTTON_A,
		CONTROLLER_BUTTON_B = GLFW_GAMEPAD_BUTTON_B,
		CONTROLLER_BUTTON_X = GLFW_GAMEPAD_BUTTON_X,
		CONTROLLER_BUTTON_Y = GLFW_GAMEPAD_BUTTON_Y,
		CONTROLLER_BUTTON_CROSS = GLFW_GAMEPAD_BUTTON_CROSS,
		CONTROLLER_BUTTON_CIRCLE = GLFW_GAMEPAD_BUTTON_CIRCLE,
		CONTROLLER_BUTTON_SQUARE = GLFW_GAMEPAD_BUTTON_SQUARE,
		CONTROLLER_BUTTON_TRIANGLE = GLFW_GAMEPAD_BUTTON_TRIANGLE,
		CONTROLLER_BUTTON_UP = GLFW_GAMEPAD_BUTTON_DPAD_UP,
		CONTROLLER_BUTTON_DOWN = GLFW_GAMEPAD_BUTTON_DPAD_DOWN,
		CONTROLLER_BUTTON_LEFT = GLFW_GAMEPAD_BUTTON_DPAD_LEFT,
		CONTROLLER_BUTTON_RIGHT = GLFW_GAMEPAD_BUTTON_DPAD_RIGHT,
		CONTROLLER_BUTTON_LEFT_BUMPER = GLFW_GAMEPAD_BUTTON_LEFT_BUMPER,
		CONTROLLER_BUTTON_RIGHT_BUMPER = GLFW_GAMEPAD_BUTTON_RIGHT_BUMPER,
		CONTROLLER_BUTTON_LEFT_THUMB = GLFW_GAMEPAD_BUTTON_LEFT_THUMB,
		CONTROLLER_BUTTON_RIGHT_THUMB = GLFW_GAMEPAD_BUTTON_RIGHT_THUMB,
		CONTROLLER_BUTTON_BACK = GLFW_GAMEPAD_BUTTON_BACK,
		CONTROLLER_BUTTON_START = GLFW_GAMEPAD_BUTTON_START,
		CONTROLLER_BUTTON_GUIDE = GLFW_GAMEPAD_BUTTON_GUIDE,
		CONTROLLER_BUTTON_LAST_ITERATE = GLFW_GAMEPAD_BUTTON_LAST,
	};

	// Enumeration of all the axes on a game controller overloaded from the GLFW
	// library
	enum ControllerAxisCode {
		CONTROLLER_AXIS_UNKNOWN = GLFW_KEY_UNKNOWN,
		CONTROLLER_AXIS_LEFT_STICK_X = GLFW_GAMEPAD_AXIS_LEFT_X,
		CONTROLLER_AXIS_LEFT_STICK_Y = GLFW_GAMEPAD_AXIS_LEFT_Y,
		CONTROLLER_AXIS_RIGHT_STICK_X = GLFW_GAMEPAD_AXIS_RIGHT_X,
		CONTROLLER_AXIS_RIGHT_STICK_Y = GLFW_GAMEPAD_AXIS_RIGHT_Y,
		CONTROLLER_AXIS_LEFT_TRIGGER = GLFW_GAMEPAD_AXIS_LEFT_TRIGGER,
		CONTROLLER_AXIS_RIGHT_TRIGGER = GLFW_GAMEPAD_AXIS_RIGHT_TRIGGER,
		CONTROLLER_AXIS_LAST_ITERATE = GLFW_GAMEPAD_AXIS_LAST,
	};
}

#endif