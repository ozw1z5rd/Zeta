/* Zeta API - Z/types/integral.h
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2024 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_types_integral_H
#define Z_types_integral_H

#include <Z/constants/boolean.h>
#include <Z/inspection/data model.h>
#include <Z/macros/casting.h>
#include <Z/macros/T.h>

/* MARK: - Fixed-width integral types */

#if Z_DATA_MODEL_HAS_TYPE(UINT8)
	typedef Z_DATA_MODEL_TYPE(UINT8)  zuint8;
#	define Z_UINT8			  Z_DATA_MODEL_LITERAL	  (UINT8)
#	define Z_UINT8_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT8)
#	define Z_UINT8_FIXED_FUNDAMENTAL  Z_FUNDAMENTAL_UINT8
#	define Z_UINT8_WIDTH		  8
#	define Z_UINT8_MAXIMUM_		  255
#	define Z_UINT8_MAXIMUM		  Z_UINT8(Z_UINT8_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT8)
	typedef Z_DATA_MODEL_TYPE(SINT8)  zsint8;
#	define Z_SINT8			  Z_DATA_MODEL_LITERAL	  (SINT8)
#	define Z_SINT8_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT8)
#	define Z_SINT8_FIXED_FUNDAMENTAL  Z_FUNDAMENTAL_SINT8
#	define Z_SINT8_WIDTH		  8
#	define Z_SINT8_MAXIMUM_		  127
#	define Z_SINT8_MAXIMUM		  Z_SINT8(Z_SINT8_MAXIMUM_)
#	define Z_SINT8_MINIMUM		  (-Z_SINT8_MAXIMUM - Z_SINT8(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT16)
	typedef Z_DATA_MODEL_TYPE(UINT16) zuint16;
#	define Z_UINT16			  Z_DATA_MODEL_LITERAL	  (UINT16)
#	define Z_UINT16_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT16)
#	define Z_UINT16_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT16
#	define Z_UINT16_WIDTH		  16
#	define Z_UINT16_MAXIMUM_	  65535
#	define Z_UINT16_MAXIMUM		  Z_UINT16(Z_UINT16_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT16)
	typedef Z_DATA_MODEL_TYPE(SINT16) zsint16;
#	define Z_SINT16			  Z_DATA_MODEL_LITERAL	  (SINT16)
#	define Z_SINT16_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT16)
#	define Z_SINT16_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT16
#	define Z_SINT16_WIDTH		  16
#	define Z_SINT16_MAXIMUM_	  32767
#	define Z_SINT16_MAXIMUM		  Z_SINT16(Z_SINT16_MAXIMUM_)
#	define Z_SINT16_MINIMUM		  (-Z_SINT16_MAXIMUM - Z_SINT16(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT24)
	typedef Z_DATA_MODEL_TYPE(UINT24) zuint24;
#	define Z_UINT24			  Z_DATA_MODEL_LITERAL	  (UINT24)
#	define Z_UINT24_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT24)
#	define Z_UINT24_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT24
#	define Z_UINT24_WIDTH		  24
#	define Z_UINT24_MAXIMUM_	  16777215
#	define Z_UINT24_MAXIMUM		  Z_UINT24(Z_UINT24_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT24)
	typedef Z_DATA_MODEL_TYPE(SINT24) zsint24;
#	define Z_SINT24			  Z_DATA_MODEL_LITERAL	  (SINT24)
#	define Z_SINT24_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT24)
#	define Z_SINT24_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT24
#	define Z_SINT24_WIDTH		  24
#	define Z_SINT24_MAXIMUM_	  8388607
#	define Z_SINT24_MAXIMUM		  Z_SINT24(Z_SINT24_MAXIMUM_)
#	define Z_SINT24_MINIMUM		  (-Z_SINT24_MAXIMUM - Z_SINT24(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT32)
	typedef Z_DATA_MODEL_TYPE(UINT32) zuint32;
#	define Z_UINT32			  Z_DATA_MODEL_LITERAL	  (UINT32)
#	define Z_UINT32_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT32)
#	define Z_UINT32_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT32
#	define Z_UINT32_WIDTH		  32
#	define Z_UINT32_MAXIMUM_	  4294967295
#	define Z_UINT32_MAXIMUM		  Z_UINT32(Z_UINT32_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT32)
	typedef Z_DATA_MODEL_TYPE(SINT32) zsint32;
#	define Z_SINT32			  Z_DATA_MODEL_LITERAL	  (SINT32)
#	define Z_SINT32_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT32)
#	define Z_SINT32_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT32
#	define Z_SINT32_WIDTH		  32
#	define Z_SINT32_MAXIMUM_	  2147483647
#	define Z_SINT32_MAXIMUM		  Z_SINT32(Z_SINT32_MAXIMUM_)
#	define Z_SINT32_MINIMUM		  (-Z_SINT32_MAXIMUM - Z_SINT32(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT40)
	typedef Z_DATA_MODEL_TYPE(UINT40) zuint40;
#	define Z_UINT40			  Z_DATA_MODEL_LITERAL	  (UINT40)
#	define Z_UINT40_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT40)
#	define Z_UINT40_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT40
#	define Z_UINT40_WIDTH		  40
#	define Z_UINT40_MAXIMUM_	  1099511627775
#	define Z_UINT40_MAXIMUM		  Z_UINT40(Z_UINT40_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT40)
	typedef Z_DATA_MODEL_TYPE(SINT40) zsint40;
