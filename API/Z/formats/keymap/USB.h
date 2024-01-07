/* Zeta API - Z/formats/keymap/USB.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2024 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_formats_keymap_USB_H
#define Z_formats_keymap_USB_H

#define Z_USB_KEY_CODE_KEYBOARD_ERROR_ROLL_OVER		0x01
#define Z_USB_KEY_CODE_KEYBOARD_POST_FAIL		0x02
#define Z_USB_KEY_CODE_KEYBOARD_ERROR_UNDEFINED		0x03
#define Z_USB_KEY_CODE_KEYBOARD_A			0x04
#define Z_USB_KEY_CODE_KEYBOARD_B			0x05
#define Z_USB_KEY_CODE_KEYBOARD_C			0x06
#define Z_USB_KEY_CODE_KEYBOARD_D			0x07
#define Z_USB_KEY_CODE_KEYBOARD_E			0x08
#define Z_USB_KEY_CODE_KEYBOARD_F			0x09
#define Z_USB_KEY_CODE_KEYBOARD_G			0x0A
#define Z_USB_KEY_CODE_KEYBOARD_H			0x0B
#define Z_USB_KEY_CODE_KEYBOARD_I			0x0C
#define Z_USB_KEY_CODE_KEYBOARD_J			0x0D
#define Z_USB_KEY_CODE_KEYBOARD_K			0x0E
#define Z_USB_KEY_CODE_KEYBOARD_L			0x0F
#define Z_USB_KEY_CODE_KEYBOARD_M			0x10
#define Z_USB_KEY_CODE_KEYBOARD_N			0x11
#define Z_USB_KEY_CODE_KEYBOARD_O			0x12
#define Z_USB_KEY_CODE_KEYBOARD_P			0x13
#define Z_USB_KEY_CODE_KEYBOARD_Q			0x14
#define Z_USB_KEY_CODE_KEYBOARD_R			0x15
#define Z_USB_KEY_CODE_KEYBOARD_S			0x16
#define Z_USB_KEY_CODE_KEYBOARD_T			0x17
#define Z_USB_KEY_CODE_KEYBOARD_U			0x18
#define Z_USB_KEY_CODE_KEYBOARD_V			0x19
#define Z_USB_KEY_CODE_KEYBOARD_W			0x1A
#define Z_USB_KEY_CODE_KEYBOARD_X			0x1B
#define Z_USB_KEY_CODE_KEYBOARD_Y			0x1C
#define Z_USB_KEY_CODE_KEYBOARD_Z			0x1D
#define Z_USB_KEY_CODE_KEYBOARD_1			0x1E
#define Z_USB_KEY_CODE_KEYBOARD_2			0x1F
#define Z_USB_KEY_CODE_KEYBOARD_3			0x20
#define Z_USB_KEY_CODE_KEYBOARD_4			0x21
#define Z_USB_KEY_CODE_KEYBOARD_5			0x22
#define Z_USB_KEY_CODE_KEYBOARD_6			0x23
#define Z_USB_KEY_CODE_KEYBOARD_7			0x24
#define Z_USB_KEY_CODE_KEYBOARD_8			0x25
#define Z_USB_KEY_CODE_KEYBOARD_9			0x26
#define Z_USB_KEY_CODE_KEYBOARD_0			0x27
#define Z_USB_KEY_CODE_KEYBOARD_RETURN			0x28
#define Z_USB_KEY_CODE_KEYBOARD_ESCAPE			0x29
#define Z_USB_KEY_CODE_KEYBOARD_BACKSPACE		0x2A
#define Z_USB_KEY_CODE_KEYBOARD_TAB			0x2B
#define Z_USB_KEY_CODE_KEYBOARD_SPACE			0x2C
#define Z_USB_KEY_CODE_KEYBOARD_HYPHEN_MINUS		0x2D
#define Z_USB_KEY_CODE_KEYBOARD_EQUALS_SIGN		0x2E
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_SQUARE_BRACKET	0x2F
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_SQUARE_BRACKET	0x30
#define Z_USB_KEY_CODE_KEYBOARD_REVERSE_SOLIDUS		0x31
#define Z_USB_KEY_CODE_KEYBOARD_NON_US_NUMBER_SIGN	0x32
#define Z_USB_KEY_CODE_KEYBOARD_SEMICOLON		0x33
#define Z_USB_KEY_CODE_KEYBOARD_APOSTROPHE		0x34
#define Z_USB_KEY_CODE_KEYBOARD_GRAVE_ACCENT		0x35
#define Z_USB_KEY_CODE_KEYBOARD_COMMA			0x36
#define Z_USB_KEY_CODE_KEYBOARD_FULL_STOP		0x37
#define Z_USB_KEY_CODE_KEYBOARD_SOLIDUS			0x38
#define Z_USB_KEY_CODE_KEYBOARD_CAPS_LOCK		0x39
#define Z_USB_KEY_CODE_KEYBOARD_F1			0x3A
#define Z_USB_KEY_CODE_KEYBOARD_F2			0x3B
#define Z_USB_KEY_CODE_KEYBOARD_F3			0x3C
#define Z_USB_KEY_CODE_KEYBOARD_F4			0x3D
#define Z_USB_KEY_CODE_KEYBOARD_F5			0x3E
#define Z_USB_KEY_CODE_KEYBOARD_F6			0x3F
#define Z_USB_KEY_CODE_KEYBOARD_F7			0x40
#define Z_USB_KEY_CODE_KEYBOARD_F8			0x41
#define Z_USB_KEY_CODE_KEYBOARD_F9			0x42
#define Z_USB_KEY_CODE_KEYBOARD_F10			0x43
#define Z_USB_KEY_CODE_KEYBOARD_F11			0x44
#define Z_USB_KEY_CODE_KEYBOARD_F12			0x45
#define Z_USB_KEY_CODE_KEYBOARD_PRINT_SCREEN		0x46
#define Z_USB_KEY_CODE_KEYBOARD_SCROLL_LOCK		0x47
#define Z_USB_KEY_CODE_KEYBOARD_PAUSE			0x48
#define Z_USB_KEY_CODE_KEYBOARD_INSERT			0x49
#define Z_USB_KEY_CODE_KEYBOARD_HOME			0x4A
#define Z_USB_KEY_CODE_KEYBOARD_PAGE_UP			0x4B
#define Z_USB_KEY_CODE_KEYBOARD_DELETE			0x4C
#define Z_USB_KEY_CODE_KEYBOARD_END			0x4D
#define Z_USB_KEY_CODE_KEYBOARD_PAGE_DOWN		0x4E
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_ARROW		0x4F
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_ARROW		0x50
#define Z_USB_KEY_CODE_KEYBOARD_DOWN_ARROW		0x51
#define Z_USB_KEY_CODE_KEYBOARD_UP_ARROW		0x52
#define Z_USB_KEY_CODE_KEYPAD_NUM_LOCK			0x53
#define Z_USB_KEY_CODE_KEYPAD_SOLIDUS			0x54
#define Z_USB_KEY_CODE_KEYPAD_ASTERISK			0x55
#define Z_USB_KEY_CODE_KEYPAD_HYPHEN_MINUS		0x56
#define Z_USB_KEY_CODE_KEYPAD_PLUS_SIGN			0x57
#define Z_USB_KEY_CODE_KEYPAD_ENTER			0x58
#define Z_USB_KEY_CODE_KEYPAD_1				0x59
#define Z_USB_KEY_CODE_KEYPAD_2				0x5A
#define Z_USB_KEY_CODE_KEYPAD_3				0x5B
#define Z_USB_KEY_CODE_KEYPAD_4				0x5C
#define Z_USB_KEY_CODE_KEYPAD_5				0x5D
#define Z_USB_KEY_CODE_KEYPAD_6				0x5E
#define Z_USB_KEY_CODE_KEYPAD_7				0x5F
#define Z_USB_KEY_CODE_KEYPAD_8				0x60
#define Z_USB_KEY_CODE_KEYPAD_9				0x61
#define Z_USB_KEY_CODE_KEYPAD_0				0x62
#define Z_USB_KEY_CODE_KEYPAD_DECIMAL_SEPARATOR		0x63
#define Z_USB_KEY_CODE_KEYBOARD_NON_US_REVERSE_SOLIDUS	0x64
#define Z_USB_KEY_CODE_KEYBOARD_APPLICATION		0x65
#define Z_USB_KEY_CODE_KEYBOARD_POWER			0x66
#define Z_USB_KEY_CODE_KEYPAD_EQUALS_SIGN		0x67
#define Z_USB_KEY_CODE_KEYBOARD_F13			0x68
#define Z_USB_KEY_CODE_KEYBOARD_F14			0x69
#define Z_USB_KEY_CODE_KEYBOARD_F15			0x6A
#define Z_USB_KEY_CODE_KEYBOARD_F16			0x6B
#define Z_USB_KEY_CODE_KEYBOARD_F17			0x6C
#define Z_USB_KEY_CODE_KEYBOARD_F18			0x6D
#define Z_USB_KEY_CODE_KEYBOARD_F19			0x6E
#define Z_USB_KEY_CODE_KEYBOARD_F20			0x6F
#define Z_USB_KEY_CODE_KEYBOARD_F21			0x70
#define Z_USB_KEY_CODE_KEYBOARD_F22			0x71
#define Z_USB_KEY_CODE_KEYBOARD_F23			0x72
#define Z_USB_KEY_CODE_KEYBOARD_F24			0x73
#define Z_USB_KEY_CODE_KEYBOARD_EXECUTE			0x74
#define Z_USB_KEY_CODE_KEYBOARD_HELP			0x75
#define Z_USB_KEY_CODE_KEYBOARD_MENU			0x76
#define Z_USB_KEY_CODE_KEYBOARD_SELECT			0x77
#define Z_USB_KEY_CODE_KEYBOARD_STOP			0x78
#define Z_USB_KEY_CODE_KEYBOARD_AGAIN			0x79
#define Z_USB_KEY_CODE_KEYBOARD_UNDO			0x7A
#define Z_USB_KEY_CODE_KEYBOARD_CUT			0x7B
#define Z_USB_KEY_CODE_KEYBOARD_COPY			0x7C
#define Z_USB_KEY_CODE_KEYBOARD_PASTE			0x7D
#define Z_USB_KEY_CODE_KEYBOARD_FIND			0x7E
#define Z_USB_KEY_CODE_KEYBOARD_MUTE			0x7F
#define Z_USB_KEY_CODE_KEYBOARD_VOLUME_UP		0x80
#define Z_USB_KEY_CODE_KEYBOARD_VOLUME_DOWN		0x81
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_CAPS_LOCK	0x82
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_NUM_LOCK	0x83
#define Z_USB_KEY_CODE_KEYBOARD_LOCKING_SCROLL_LOCK	0x84
#define Z_USB_KEY_CODE_KEYPAD_COMMA			0x85
#define Z_USB_KEY_CODE_AS_400_KEYPAD_EQUALS_SIGN	0x86 /* Used on AS/400 keyboards */
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_1		0x87
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_2		0x88
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_3		0x89
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_4		0x8A
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_5		0x8B
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_6		0x8C
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_7		0x8D
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_8		0x8E
#define Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_9		0x8F
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_1		0x90
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_2		0x91
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_3		0x92
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_4		0x93
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_5		0x94
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_6		0x95
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_7		0x96
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_8		0x97
#define Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_9		0x98
#define Z_USB_KEY_CODE_KEYBOARD_ALTERNATE_ERASE		0x99
#define Z_USB_KEY_CODE_KEYBOARD_SYS_REQ_ATTENTION	0x9A
#define Z_USB_KEY_CODE_KEYBOARD_CANCEL			0x9B
#define Z_USB_KEY_CODE_KEYBOARD_CLEAR			0x9C
#define Z_USB_KEY_CODE_KEYBOARD_PRIOR			0x9D
#define Z_USB_KEY_CODE_KEYBOARD_RETURN_2		0x9E /* Duplicated? */
#define Z_USB_KEY_CODE_KEYBOARD_SEPARATOR		0x9F
#define Z_USB_KEY_CODE_KEYBOARD_OUT			0xA0
#define Z_USB_KEY_CODE_KEYBOARD_OPER			0xA1
#define Z_USB_KEY_CODE_KEYBOARD_CLEAR_AGAIN		0xA2
#define Z_USB_KEY_CODE_KEYBOARD_CR_SEL_PROPS		0xA3
#define Z_USB_KEY_CODE_KEYBOARD_EX_SEL			0xA4
/* A5h-AFh - Reserved */
#define Z_USB_KEY_CODE_KEYPAD_00			0xB0
#define Z_USB_KEY_CODE_KEYPAD_000			0xB1
#define Z_USB_KEY_CODE_THOUSANDS_SEPARATOR		0xB2
#define Z_USB_KEY_CODE_DECIMAL_SEPARATOR		0xB3
#define Z_USB_KEY_CODE_CURRENCY_UNIT			0xB4
#define Z_USB_KEY_CODE_CURRENCY_SUBUNIT			0xB5
#define Z_USB_KEY_CODE_KEYPAD_LEFT_PARENTHESIS		0xB6
#define Z_USB_KEY_CODE_KEYPAD_RIGHT_PARENTHESIS		0xB7
#define Z_USB_KEY_CODE_KEYPAD_LEFT_CURLY_BRACKET	0xB8
#define Z_USB_KEY_CODE_KEYPAD_RIGHT_CURLY_BRACKET	0xB9
#define Z_USB_KEY_CODE_KEYPAD_TAB			0xBA
#define Z_USB_KEY_CODE_KEYPAD_BACKSPACE			0xBB
#define Z_USB_KEY_CODE_KEYPAD_A				0xBC
#define Z_USB_KEY_CODE_KEYPAD_B				0xBD
#define Z_USB_KEY_CODE_KEYPAD_C				0xBE
#define Z_USB_KEY_CODE_KEYPAD_D				0xBF
#define Z_USB_KEY_CODE_KEYPAD_E				0xC0
#define Z_USB_KEY_CODE_KEYPAD_F				0xC1
#define Z_USB_KEY_CODE_KEYPAD_XOR			0xC2
#define Z_USB_KEY_CODE_KEYPAD_CIRCUMFLEX_ACCENT		0xC3
#define Z_USB_KEY_CODE_KEYPAD_PERCENT_SIGN		0xC4
#define Z_USB_KEY_CODE_KEYPAD_LESS_THAN_SIGN		0xC5
#define Z_USB_KEY_CODE_KEYPAD_GREATER_THAN_SIGN		0xC6
#define Z_USB_KEY_CODE_KEYPAD_AMPERSAND			0xC7
#define Z_USB_KEY_CODE_KEYPAD_DOUBLE_AMPERSAND		0xC8
#define Z_USB_KEY_CODE_KEYPAD_VERTICAL_LINE		0xC9
#define Z_USB_KEY_CODE_KEYPAD_DOUBLE_VERTICAL_LINE	0xCA
#define Z_USB_KEY_CODE_KEYPAD_COLON			0xCB
#define Z_USB_KEY_CODE_KEYPAD_NUMBER_SIGN		0xCC
#define Z_USB_KEY_CODE_KEYPAD_SPACE			0xCD
#define Z_USB_KEY_CODE_KEYPAD_COMMERCIAL_AT		0xCE
#define Z_USB_KEY_CODE_KEYPAD_EXCLAMATION_MARK		0xCF
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_STORE		0xD0
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_RECALL		0xD1
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_CLEAR		0xD2
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_ADD		0xD3
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_SUBTRACT		0xD4
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_MULTIPLY		0xD5
#define Z_USB_KEY_CODE_KEYPAD_MEMORY_DIVIDE		0xD6
#define Z_USB_KEY_CODE_KEYPAD_PLUS_MINUS_SIGN		0xD7
#define Z_USB_KEY_CODE_KEYPAD_CLEAR			0xD8
#define Z_USB_KEY_CODE_KEYPAD_CLEAR_ENTRY		0xD9
#define Z_USB_KEY_CODE_KEYPAD_BINARY			0xDA
#define Z_USB_KEY_CODE_KEYPAD_OCTAL			0xDB
#define Z_USB_KEY_CODE_KEYPAD_DECIMAL			0xDC
#define Z_USB_KEY_CODE_KEYPAD_HEXADECIMAL		0xDD
/* DEh-DFh - Reserved */
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_CONTROL		0xE0
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_SHIFT		0xE1
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_ALT		0xE2
#define Z_USB_KEY_CODE_KEYBOARD_LEFT_GUI		0xE3
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_CONTROL		0xE4
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_SHIFT		0xE5
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_ALT		0xE6
#define Z_USB_KEY_CODE_KEYBOARD_RIGHT_GUI		0xE7
/* E8h-FFFFh - Reserved */

