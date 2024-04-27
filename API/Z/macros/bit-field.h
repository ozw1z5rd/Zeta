/* Zeta API - Z/macros/bit-field.h
 ______  ______________  ___
|__   / |  ___|___  ___|/   \
  /  /__|  __|   |  |  /  -  \
 /______|_____|  |__| /__/ \__\
Copyright (C) 2006-2024 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_macros_bit_field_H
#define Z_macros_bit_field_H

#include <Z/keys/order.h>
#include <Z/inspection/compiler.h>

#define Z_MEMBERIZE_2( _1, _2)																		      _1; _2;
#define Z_MEMBERIZE_3( _1, _2, _3)																	      _1; _2; _3;
#define Z_MEMBERIZE_4( _1, _2, _3, _4)																	      _1; _2; _3; _4;
#define Z_MEMBERIZE_5( _1, _2, _3, _4, _5)																      _1; _2; _3; _4; _5;
#define Z_MEMBERIZE_6( _1, _2, _3, _4, _5, _6)																      _1; _2; _3; _4; _5; _6;
#define Z_MEMBERIZE_7( _1, _2, _3, _4, _5, _6, _7)															      _1; _2; _3; _4; _5; _6; _7;
#define Z_MEMBERIZE_8( _1, _2, _3, _4, _5, _6, _7, _8)															      _1; _2; _3; _4; _5; _6; _7; _8;
#define Z_MEMBERIZE_9( _1, _2, _3, _4, _5, _6, _7, _8, _9)														      _1; _2; _3; _4; _5; _6; _7; _8; _9;
#define Z_MEMBERIZE_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10)														      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10;
#define Z_MEMBERIZE_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11)													      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11;
#define Z_MEMBERIZE_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12)												      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12;
#define Z_MEMBERIZE_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13)												      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13;
#define Z_MEMBERIZE_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14)											      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14;
#define Z_MEMBERIZE_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15)										      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15;
#define Z_MEMBERIZE_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16)										      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16;
#define Z_MEMBERIZE_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17)									      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17;
#define Z_MEMBERIZE_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18)									      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18;
#define Z_MEMBERIZE_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19)								      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19;
#define Z_MEMBERIZE_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20)							      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20;
#define Z_MEMBERIZE_21(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21)							      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21;
#define Z_MEMBERIZE_22(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22)						      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22;
#define Z_MEMBERIZE_23(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23)					      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23;
#define Z_MEMBERIZE_24(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24)					      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24;
#define Z_MEMBERIZE_25(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25)				      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25;
#define Z_MEMBERIZE_26(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26)				      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26;
#define Z_MEMBERIZE_27(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27)			      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27;
#define Z_MEMBERIZE_28(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28)		      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27; _28;
#define Z_MEMBERIZE_29(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29)		      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27; _28; _29;
#define Z_MEMBERIZE_30(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30)	      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27; _28; _29; _30;
#define Z_MEMBERIZE_31(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31)      _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27; _28; _29; _30; _31;
#define Z_MEMBERIZE_32(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32) _1; _2; _3; _4; _5; _6; _7; _8; _9; _10; _11; _12; _13; _14; _15; _16; _17; _18; _19; _20; _21; _22; _23; _24; _25; _26; _27; _28; _29; _30; _31; _32;

#define Z_MEMBERIZE_REVERSED_2( _1, _2)																																				      _2; _1;
#define Z_MEMBERIZE_REVERSED_3( _1, _2, _3)																																			  _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_4( _1, _2, _3, _4)																																		      _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_5( _1, _2, _3, _4, _5)																																	  _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_6( _1, _2, _3, _4, _5, _6)																																      _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_7( _1, _2, _3, _4, _5, _6, _7)																															  _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_8( _1, _2, _3, _4, _5, _6, _7, _8)																														      _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_9( _1, _2, _3, _4, _5, _6, _7, _8, _9)																													  _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_10(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10)																											     _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_11(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11)																											_11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_12(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12)																									   _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_13(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13)																								      _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_14(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14)																							 _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_15(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15)																					    _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_16(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16)																				       _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_17(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17)																			  _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_18(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18)																	     _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_19(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19)																	_19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_20(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20)															   _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_21(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21)														      _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_22(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22)													 _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_23(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23)											    _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_24(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24)										       _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_25(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25)									  _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_26(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26)							     _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_27(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27)							_27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_28(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28)					   _28; _27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_29(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29)				      _29; _28; _27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_30(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30)			 _30; _29; _28; _27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_31(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31)	    _31; _30; _29; _28; _27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;
#define Z_MEMBERIZE_REVERSED_32(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32) _32; _31; _30; _29; _28; _27; _26; _25; _24; _23; _22; _21; _20; _19; _18; _17; _16; _15; _14; _13; _12; _11; _10; _9; _8; _7; _6; _5; _4; _3; _2; _1;

#define Z_BIT_FIELD_MEMBERS(bits, member_count)		   \
	Z_APPEND_TERNARY(Z_COMPILER_BIT_FIELD_ORDER(bits)) \
		(Z_MEMBERIZE_, REVERSED_##member_count, member_count)

#endif /* Z_macros_bit_field_H */