#	define Z_SINT40			  Z_DATA_MODEL_LITERAL	  (SINT40)
#	define Z_SINT40_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT40)
#	define Z_SINT40_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT40
#	define Z_SINT40_WIDTH		  40
#	define Z_SINT40_MAXIMUM_	  549755813887
#	define Z_SINT40_MAXIMUM		  Z_SINT40(Z_SINT40_MAXIMUM_)
#	define Z_SINT40_MINIMUM		  (-Z_SINT40_MAXIMUM - Z_SINT40(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT48)
	typedef Z_DATA_MODEL_TYPE(UINT48) zuint48;
#	define Z_UINT48			  Z_DATA_MODEL_LITERAL	  (UINT48)
#	define Z_UINT48_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT48)
#	define Z_UINT48_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT48
#	define Z_UINT48_WIDTH		  48
#	define Z_UINT48_MAXIMUM_	  281474976710655
#	define Z_UINT48_MAXIMUM		  Z_UINT48(Z_UINT48_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT48)
	typedef Z_DATA_MODEL_TYPE(SINT48) zsint48;
#	define Z_SINT48			  Z_DATA_MODEL_LITERAL	  (SINT48)
#	define Z_SINT48_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT48)
#	define Z_SINT48_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT48
#	define Z_SINT48_WIDTH		  48
#	define Z_SINT48_MAXIMUM_	  140737488355327
#	define Z_SINT48_MAXIMUM		  Z_SINT48(Z_SINT48_MAXIMUM_)
#	define Z_SINT48_MINIMUM		  (-Z_SINT48_MAXIMUM - Z_SINT48(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT56)
	typedef Z_DATA_MODEL_TYPE(UINT56) zuint56;
#	define Z_UINT56			  Z_DATA_MODEL_LITERAL	  (UINT56)
#	define Z_UINT56_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT56)
#	define Z_UINT56_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT56
#	define Z_UINT56_WIDTH		  56
#	define Z_UINT56_MAXIMUM_	  72057594037927935
#	define Z_UINT56_MAXIMUM		  Z_UINT56(Z_UINT56_MAXIMUM_)
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT56)
	typedef Z_DATA_MODEL_TYPE(SINT56) zsint56;
#	define Z_SINT56			  Z_DATA_MODEL_LITERAL	  (SINT56)
#	define Z_SINT56_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT56)
#	define Z_SINT56_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT56
#	define Z_SINT56_WIDTH		  56
#	define Z_SINT56_MAXIMUM_	  36028797018963967
#	define Z_SINT56_MAXIMUM		  Z_SINT56(Z_SINT56_MAXIMUM_)
#	define Z_SINT56_MINIMUM		  (-Z_SINT56_MAXIMUM - Z_SINT56(1))
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT64)
	typedef Z_DATA_MODEL_TYPE(UINT64) zuint64;
#	define Z_UINT64			  Z_DATA_MODEL_LITERAL	  (UINT64)
#	define Z_UINT64_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(UINT64)
#	define Z_UINT64_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT64
#	define Z_UINT64_WIDTH		  64
#	define Z_UINT64_MAXIMUM_	  18446744073709551615

#	if Z_DATA_MODEL_HAS_LITERAL(UINT64)
#		define Z_UINT64_MAXIMUM Z_UINT64(Z_UINT64_MAXIMUM_)
#	else
#		define Z_UINT64_MAXIMUM (~Z_CAST(zuint64)(0))
#	endif
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT64)
	typedef Z_DATA_MODEL_TYPE(SINT64) zsint64;
#	define Z_SINT64			  Z_DATA_MODEL_LITERAL	  (SINT64)
#	define Z_SINT64_FUNDAMENTAL	  Z_DATA_MODEL_FUNDAMENTAL(SINT64)
#	define Z_SINT64_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT64
#	define Z_SINT64_WIDTH		  64
#	define Z_SINT64_MAXIMUM_	  9223372036854775807

#	if Z_DATA_MODEL_HAS_LITERAL(SINT64)
#		define Z_SINT64_MAXIMUM Z_SINT64(Z_SINT64_MAXIMUM_)
#		define Z_SINT64_MINIMUM (-Z_SINT64_MAXIMUM - Z_SINT64(1))
#	else
#		define Z_SINT64_MAXIMUM (-(Z_SINT64_MINIMUM + Z_CAST(zsint64)(1)))

#		define Z_SINT64_MINIMUM (				    \
			Z_CAST(zsint64)(0x1000) * Z_CAST(zsint64)(0x1000) * \
			Z_CAST(zsint64)(0x1000) * Z_CAST(zsint64)(0x1000) * \
			Z_CAST(zsint64)(0x1000) * Z_CAST(zsint64)(-8))
#	endif
#endif

#if Z_DATA_MODEL_HAS_TYPE(UINT128)
	typedef Z_DATA_MODEL_TYPE(UINT128) zuint128;
#	define Z_UINT128		   Z_DATA_MODEL_LITERAL	   (UINT128)
#	define Z_UINT128_FUNDAMENTAL	   Z_DATA_MODEL_FUNDAMENTAL(UINT128)
#	define Z_UINT128_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_UINT128
#	define Z_UINT128_WIDTH		   128
#	define Z_UINT128_MAXIMUM_	   340282366920938463463374607431768211455