#define Z_ARRAY_CONTENT_USB_KEY_CODE_TO_Z_KEY_CODE							      \
	Z_KEY_CODE_INVALID,			  /* 0x00 - Unused					   */ \
	Z_KEY_CODE_INVALID,			  /* 0x01 - Z_USB_KEY_CODE_KEYBOARD_ERROR_ROLL_OVER	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x02 - Z_USB_KEY_CODE_KEYBOARD_POST_FAIL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x03 - Z_USB_KEY_CODE_KEYBOARD_ERROR_UNDEFINED	   */ \
	Z_KEY_CODE_ANSI_A,			  /* 0x04 - Z_USB_KEY_CODE_KEYBOARD_A			   */ \
	Z_KEY_CODE_ANSI_B,			  /* 0x05 - Z_USB_KEY_CODE_KEYBOARD_B			   */ \
	Z_KEY_CODE_ANSI_C,			  /* 0x06 - Z_USB_KEY_CODE_KEYBOARD_C			   */ \
	Z_KEY_CODE_ANSI_D,			  /* 0x07 - Z_USB_KEY_CODE_KEYBOARD_D			   */ \
	Z_KEY_CODE_ANSI_E,			  /* 0x08 - Z_USB_KEY_CODE_KEYBOARD_E			   */ \
	Z_KEY_CODE_ANSI_F,			  /* 0x09 - Z_USB_KEY_CODE_KEYBOARD_F			   */ \
	Z_KEY_CODE_ANSI_G,			  /* 0x0A - Z_USB_KEY_CODE_KEYBOARD_G			   */ \
	Z_KEY_CODE_ANSI_H,			  /* 0x0B - Z_USB_KEY_CODE_KEYBOARD_H			   */ \
	Z_KEY_CODE_ANSI_I,			  /* 0x0C - Z_USB_KEY_CODE_KEYBOARD_I			   */ \
	Z_KEY_CODE_ANSI_J,			  /* 0x0D - Z_USB_KEY_CODE_KEYBOARD_J			   */ \
	Z_KEY_CODE_ANSI_K,			  /* 0x0E - Z_USB_KEY_CODE_KEYBOARD_K			   */ \
	Z_KEY_CODE_ANSI_L,			  /* 0x0F - Z_USB_KEY_CODE_KEYBOARD_L			   */ \
	Z_KEY_CODE_ANSI_M,			  /* 0x10 - Z_USB_KEY_CODE_KEYBOARD_M			   */ \
	Z_KEY_CODE_ANSI_N,			  /* 0x11 - Z_USB_KEY_CODE_KEYBOARD_N			   */ \
	Z_KEY_CODE_ANSI_O,			  /* 0x12 - Z_USB_KEY_CODE_KEYBOARD_O			   */ \
	Z_KEY_CODE_ANSI_P,			  /* 0x13 - Z_USB_KEY_CODE_KEYBOARD_P			   */ \
	Z_KEY_CODE_ANSI_Q,			  /* 0x14 - Z_USB_KEY_CODE_KEYBOARD_Q			   */ \
	Z_KEY_CODE_ANSI_R,			  /* 0x15 - Z_USB_KEY_CODE_KEYBOARD_R			   */ \
	Z_KEY_CODE_ANSI_S,			  /* 0x16 - Z_USB_KEY_CODE_KEYBOARD_S			   */ \
	Z_KEY_CODE_ANSI_T,			  /* 0x17 - Z_USB_KEY_CODE_KEYBOARD_T			   */ \
	Z_KEY_CODE_ANSI_U,			  /* 0x18 - Z_USB_KEY_CODE_KEYBOARD_U			   */ \
	Z_KEY_CODE_ANSI_V,			  /* 0x19 - Z_USB_KEY_CODE_KEYBOARD_V			   */ \
	Z_KEY_CODE_ANSI_W,			  /* 0x1A - Z_USB_KEY_CODE_KEYBOARD_W			   */ \
	Z_KEY_CODE_ANSI_X,			  /* 0x1B - Z_USB_KEY_CODE_KEYBOARD_X			   */ \
	Z_KEY_CODE_ANSI_Y,			  /* 0x1C - Z_USB_KEY_CODE_KEYBOARD_Y			   */ \
	Z_KEY_CODE_ANSI_Z,			  /* 0x1D - Z_USB_KEY_CODE_KEYBOARD_Z			   */ \
	Z_KEY_CODE_ANSI_1,			  /* 0x1E - Z_USB_KEY_CODE_KEYBOARD_1			   */ \
	Z_KEY_CODE_ANSI_2,			  /* 0x1F - Z_USB_KEY_CODE_KEYBOARD_2			   */ \
	Z_KEY_CODE_ANSI_3,			  /* 0x20 - Z_USB_KEY_CODE_KEYBOARD_3			   */ \
	Z_KEY_CODE_ANSI_4,			  /* 0x21 - Z_USB_KEY_CODE_KEYBOARD_4			   */ \
	Z_KEY_CODE_ANSI_5,			  /* 0x22 - Z_USB_KEY_CODE_KEYBOARD_5			   */ \
	Z_KEY_CODE_ANSI_6,			  /* 0x23 - Z_USB_KEY_CODE_KEYBOARD_6			   */ \
	Z_KEY_CODE_ANSI_7,			  /* 0x24 - Z_USB_KEY_CODE_KEYBOARD_7			   */ \
	Z_KEY_CODE_ANSI_8,			  /* 0x25 - Z_USB_KEY_CODE_KEYBOARD_8			   */ \
	Z_KEY_CODE_ANSI_9,			  /* 0x26 - Z_USB_KEY_CODE_KEYBOARD_9			   */ \
	Z_KEY_CODE_ANSI_0,			  /* 0x27 - Z_USB_KEY_CODE_KEYBOARD_0			   */ \
	Z_KEY_CODE_RETURN,			  /* 0x28 - Z_USB_KEY_CODE_KEYBOARD_RETURN		   */ \
	Z_KEY_CODE_ESCAPE,			  /* 0x29 - Z_USB_KEY_CODE_KEYBOARD_ESCAPE		   */ \
	Z_KEY_CODE_BACKSPACE,			  /* 0x2A - Z_USB_KEY_CODE_KEYBOARD_BACKSPACE		   */ \
	Z_KEY_CODE_TAB,				  /* 0x2B - Z_USB_KEY_CODE_KEYBOARD_TAB			   */ \
	Z_KEY_CODE_SPACE,			  /* 0x2C - Z_USB_KEY_CODE_KEYBOARD_SPACE		   */ \
	Z_KEY_CODE_ANSI_HYPHEN_MINUS,		  /* 0x2D - Z_USB_KEY_CODE_KEYBOARD_HYPHEN_MINUS	   */ \
	Z_KEY_CODE_ANSI_EQUALS_SIGN,		  /* 0x2E - Z_USB_KEY_CODE_KEYBOARD_EQUALS_SIGN		   */ \
	Z_KEY_CODE_ANSI_LEFT_SQUARE_BRACKET,	  /* 0x2F - Z_USB_KEY_CODE_KEYBOARD_LEFT_SQUARE_BRACKET	   */ \
	Z_KEY_CODE_ANSI_RIGHT_SQUARE_BRACKET,	  /* 0x30 - Z_USB_KEY_CODE_KEYBOARD_RIGHT_SQUARE_BRACKET   */ \
	Z_KEY_CODE_ANSI_REVERSE_SOLIDUS,	  /* 0x31 - Z_USB_KEY_CODE_KEYBOARD_REVERSE_SOLIDUS	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x32 - Z_USB_KEY_CODE_KEYBOARD_NON_US_NUMBER_SIGN	   */ \
	Z_KEY_CODE_ANSI_SEMICOLON,		  /* 0x33 - Z_USB_KEY_CODE_KEYBOARD_SEMICOLON		   */ \
	Z_KEY_CODE_ANSI_APOSTROPHE,		  /* 0x34 - Z_USB_KEY_CODE_KEYBOARD_APOSTROPHE		   */ \
	Z_KEY_CODE_ANSI_GRAVE_ACCENT,		  /* 0x35 - Z_USB_KEY_CODE_KEYBOARD_GRAVE_ACCENT	   */ \
	Z_KEY_CODE_ANSI_COMMA,			  /* 0x36 - Z_USB_KEY_CODE_KEYBOARD_COMMA		   */ \
	Z_KEY_CODE_ANSI_FULL_STOP,		  /* 0x37 - Z_USB_KEY_CODE_KEYBOARD_FULL_STOP		   */ \
	Z_KEY_CODE_ANSI_SOLIDUS,		  /* 0x38 - Z_USB_KEY_CODE_KEYBOARD_SOLIDUS		   */ \
	Z_KEY_CODE_CAPS_LOCK,			  /* 0x39 - Z_USB_KEY_CODE_KEYBOARD_CAPS_LOCK		   */ \
	Z_KEY_CODE_F1,				  /* 0x3A - Z_USB_KEY_CODE_KEYBOARD_F1			   */ \
	Z_KEY_CODE_F2,				  /* 0x3B - Z_USB_KEY_CODE_KEYBOARD_F2			   */ \
	Z_KEY_CODE_F3,				  /* 0x3C - Z_USB_KEY_CODE_KEYBOARD_F3			   */ \
	Z_KEY_CODE_F4,				  /* 0x3D - Z_USB_KEY_CODE_KEYBOARD_F4			   */ \
	Z_KEY_CODE_F5,				  /* 0x3E - Z_USB_KEY_CODE_KEYBOARD_F5			   */ \
	Z_KEY_CODE_F6,				  /* 0x3F - Z_USB_KEY_CODE_KEYBOARD_F6			   */ \
	Z_KEY_CODE_F7,				  /* 0x40 - Z_USB_KEY_CODE_KEYBOARD_F7			   */ \
	Z_KEY_CODE_F8,				  /* 0x41 - Z_USB_KEY_CODE_KEYBOARD_F8			   */ \
	Z_KEY_CODE_F9,				  /* 0x42 - Z_USB_KEY_CODE_KEYBOARD_F9			   */ \
	Z_KEY_CODE_F10,				  /* 0x43 - Z_USB_KEY_CODE_KEYBOARD_F10			   */ \
	Z_KEY_CODE_F11,				  /* 0x44 - Z_USB_KEY_CODE_KEYBOARD_F11			   */ \
	Z_KEY_CODE_F12,				  /* 0x45 - Z_USB_KEY_CODE_KEYBOARD_F12			   */ \
	Z_KEY_CODE_PRINT_SCREEN,		  /* 0x46 - Z_USB_KEY_CODE_KEYBOARD_PRINT_SCREEN	   */ \
	Z_KEY_CODE_SCROLL_LOCK,			  /* 0x47 - Z_USB_KEY_CODE_KEYBOARD_SCROLL_LOCK		   */ \
	Z_KEY_CODE_PAUSE,			  /* 0x48 - Z_USB_KEY_CODE_KEYBOARD_PAUSE		   */ \
	Z_KEY_CODE_INSERT,			  /* 0x49 - Z_USB_KEY_CODE_KEYBOARD_INSERT		   */ \
	Z_KEY_CODE_HOME,			  /* 0x4A - Z_USB_KEY_CODE_KEYBOARD_HOME		   */ \
	Z_KEY_CODE_PAGE_UP,			  /* 0x4B - Z_USB_KEY_CODE_KEYBOARD_PAGE_UP		   */ \
	Z_KEY_CODE_DELETE,			  /* 0x4C - Z_USB_KEY_CODE_KEYBOARD_DELETE		   */ \
	Z_KEY_CODE_END,				  /* 0x4D - Z_USB_KEY_CODE_KEYBOARD_END			   */ \
	Z_KEY_CODE_PAGE_DOWN,			  /* 0x4E - Z_USB_KEY_CODE_KEYBOARD_PAGE_DOWN		   */ \
	Z_KEY_CODE_RIGHT,			  /* 0x4F - Z_USB_KEY_CODE_KEYBOARD_RIGHT_ARROW		   */ \
	Z_KEY_CODE_LEFT,			  /* 0x50 - Z_USB_KEY_CODE_KEYBOARD_LEFT_ARROW		   */ \
	Z_KEY_CODE_DOWN,			  /* 0x51 - Z_USB_KEY_CODE_KEYBOARD_DOWN_ARROW		   */ \
	Z_KEY_CODE_UP,				  /* 0x52 - Z_USB_KEY_CODE_KEYBOARD_UP_ARROW		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_NUM_LOCK,	  /* 0x53 - Z_USB_KEY_CODE_KEYPAD_NUM_LOCK		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_SOLIDUS,		  /* 0x54 - Z_USB_KEY_CODE_KEYPAD_SOLIDUS		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_ASTERISK,	  /* 0x55 - Z_USB_KEY_CODE_KEYPAD_ASTERISK		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_HYPHEN_MINUS,	  /* 0x56 - Z_USB_KEY_CODE_KEYPAD_HYPHEN_MINUS		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_PLUS_SIGN,	  /* 0x57 - Z_USB_KEY_CODE_KEYPAD_PLUS_SIGN		   */ \
	Z_KEY_CODE_ANSI_KEYPAD_ENTER,		  /* 0x58 - Z_USB_KEY_CODE_KEYPAD_ENTER			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_1,		  /* 0x59 - Z_USB_KEY_CODE_KEYPAD_1			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_2,		  /* 0x5A - Z_USB_KEY_CODE_KEYPAD_2			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_3,		  /* 0x5B - Z_USB_KEY_CODE_KEYPAD_3			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_4,		  /* 0x5C - Z_USB_KEY_CODE_KEYPAD_4			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_5,		  /* 0x5D - Z_USB_KEY_CODE_KEYPAD_5			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_6,		  /* 0x5E - Z_USB_KEY_CODE_KEYPAD_6			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_7,		  /* 0x5F - Z_USB_KEY_CODE_KEYPAD_7			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_8,		  /* 0x60 - Z_USB_KEY_CODE_KEYPAD_8			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_9,		  /* 0x61 - Z_USB_KEY_CODE_KEYPAD_9			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_0,		  /* 0x62 - Z_USB_KEY_CODE_KEYPAD_0			   */ \
	Z_KEY_CODE_ANSI_KEYPAD_DECIMAL_SEPARATOR, /* 0x63 - Z_USB_KEY_CODE_KEYPAD_DECIMAL_SEPARATOR	   */ \
	Z_KEY_CODE_ISO_SECTION,			  /* 0x64 - Z_USB_KEY_CODE_KEYBOARD_NON_US_REVERSE_SOLIDUS */ \
	Z_KEY_CODE_APPLICATION,			  /* 0x65 - Z_USB_KEY_CODE_KEYBOARD_APPLICATION		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x66 - Z_USB_KEY_CODE_KEYBOARD_POWER		   */ \
	Z_KEY_CODE_APPLE_ANSI_KEYPAD_EQUALS_SIGN, /* 0x67 - Z_USB_KEY_CODE_KEYPAD_EQUALS_SIGN		   */ \
	Z_KEY_CODE_F13,				  /* 0x68 - Z_USB_KEY_CODE_KEYBOARD_F13			   */ \
	Z_KEY_CODE_F14,				  /* 0x69 - Z_USB_KEY_CODE_KEYBOARD_F14			   */ \
	Z_KEY_CODE_F15,				  /* 0x6A - Z_USB_KEY_CODE_KEYBOARD_F15			   */ \
	Z_KEY_CODE_F16,				  /* 0x6B - Z_USB_KEY_CODE_KEYBOARD_F16			   */ \
	Z_KEY_CODE_F17,				  /* 0x6C - Z_USB_KEY_CODE_KEYBOARD_F17			   */ \
	Z_KEY_CODE_F18,				  /* 0x6D - Z_USB_KEY_CODE_KEYBOARD_F18			   */ \
	Z_KEY_CODE_F19,				  /* 0x6E - Z_USB_KEY_CODE_KEYBOARD_F19			   */ \
	Z_KEY_CODE_F20,				  /* 0x6F - Z_USB_KEY_CODE_KEYBOARD_F20			   */ \
	Z_KEY_CODE_F21,				  /* 0x70 - Z_USB_KEY_CODE_KEYBOARD_F21			   */ \
	Z_KEY_CODE_F22,				  /* 0x71 - Z_USB_KEY_CODE_KEYBOARD_F22			   */ \
	Z_KEY_CODE_F23,				  /* 0x72 - Z_USB_KEY_CODE_KEYBOARD_F23			   */ \
	Z_KEY_CODE_F24,				  /* 0x73 - Z_USB_KEY_CODE_KEYBOARD_F24			   */ \
	Z_KEY_CODE_INVALID,			  /* 0x74 - Z_USB_KEY_CODE_KEYBOARD_EXECUTE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x75 - Z_USB_KEY_CODE_KEYBOARD_HELP		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x76 - Z_USB_KEY_CODE_KEYBOARD_MENU		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x77 - Z_USB_KEY_CODE_KEYBOARD_SELECT		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x78 - Z_USB_KEY_CODE_KEYBOARD_STOP		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x79 - Z_USB_KEY_CODE_KEYBOARD_AGAIN		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x7A - Z_USB_KEY_CODE_KEYBOARD_UNDO		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x7B - Z_USB_KEY_CODE_KEYBOARD_CUT			   */ \
	Z_KEY_CODE_INVALID,			  /* 0x7C - Z_USB_KEY_CODE_KEYBOARD_COPY		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x7D - Z_USB_KEY_CODE_KEYBOARD_PASTE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x7E - Z_USB_KEY_CODE_KEYBOARD_FIND		   */ \
	Z_KEY_CODE_MUTE,			  /* 0x7F - Z_USB_KEY_CODE_KEYBOARD_MUTE		   */ \
	Z_KEY_CODE_VOLUME_UP,			  /* 0x80 - Z_USB_KEY_CODE_KEYBOARD_VOLUME_UP		   */ \
	Z_KEY_CODE_VOLUME_DOWN,			  /* 0x81 - Z_USB_KEY_CODE_KEYBOARD_VOLUME_DOWN		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x82 - Z_USB_KEY_CODE_KEYBOARD_LOCKING_CAPS_LOCK	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x83 - Z_USB_KEY_CODE_KEYBOARD_LOCKING_NUM_LOCK	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x84 - Z_USB_KEY_CODE_KEYBOARD_LOCKING_SCROLL_LOCK	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x85 - Z_USB_KEY_CODE_KEYPAD_COMMA			   */ \
	Z_KEY_CODE_INVALID,			  /* 0x86 - Z_USB_KEY_CODE_AS_400_KEYPAD_EQUALS_SIGN	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x87 - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_1	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x88 - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_2	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x89 - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_3	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8A - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_4	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8B - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_5	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8C - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_6	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8D - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_7	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8E - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_8	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x8F - Z_USB_KEY_CODE_KEYBOARD_INTERNATIONAL_9	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x90 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_1		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x91 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_2		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x92 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_3		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x93 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_4		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x94 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_5		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x95 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_6		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x96 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_7		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x97 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_8		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x98 - Z_USB_KEY_CODE_KEYBOARD_LANGUAGE_9		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x99 - Z_USB_KEY_CODE_KEYBOARD_ALTERNATE_ERASE	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9A - Z_USB_KEY_CODE_KEYBOARD_SYS_REQ_ATTENTION	   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9B - Z_USB_KEY_CODE_KEYBOARD_CANCEL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9C - Z_USB_KEY_CODE_KEYBOARD_CLEAR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9D - Z_USB_KEY_CODE_KEYBOARD_PRIOR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9E - Z_USB_KEY_CODE_KEYBOARD_RETURN_2		   */ \
	Z_KEY_CODE_INVALID,			  /* 0x9F - Z_USB_KEY_CODE_KEYBOARD_SEPARATOR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA0 - Z_USB_KEY_CODE_KEYBOARD_OUT			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA1 - Z_USB_KEY_CODE_KEYBOARD_OPER		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA2 - Z_USB_KEY_CODE_KEYBOARD_CLEAR_AGAIN		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA3 - Z_USB_KEY_CODE_KEYBOARD_CR_SEL_PROPS	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA4 - Z_USB_KEY_CODE_KEYBOARD_EX_SEL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA5 - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA6 - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA7 - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA8 - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xA9 - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAA - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAB - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAC - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAD - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAE - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xAF - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB0 - Z_USB_KEY_CODE_KEYPAD_00			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB1 - Z_USB_KEY_CODE_KEYPAD_000			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB2 - Z_USB_KEY_CODE_THOUSANDS_SEPARATOR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB3 - Z_USB_KEY_CODE_DECIMAL_SEPARATOR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB4 - Z_USB_KEY_CODE_CURRENCY_UNIT		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB5 - Z_USB_KEY_CODE_CURRENCY_SUBUNIT		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB6 - Z_USB_KEY_CODE_KEYPAD_LEFT_PARENTHESIS	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB7 - Z_USB_KEY_CODE_KEYPAD_RIGHT_PARENTHESIS	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB8 - Z_USB_KEY_CODE_KEYPAD_LEFT_CURLY_BRACKET	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xB9 - Z_USB_KEY_CODE_KEYPAD_RIGHT_CURLY_BRACKET	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBA - Z_USB_KEY_CODE_KEYPAD_TAB			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBB - Z_USB_KEY_CODE_KEYPAD_BACKSPACE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBC - Z_USB_KEY_CODE_KEYPAD_A			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBD - Z_USB_KEY_CODE_KEYPAD_B			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBE - Z_USB_KEY_CODE_KEYPAD_C			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xBF - Z_USB_KEY_CODE_KEYPAD_D			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC0 - Z_USB_KEY_CODE_KEYPAD_E			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC1 - Z_USB_KEY_CODE_KEYPAD_F			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC2 - Z_USB_KEY_CODE_KEYPAD_XOR			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC3 - Z_USB_KEY_CODE_KEYPAD_CIRCUMFLEX_ACCENT	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC4 - Z_USB_KEY_CODE_KEYPAD_PERCENT_SIGN		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC5 - Z_USB_KEY_CODE_KEYPAD_LESS_THAN_SIGN	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC6 - Z_USB_KEY_CODE_KEYPAD_GREATER_THAN_SIGN	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC7 - Z_USB_KEY_CODE_KEYPAD_AMPERSAND		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC8 - Z_USB_KEY_CODE_KEYPAD_DOUBLE_AMPERSAND	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xC9 - Z_USB_KEY_CODE_KEYPAD_VERTICAL_LINE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCA - Z_USB_KEY_CODE_KEYPAD_DOUBLE_VERTICAL_LINE	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCB - Z_USB_KEY_CODE_KEYPAD_COLON			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCC - Z_USB_KEY_CODE_KEYPAD_NUMBER_SIGN		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCD - Z_USB_KEY_CODE_KEYPAD_SPACE			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCE - Z_USB_KEY_CODE_KEYPAD_COMMERCIAL_AT		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xCF - Z_USB_KEY_CODE_KEYPAD_EXCLAMATION_MARK	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD0 - Z_USB_KEY_CODE_KEYPAD_MEMORY_STORE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD1 - Z_USB_KEY_CODE_KEYPAD_MEMORY_RECALL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD2 - Z_USB_KEY_CODE_KEYPAD_MEMORY_CLEAR		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD3 - Z_USB_KEY_CODE_KEYPAD_MEMORY_ADD		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD4 - Z_USB_KEY_CODE_KEYPAD_MEMORY_SUBTRACT	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD5 - Z_USB_KEY_CODE_KEYPAD_MEMORY_MULTIPLY	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD6 - Z_USB_KEY_CODE_KEYPAD_MEMORY_DIVIDE		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD7 - Z_USB_KEY_CODE_KEYPAD_PLUS_MINUS_SIGN	   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD8 - Z_USB_KEY_CODE_KEYPAD_CLEAR			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xD9 - Z_USB_KEY_CODE_KEYPAD_CLEAR_ENTRY		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDA - Z_USB_KEY_CODE_KEYPAD_BINARY		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDB - Z_USB_KEY_CODE_KEYPAD_OCTAL			   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDC - Z_USB_KEY_CODE_KEYPAD_DECIMAL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDD - Z_USB_KEY_CODE_KEYPAD_HEXADECIMAL		   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDE - Reserved					   */ \
	Z_KEY_CODE_INVALID,			  /* 0xDF - Reserved					   */ \
	Z_KEY_CODE_LEFT_CONTROL,		  /* 0xE0 - Z_USB_KEY_CODE_KEYBOARD_LEFT_CONTROL	   */ \
	Z_KEY_CODE_LEFT_SHIFT,			  /* 0xE1 - Z_USB_KEY_CODE_KEYBOARD_LEFT_SHIFT		   */ \
	Z_KEY_CODE_LEFT_OPTION,			  /* 0xE2 - Z_USB_KEY_CODE_KEYBOARD_LEFT_ALT		   */ \
	Z_KEY_CODE_LEFT_COMMAND,		  /* 0xE3 - Z_USB_KEY_CODE_KEYBOARD_LEFT_GUI		   */ \
	Z_KEY_CODE_RIGHT_CONTROL,		  /* 0xE4 - Z_USB_KEY_CODE_KEYBOARD_RIGHT_CONTROL	   */ \
	Z_KEY_CODE_RIGHT_SHIFT,			  /* 0xE5 - Z_USB_KEY_CODE_KEYBOARD_RIGHT_SHIFT		   */ \
	Z_KEY_CODE_RIGHT_OPTION,		  /* 0xE6 - Z_USB_KEY_CODE_KEYBOARD_RIGHT_ALT		   */ \
	Z_KEY_CODE_RIGHT_COMMAND		  /* 0xE7 - Z_USB_KEY_CODE_KEYBOARD_RIGHT_GUI		   */

#endif /* Z_formats_keymap_USB_H */