#	if Z_DATA_MODEL_HAS_LITERAL(UINT128)
#		define Z_UINT128_MAXIMUM Z_UINT128(Z_UINT128_MAXIMUM_)
#	else
#		define Z_UINT128_MAXIMUM (~Z_CAST(zuint128)(0))
#	endif
#endif

#if Z_DATA_MODEL_HAS_TYPE(SINT128)
	typedef Z_DATA_MODEL_TYPE(SINT128) zsint128;
#	define Z_SINT128		   Z_DATA_MODEL_LITERAL	   (SINT128)
#	define Z_SINT128_FUNDAMENTAL	   Z_DATA_MODEL_FUNDAMENTAL(SINT128)
#	define Z_SINT128_FIXED_FUNDAMENTAL Z_FUNDAMENTAL_SINT128
#	define Z_SINT128_WIDTH		   128
#	define Z_SINT128_MAXIMUM_	   170141183460469231731687303715884105727

#	if Z_DATA_MODEL_HAS_LITERAL(SINT128)
#		define Z_SINT128_MAXIMUM Z_SINT128(Z_SINT128_MAXIMUM_)
#		define Z_SINT128_MINIMUM (-Z_SINT128_MAXIMUM - Z_SINT128(1))
#	else
#		define Z_SINT128_MAXIMUM (-(Z_SINT128_MINIMUM + Z_CAST(zsint128)(1)))

#		define Z_SINT128_MINIMUM (				      \
			Z_CAST(zsint128)(0x1000) * Z_CAST(zsint128)(0x1000) * \
			Z_CAST(zsint128)(0x1000) * Z_CAST(zsint128)(0x1000) * \
			Z_CAST(zsint128)(0x1000) * Z_CAST(zsint128)(0x1000) * \
			Z_CAST(zsint128)(0x1000) * Z_CAST(zsint128)(0x1000) * \
			Z_CAST(zsint128)(0x1000) * Z_CAST(zsint128)(0x1000) * \
			Z_CAST(zsint128)(-0x80))
#	endif
#endif

/* MARK: - Selection macros */

#define Z_INTEGRAL_T_LITERAL(	      T) Z_APPEND_TYPE(Z_##T##_FIXED_FUNDAMENTAL)(Z_)
#define Z_INTEGRAL_T_FUNDAMENTAL(     T) Z_INSERT_TYPE(Z_##T##_FIXED_FUNDAMENTAL)(Z_, _FUNDAMENTAL)
#define Z_INTEGRAL_T_MAXIMUM(	      T) Z_##T(Z_INSERT_TYPE(Z_##T##_FIXED_FUNDAMENTAL)(Z_, _MAXIMUM_))
#define Z_NATURAL_T_TYPE(	      T) Z_JOIN_2(Z_APPEND_NUMBER_, Z_##T##_WIDTH)(zuint)
#define Z_NATURAL_T_FIXED_FUNDAMENTAL(T) Z_JOIN_2(Z_INSERT_NUMBER_, Z_##T##_WIDTH)(Z_UINT, _FIXED_FUNDAMENTAL)
#define Z_INTEGER_T_TYPE(	      T) Z_JOIN_2(Z_APPEND_NUMBER_, Z_##T##_WIDTH)(zsint)
#define Z_INTEGER_T_FIXED_FUNDAMENTAL(T) Z_JOIN_2(Z_INSERT_NUMBER_, Z_##T##_WIDTH)(Z_SINT, _FIXED_FUNDAMENTAL)

/* MARK: - Integral types with at least a certain width */

#if defined(Z_UINT8)
#	define Z_UINT_LEAST8_WIDTH 8
#elif defined(Z_UINT16)
#	define Z_UINT_LEAST8_WIDTH 16
#elif defined(Z_UINT24)
#	define Z_UINT_LEAST8_WIDTH 24
#elif defined(Z_UINT32)
#	define Z_UINT_LEAST8_WIDTH 32
#elif defined(Z_UINT40)
#	define Z_UINT_LEAST8_WIDTH 40
#elif defined(Z_UINT48)
#	define Z_UINT_LEAST8_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST8_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST8_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST8_WIDTH 128
#endif

typedef Z_NATURAL_T_TYPE(UINT_LEAST8)	zuint_least8;
#define Z_UINT_LEAST8			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST8)
#define Z_UINT_LEAST8_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST8)
#define Z_UINT_LEAST8_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST8)
#define Z_UINT_LEAST8_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST8)

#if defined(Z_SINT8)
#	define Z_SINT_LEAST8_WIDTH 8
#elif defined(Z_UINT16)
#	define Z_SINT_LEAST8_WIDTH 16
#elif defined(Z_SINT24)
#	define Z_SINT_LEAST8_WIDTH 24
#elif defined(Z_SINT32)
#	define Z_SINT_LEAST8_WIDTH 32
#elif defined(Z_SINT40)
#	define Z_SINT_LEAST8_WIDTH 40
#elif defined(Z_SINT48)
#	define Z_SINT_LEAST8_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST8_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST8_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST8_WIDTH 128
#endif

typedef Z_INTEGER_T_TYPE(SINT_LEAST8)	zsint_least8;
#define Z_SINT_LEAST8			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST8)
#define Z_SINT_LEAST8_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST8)
#define Z_SINT_LEAST8_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST8)
#define Z_SINT_LEAST8_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST8)
#define Z_SINT_LEAST8_MINIMUM		(-Z_SINT_LEAST8_MAXIMUM - Z_SINT_LEAST8(1))

#if defined(Z_UINT16)
#	define Z_UINT_LEAST16_WIDTH 16
#elif defined(Z_UINT24)
#	define Z_UINT_LEAST16_WIDTH 24
#elif defined(Z_UINT32)
#	define Z_UINT_LEAST16_WIDTH 32
#elif defined(Z_UINT40)
#	define Z_UINT_LEAST16_WIDTH 40
#elif defined(Z_UINT48)
#	define Z_UINT_LEAST16_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST16_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST16_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST16_WIDTH 128
#endif

#ifdef Z_UINT_LEAST16_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST16)	zuint_least16;
#	define Z_UINT_LEAST16			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST16)
#	define Z_UINT_LEAST16_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST16)
#	define Z_UINT_LEAST16_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST16)
#	define Z_UINT_LEAST16_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST16)
#endif

#if defined(Z_SINT16)
#	define Z_SINT_LEAST16_WIDTH 16
#elif defined(Z_SINT24)
#	define Z_SINT_LEAST16_WIDTH 24
#elif defined(Z_SINT32)
#	define Z_SINT_LEAST16_WIDTH 32
#elif defined(Z_SINT40)
#	define Z_SINT_LEAST16_WIDTH 40
#elif defined(Z_SINT48)
#	define Z_SINT_LEAST16_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST16_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST16_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST16_WIDTH 128
#endif

#ifdef Z_SINT_LEAST16_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST16)	zsint_least16;
#	define Z_SINT_LEAST16			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST16)
#	define Z_SINT_LEAST16_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST16)
#	define Z_SINT_LEAST16_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST16)
#	define Z_SINT_LEAST16_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST16)
#	define Z_SINT_LEAST16_MINIMUM		(-Z_SINT_LEAST16_MAXIMUM - Z_SINT_LEAST16(1))
#endif

#if defined(Z_UINT24)
#	define Z_UINT_LEAST24_WIDTH 24
#elif defined(Z_UINT32)
#	define Z_UINT_LEAST24_WIDTH 32
#elif defined(Z_UINT40)
#	define Z_UINT_LEAST24_WIDTH 40
#elif defined(Z_UINT48)
#	define Z_UINT_LEAST24_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST24_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST24_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST24_WIDTH 128
#endif

#ifdef Z_UINT_LEAST24_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST24)	zuint_least24;
#	define Z_UINT_LEAST24			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST24)
#	define Z_UINT_LEAST24_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST24)
#	define Z_UINT_LEAST24_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST24)
#	define Z_UINT_LEAST24_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST24)
#endif

#if defined(Z_SINT24)
#	define Z_SINT_LEAST24_WIDTH 24
#elif defined(Z_SINT32)
#	define Z_SINT_LEAST24_WIDTH 32
#elif defined(Z_SINT40)
#	define Z_SINT_LEAST24_WIDTH 40
#elif defined(Z_SINT48)
#	define Z_SINT_LEAST24_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST24_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST24_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST24_WIDTH 128
#endif

#ifdef Z_SINT_LEAST24_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST24)	zsint_least24;
#	define Z_SINT_LEAST24			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST24)
#	define Z_SINT_LEAST24_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST24)
#	define Z_SINT_LEAST24_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST24)
#	define Z_SINT_LEAST24_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST24)
#	define Z_SINT_LEAST24_MINIMUM		(-Z_SINT_LEAST24_MAXIMUM - Z_SINT_LEAST24(1))
#endif

#if defined(Z_UINT32)
#	define Z_UINT_LEAST32_WIDTH 32
#elif defined(Z_UINT40)
#	define Z_UINT_LEAST32_WIDTH 40
#elif defined(Z_UINT48)
#	define Z_UINT_LEAST32_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST32_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST32_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST32_WIDTH 128
#endif

#ifdef Z_UINT_LEAST32_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST32)	zuint_least32;
#	define Z_UINT_LEAST32			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST32)
#	define Z_UINT_LEAST32_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST32)
#	define Z_UINT_LEAST32_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST32)
#	define Z_UINT_LEAST32_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST32)
#endif

#if defined(Z_SINT32)
#	define Z_SINT_LEAST32_WIDTH 32
#elif defined(Z_SINT40)
#	define Z_SINT_LEAST32_WIDTH 40
#elif defined(Z_SINT48)
#	define Z_SINT_LEAST32_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST32_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST32_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST32_WIDTH 128
#endif

#ifdef Z_SINT_LEAST32_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST32)	zsint_least32;
#	define Z_SINT_LEAST32			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST32)
#	define Z_SINT_LEAST32_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST32)
#	define Z_SINT_LEAST32_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST32)
#	define Z_SINT_LEAST32_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST32)
#	define Z_SINT_LEAST32_MINIMUM		(-Z_SINT_LEAST32_MAXIMUM - Z_SINT_LEAST32(1))
#endif

#if defined(Z_UINT40)
#	define Z_UINT_LEAST40_WIDTH 40
#elif defined(Z_UINT48)
#	define Z_UINT_LEAST40_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST40_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST40_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST40_WIDTH 128
#endif

#ifdef Z_UINT_LEAST40_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST40)	zuint_least40;
#	define Z_UINT_LEAST40			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST40)
#	define Z_UINT_LEAST40_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST40)
#	define Z_UINT_LEAST40_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST40)
#	define Z_UINT_LEAST40_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST40)
#endif

#if defined(Z_SINT40)
#	define Z_SINT_LEAST40_WIDTH 40
#elif defined(Z_SINT48)
#	define Z_SINT_LEAST40_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST40_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST40_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST40_WIDTH 128
#endif

#ifdef Z_SINT_LEAST40_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST40)	zsint_least40;
#	define Z_SINT_LEAST40			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST40)
#	define Z_SINT_LEAST40_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST40)
#	define Z_SINT_LEAST40_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST40)
#	define Z_SINT_LEAST40_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST40)
#	define Z_SINT_LEAST40_MINIMUM		(-Z_SINT_LEAST40_MAXIMUM - Z_SINT_LEAST40(1))
#endif

#if defined(Z_UINT48)
#	define Z_UINT_LEAST48_WIDTH 48
#elif defined(Z_UINT56)
#	define Z_UINT_LEAST48_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST48_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST48_WIDTH 128
#endif

#ifdef Z_UINT_LEAST48_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST48)	zuint_least48;
#	define Z_UINT_LEAST48			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST48)
#	define Z_UINT_LEAST48_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST48)
#	define Z_UINT_LEAST48_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST48)
#	define Z_UINT_LEAST48_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST48)
#endif

#if defined(Z_SINT48)
#	define Z_SINT_LEAST48_WIDTH 48
#elif defined(Z_SINT56)
#	define Z_SINT_LEAST48_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST48_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST48_WIDTH 128
#endif

#ifdef Z_SINT_LEAST48_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST48)	zsint_least48;
#	define Z_SINT_LEAST48			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST48)
#	define Z_SINT_LEAST48_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST48)
#	define Z_SINT_LEAST48_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST48)
#	define Z_SINT_LEAST48_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST48)
#	define Z_SINT_LEAST48_MINIMUM		(-Z_SINT_LEAST48_MAXIMUM - Z_SINT_LEAST48(1))
#endif

#if defined(Z_UINT56)
#	define Z_UINT_LEAST56_WIDTH 56
#elif defined(Z_UINT64)
#	define Z_UINT_LEAST56_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST56_WIDTH 128
#endif

#ifdef Z_UINT_LEAST56_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST56)	zuint_least56;
#	define Z_UINT_LEAST56			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST56)
#	define Z_UINT_LEAST56_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST56)
#	define Z_UINT_LEAST56_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST56)
#	define Z_UINT_LEAST56_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST56)
#endif

#if defined(Z_SINT56)
#	define Z_SINT_LEAST56_WIDTH 56
#elif defined(Z_SINT64)
#	define Z_SINT_LEAST56_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST56_WIDTH 128
#endif

#ifdef Z_SINT_LEAST56_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST56)	zsint_least56;
#	define Z_SINT_LEAST56			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST56)
#	define Z_SINT_LEAST56_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST56)
#	define Z_SINT_LEAST56_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST56)
#	define Z_SINT_LEAST56_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST56)
#	define Z_SINT_LEAST56_MINIMUM		(-Z_SINT_LEAST56_MAXIMUM - Z_SINT_LEAST56(1))
#endif

#if defined(Z_UINT64)
#	define Z_UINT_LEAST64_WIDTH 64
#elif defined(Z_UINT128)
#	define Z_UINT_LEAST64_WIDTH 128
#endif

#ifdef Z_UINT_LEAST64_WIDTH
	typedef Z_NATURAL_T_TYPE(UINT_LEAST64)	zuint_least64;
#	define Z_UINT_LEAST64			Z_INTEGRAL_T_LITERAL	     (UINT_LEAST64)
#	define Z_UINT_LEAST64_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (UINT_LEAST64)
#	define Z_UINT_LEAST64_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT_LEAST64)
#	define Z_UINT_LEAST64_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (UINT_LEAST64)
#endif

#if defined(Z_SINT64)
#	define Z_SINT_LEAST64_WIDTH 64
#elif defined(Z_SINT128)
#	define Z_SINT_LEAST64_WIDTH 128
#endif

#ifdef Z_SINT_LEAST64_WIDTH
	typedef Z_INTEGER_T_TYPE(SINT_LEAST64)	zsint_least64;
#	define Z_SINT_LEAST64			Z_INTEGRAL_T_LITERAL	     (SINT_LEAST64)
#	define Z_SINT_LEAST64_FUNDAMENTAL	Z_INTEGRAL_T_FUNDAMENTAL     (SINT_LEAST64)
#	define Z_SINT_LEAST64_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT_LEAST64)
#	define Z_SINT_LEAST64_MAXIMUM		Z_INTEGRAL_T_MAXIMUM	     (SINT_LEAST64)
#	define Z_SINT_LEAST64_MINIMUM		(-Z_SINT_LEAST64_MAXIMUM - Z_SINT_LEAST64(1))
#endif

/* MARK: - Standard integral types */

#if '\0' - '\1' > '\0'
#	define Z_CHAR_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(CHAR)
#	define Z_CHAR_IS_SIGNED		0
#	define Z_CHAR_MINIMUM		0
#else
#	define Z_CHAR_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(CHAR)
#	define Z_CHAR_IS_SIGNED		1
#	define Z_CHAR_MINIMUM		(-Z_CHAR_MAXIMUM - 1)
#endif

typedef char			   zchar;
#define Z_CHAR			   Z_SAME
#define Z_CHAR_FUNDAMENTAL	   Z_FUNDAMENTAL_CHAR
#define Z_CHAR_WIDTH		   Z_DATA_MODEL_WIDTH  (CHAR)
#define Z_CHAR_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM(CHAR)

typedef unsigned char		   zuchar;
#define Z_UCHAR			   Z_SUFFIX_U
#define Z_UCHAR_FUNDAMENTAL	   Z_FUNDAMENTAL_UCHAR
#define Z_UCHAR_FIXED_FUNDAMENTAL  Z_NATURAL_T_FIXED_FUNDAMENTAL(UCHAR)
#define Z_UCHAR_WIDTH		   Z_DATA_MODEL_WIDTH		( CHAR)
#define Z_UCHAR_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(UCHAR)

typedef signed char		   zschar;
#define Z_SCHAR			   Z_SAME
#define Z_SCHAR_FUNDAMENTAL	   Z_FUNDAMENTAL_SCHAR
#define Z_SCHAR_FIXED_FUNDAMENTAL  Z_INTEGER_T_FIXED_FUNDAMENTAL(SCHAR)
#define Z_SCHAR_WIDTH		   Z_DATA_MODEL_WIDTH		( CHAR)
#define Z_SCHAR_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(SCHAR)
#define Z_SCHAR_MINIMUM		   (-Z_SCHAR_MAXIMUM - 1)

typedef unsigned short int	   zushort;
#define Z_USHORT		   Z_SUFFIX_U
#define Z_USHORT_FUNDAMENTAL	   Z_FUNDAMENTAL_USHORT
#define Z_USHORT_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(USHORT)
#define Z_USHORT_WIDTH		   Z_DATA_MODEL_WIDTH		( SHORT)
#define Z_USHORT_MAXIMUM	   Z_INTEGRAL_T_MAXIMUM		(USHORT)

typedef short int		   zsshort;
#define Z_SSHORT		   Z_SAME
#define Z_SSHORT_FUNDAMENTAL	   Z_FUNDAMENTAL_SSHORT
#define Z_SSHORT_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SSHORT)
#define Z_SSHORT_WIDTH		   Z_DATA_MODEL_WIDTH		( SHORT)
#define Z_SSHORT_MAXIMUM	   Z_INTEGRAL_T_MAXIMUM		(SSHORT)
#define Z_SSHORT_MINIMUM	   (-Z_SSHORT_MAXIMUM - 1)

typedef unsigned int		   zuint;
#define Z_UINT			   Z_SUFFIX_U
#define Z_UINT_FUNDAMENTAL	   Z_FUNDAMENTAL_UINT
#define Z_UINT_FIXED_FUNDAMENTAL   Z_NATURAL_T_FIXED_FUNDAMENTAL(UINT)
#define Z_UINT_WIDTH		   Z_DATA_MODEL_WIDTH		( INT)
#define Z_UINT_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(UINT)

typedef int			   zsint;
#define Z_SINT			   Z_SAME
#define Z_SINT_FUNDAMENTAL	   Z_FUNDAMENTAL_SINT
#define Z_SINT_FIXED_FUNDAMENTAL   Z_INTEGER_T_FIXED_FUNDAMENTAL(SINT)
#define Z_SINT_WIDTH		   Z_DATA_MODEL_WIDTH		( INT)
#define Z_SINT_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(SINT)
#define Z_SINT_MINIMUM		   (-Z_SINT_MAXIMUM - 1)

typedef unsigned long int	   zulong;
#define Z_ULONG			   Z_SUFFIX_UL
#define Z_ULONG_FUNDAMENTAL	   Z_FUNDAMENTAL_ULONG
#define Z_ULONG_FIXED_FUNDAMENTAL  Z_NATURAL_T_FIXED_FUNDAMENTAL(ULONG)
#define Z_ULONG_WIDTH		   Z_DATA_MODEL_WIDTH		( LONG)
#define Z_ULONG_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(ULONG)

typedef long int		   zslong;
#define Z_SLONG			   Z_SUFFIX_L
#define Z_SLONG_FUNDAMENTAL	   Z_FUNDAMENTAL_SLONG
#define Z_SLONG_FIXED_FUNDAMENTAL  Z_INTEGER_T_FIXED_FUNDAMENTAL(SLONG)
#define Z_SLONG_WIDTH		   Z_DATA_MODEL_WIDTH		( LONG)
#define Z_SLONG_MAXIMUM		   Z_INTEGRAL_T_MAXIMUM		(SLONG)
#define Z_SLONG_MINIMUM		   (-Z_SLONG_MAXIMUM - 1L)

#if Z_DIALECT_HAS_TYPE(C99, LONG_LONG) || Z_DIALECT_HAS_TYPE(CPP11, LONG_LONG)
	typedef unsigned long long int	  zullong;
#	define Z_ULLONG			  Z_SUFFIX_ULL
#	define Z_ULLONG_FUNDAMENTAL	  Z_FUNDAMENTAL_ULLONG
#	define Z_ULLONG_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(ULLONG)
#	define Z_ULLONG_WIDTH		  Z_DATA_MODEL_WIDTH	       ( LLONG)
#	define Z_ULLONG_MAXIMUM		  Z_INTEGRAL_T_MAXIMUM	       (ULLONG)

	typedef long long int		  zsllong;
#	define Z_SLLONG			  Z_SUFFIX_LL
#	define Z_SLLONG_FUNDAMENTAL	  Z_FUNDAMENTAL_SLLONG
#	define Z_SLLONG_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SLLONG)
#	define Z_SLLONG_WIDTH		  Z_DATA_MODEL_WIDTH	       ( LLONG)
#	define Z_SLLONG_MAXIMUM		  Z_INTEGRAL_T_MAXIMUM	       (SLLONG)
#	define Z_SLLONG_MINIMUM		  (-Z_SLLONG_MAXIMUM - 1LL)

#	define Z_LLONG
#endif

#if Z_DIALECT_HAS_TYPE(CPP98, BOOL)
	typedef bool zbool;

#elif Z_DIALECT_HAS_TYPE(C99, BOOL)
	typedef _Bool zbool;
#endif

#if Z_DIALECT_HAS_TYPE(C99, BOOL) || Z_DIALECT_HAS_TYPE(CPP98, BOOL)
#	define Z_BOOL			Z_SAME
#	define Z_BOOL_FUNDAMENTAL	Z_FUNDAMENTAL_BOOL
#	define Z_BOOL_FIXED_FUNDAMENTAL Z_UCHAR_FIXED_FUNDAMENTAL
#	define Z_BOOL_WIDTH		Z_UCHAR_WIDTH
#endif

/* MARK: - Object size integral types */

#define Z_USIZE_WIDTH		  Z_DATA_MODEL_WIDTH(SIZE)
#define Z_USIZE_BITS		  Z_USIZE_WIDTH /* for backward compatibility */

typedef Z_NATURAL_T_TYPE(USIZE)	  zusize;
#define Z_USIZE			  Z_INTEGRAL_T_LITERAL	       (USIZE)
#define Z_USIZE_FUNDAMENTAL	  Z_INTEGRAL_T_FUNDAMENTAL     (USIZE)
#define Z_USIZE_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(USIZE)
#define Z_USIZE_MAXIMUM		  Z_INTEGRAL_T_MAXIMUM	       (USIZE)

#define Z_SSIZE_WIDTH		  Z_DATA_MODEL_WIDTH(SIZE)

typedef Z_INTEGER_T_TYPE(SSIZE)	  zssize;
#define Z_SSIZE			  Z_INTEGRAL_T_LITERAL	       (SSIZE)
#define Z_SSIZE_FUNDAMENTAL	  Z_INTEGRAL_T_FUNDAMENTAL     (SSIZE)
#define Z_SSIZE_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SSIZE)
#define Z_SSIZE_MAXIMUM		  Z_INTEGRAL_T_MAXIMUM	       (SSIZE)
#define Z_SSIZE_MINIMUM		  (-Z_SSIZE_MAXIMUM - Z_SSIZE(1))

/* MARK: - Maximum size integral types */

#if defined(Z_UINT128)
#	define Z_UINTMAX_WIDTH 128
#elif defined(Z_UINT64)
#	define Z_UINTMAX_WIDTH 64
#elif defined(Z_ULLONG)
#	define Z_UINTMAX_WIDTH Z_ULLONG_WIDTH
#else
#	define Z_UINTMAX_WIDTH Z_ULONG_WIDTH
#endif

typedef Z_NATURAL_T_TYPE(UINTMAX)   zuintmax;
#define Z_UINTMAX		    Z_INTEGRAL_T_LITERAL	 (UINTMAX)
#define Z_UINTMAX_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (UINTMAX)
#define Z_UINTMAX_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINTMAX)
#define Z_UINTMAX_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (UINTMAX)

#if defined(Z_SINT128)
#	define Z_SINTMAX_WIDTH 128
#elif defined(Z_SINT64)
#	define Z_SINTMAX_WIDTH 64
#elif defined(Z_SLLONG)
#	define Z_SINTMAX_WIDTH Z_SLLONG_WIDTH
#else
#	define Z_SINTMAX_WIDTH Z_SLONG_WIDTH
#endif

typedef Z_INTEGER_T_TYPE(SINTMAX)   zsintmax;
#define Z_SINTMAX		    Z_INTEGRAL_T_LITERAL	 (SINTMAX)
#define Z_SINTMAX_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (SINTMAX)
#define Z_SINTMAX_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINTMAX)
#define Z_SINTMAX_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (SINTMAX)
#define Z_SINTMAX_MINIMUM	    (-Z_SINTMAX_MAXIMUM - Z_SINTMAX(1))

#if Z_UINTMAX_WIDTH >= Z_SINTMAX_WIDTH
	typedef zuintmax		  zintmax;
#	define Z_INTMAX			  Z_UINTMAX
#	define Z_INTMAX_FUNDAMENTAL	  Z_UINTMAX_FUNDAMENTAL
#	define Z_INTMAX_FIXED_FUNDAMENTAL Z_UINTMAX_FIXED_FUNDAMENTAL
#	define Z_INTMAX_WIDTH		  Z_UINTMAX_WIDTH
#	define Z_INTMAX_MAXIMUM		  Z_UINTMAX_MAXIMUM
#	define Z_INTMAX_MINIMUM		  Z_UINTMAX(0)
#else
	typedef zsintmax		  zintmax;
#	define Z_INTMAX			  Z_SINTMAX
#	define Z_INTMAX_FUNDAMENTAL	  Z_SINTMAX_FUNDAMENTAL
#	define Z_INTMAX_FIXED_FUNDAMENTAL Z_SINTMAX_FIXED_FUNDAMENTAL
#	define Z_INTMAX_WIDTH		  Z_SINTMAX_WIDTH
#	define Z_INTMAX_MAXIMUM		  Z_SINTMAX_MAXIMUM
#	define Z_INTMAX_MINIMUM		  Z_SINTMAX_MINIMUM
#endif

/* MARK: - Pointer size integral types */

#define Z_POINTER_WIDTH		    Z_DATA_MODEL_WIDTH(POINTER)

#define Z_UINTPTR_WIDTH		    Z_POINTER_WIDTH

typedef Z_NATURAL_T_TYPE(UINTPTR)   zuintptr;
#define Z_UINTPTR		    Z_INTEGRAL_T_LITERAL	 (UINTPTR)
#define Z_UINTPTR_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (UINTPTR)
#define Z_UINTPTR_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(UINTPTR)
#define Z_UINTPTR_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (UINTPTR)

#define Z_SINTPTR_WIDTH		    Z_POINTER_WIDTH

typedef Z_INTEGER_T_TYPE(SINTPTR)   zsintptr;
#define Z_SINTPTR		    Z_INTEGRAL_T_LITERAL	 (SINTPTR)
#define Z_SINTPTR_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (SINTPTR)
#define Z_SINTPTR_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(SINTPTR)
#define Z_SINTPTR_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (SINTPTR)
#define Z_SINTPTR_MINIMUM	    (-Z_SINTPTR_MAXIMUM - Z_SINTPTR(1))

/* MARK: - Pointer difference type */

#if Z_SSIZE_WIDTH > Z_SINTPTR_WIDTH
	typedef zssize			   zptrdiff;
#	define Z_PTRDIFF		   Z_SSIZE
#	define Z_PTRDIFF_FUNDAMENTAL	   Z_SSIZE_FUNDAMENTAL
#	define Z_PTRDIFF_FIXED_FUNDAMENTAL Z_SSIZE_FIXED_FUNDAMENTAL
#	define Z_PTRDIFF_WIDTH		   Z_SSIZE_WIDTH
#	define Z_PTRDIFF_MAXIMUM	   Z_SSIZE_MAXIMUM
#	define Z_PTRDIFF_MINIMUM	   Z_SSIZE_MINIMUM
#else
	typedef zsintptr		   zptrdiff;
#	define Z_PTRDIFF		   Z_SINTPTR
#	define Z_PTRDIFF_FUNDAMENTAL	   Z_SINTPTR_FUNDAMENTAL
#	define Z_PTRDIFF_FIXED_FUNDAMENTAL Z_SINTPTR_FIXED_FUNDAMENTAL
#	define Z_PTRDIFF_WIDTH		   Z_SINTPTR_WIDTH
#	define Z_PTRDIFF_MAXIMUM	   Z_SINTPTR_MAXIMUM
#	define Z_PTRDIFF_MINIMUM	   Z_SINTPTR_MINIMUM
#endif

/* MARK: - Default types */

#ifdef Z_BOOL
	typedef zbool			   zboolean;
#	define Z_BOOLEAN		   Z_BOOL
#	define Z_BOOLEAN_FUNDAMENTAL	   Z_BOOL_FUNDAMENTAL
#	define Z_BOOLEAN_FIXED_FUNDAMENTAL Z_BOOL_FIXED_FUNDAMENTAL
#	define Z_BOOLEAN_WIDTH		   Z_BOOL_WIDTH
#else
	typedef zuchar			   zboolean;
#	define Z_BOOLEAN		   Z_UCHAR
#	define Z_BOOLEAN_FUNDAMENTAL	   Z_UCHAR_FUNDAMENTAL
#	define Z_BOOLEAN_FIXED_FUNDAMENTAL Z_UCHAR_FIXED_FUNDAMENTAL
#	define Z_BOOLEAN_WIDTH		   Z_UCHAR_WIDTH
#endif

#ifndef Z_NATURAL_WIDTH
#	define Z_NATURAL_WIDTH Z_ULONG_WIDTH
#endif

typedef Z_NATURAL_T_TYPE(NATURAL)   znatural;
#define Z_NATURAL		    Z_INTEGRAL_T_LITERAL	 (NATURAL)
#define Z_NATURAL_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (NATURAL)
#define Z_NATURAL_FIXED_FUNDAMENTAL Z_NATURAL_T_FIXED_FUNDAMENTAL(NATURAL)
#define Z_NATURAL_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (NATURAL)

#ifndef Z_INTEGER_WIDTH
#	define Z_INTEGER_WIDTH Z_SLONG_WIDTH
#endif

typedef Z_INTEGER_T_TYPE(INTEGER)   zinteger;
#define Z_INTEGER		    Z_INTEGRAL_T_LITERAL	 (INTEGER)
#define Z_INTEGER_FUNDAMENTAL	    Z_INTEGRAL_T_FUNDAMENTAL	 (INTEGER)
#define Z_INTEGER_FIXED_FUNDAMENTAL Z_INTEGER_T_FIXED_FUNDAMENTAL(INTEGER)
#define Z_INTEGER_MAXIMUM	    Z_INTEGRAL_T_MAXIMUM	 (INTEGER)
#define Z_INTEGER_MINIMUM	    (-Z_INTEGER_MAXIMUM - Z_INTEGER(1))

#endif /* Z_types_integral_H */
