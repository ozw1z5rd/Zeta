/* Q API - macros/value.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_macros_value_H__
#define __Q_macros_value_H__

#include <Q/types/basics.h>

/* MARK: - Basics */

#define Q_ABSOLUTE(value) ((a) < 0 ? -(a) : (a))

/* MARK: - Limits */

#define Q_MAXIMUM(a, b) ((a) > (b) ? (a) : (b))
#define Q_MINIMUM(a, b) ((a) < (b) ? (a) : (b))

/* MARK: - Masked Bounded Addition/Subtraction */

#define Q_MBA(value, delta, mask)			 \
	(((value) & (mask)) + ((delta) & (mask)) > (mask) \
		? (mask) : ((value) & (mask)) + ((delta) & (mask)))

#define Q_MBS(value, delta, mask)			 \
	(((value) & (mask)) - ((delta) & (mask)) > (mask) \
		? 0 : ((value) & (mask)) - ((delta) & (mask)))

/* MARK: - Mirroring */

#define Q_UINT16_FROM_UINT8_MIRROR( value) (((quint16 )(value)) *	   0x0101)
#define Q_UINT32_FROM_UINT8_MIRROR( value) (((quint32 )(value)) * Q_UINT32(0x01010101))
#define Q_UINT32_FROM_UINT16_MIRROR(value) (((quint32 )(value)) * Q_UINT32(0x00010001))
#define Q_UINT64_FROM_UINT8_MIRROR( value) (((quint64 )(value)) * Q_UINT64(0x0101010101010101))
#define Q_UINT64_FROM_UINT16_MIRROR(value) (((quint64 )(value)) * Q_UINT64(0x0001000100010001))
#define Q_UINT64_FROM_UINT32_MIRROR(value) (((quint64 )(value)) * Q_UINT64(0x0000000100000001))

#if Q_IS_AVAILABLE(UINT128)

#	if Q_COMPILER_HAS(UINT128_LITERAL)

#		define Q_UINT128_FROM_UINT8_MIRROR( value) (((quint128)(value)) * Q_UINT128(0x01010101010101010101010101010101))
#		define Q_UINT128_FROM_UINT16_MIRROR(value) (((quint128)(value)) * Q_UINT128(0x00010001000100010001000100010001))
#		define Q_UINT128_FROM_UINT32_MIRROR(value) (((quint128)(value)) * Q_UINT128(0x00000001000000010000000100000001))
#		define Q_UINT128_FROM_UINT64_MIRROR(value) (((quint128)(value)) * Q_UINT128(0x00000000000000010000000000000001))

#	else
#		include <Q/inspection/language.h>

#		if Q_C_HAS(COMPOUND_LITERAL)

#			define Q_UINT128_FROM_UINT8_MIRROR(value)				\
				(((quint128)value) * ((Q128Bit){				\
					.uint64_values.index0 = Q_UINT64(0x0101010101010101),	\
					.uint64_values.index1 = Q_UINT64(0x0101010101010101)	\
				}).uint128_value)

#			define Q_UINT128_FROM_UINT16_MIRROR(value)				\
				(((quint128)value) * ((Q128Bit){				\
					.uint64_values.index0 = Q_UINT64(0x0001000100010001),	\
					.uint64_values.index1 = Q_UINT64(0x0001000100010001)	\
				}).uint128_value)

#			define Q_UINT128_FROM_UINT32_MIRROR(value)				\
				(((quint128)value) * ((Q128Bit){				\
					.uint64_values.index0 = Q_UINT64(0x0000000100000001),	\
					.uint64_values.index1 = Q_UINT64(0x0000000100000001)	\
				}).uint128_value)

#			define Q_UINT128_FROM_UINT64_MIRROR(value)				\
				(((quint128)value) * ((Q128Bit){				\
					.uint64_values.index0 = Q_UINT64(0x0000000000000001),	\
					.uint64_values.index1 = Q_UINT64(0x0000000000000001)	\
				}).uint128_value)
#		endif

#	endif

#	define Q_AVAILABLE_128BIT_MIRRORING_MACROS

#endif

#if Q_UINTTOP_BITS == 32

#	define Q_UINTTOP_FROM_UINT8_MIRROR  Q_UINT32_FROM_UINT8_MIRROR
#	define Q_UINTTOP_FROM_UINT16_MIRROR Q_UINT32_FROM_UINT16_MIRROR

#elif Q_UINTTOP_BITS == 64

#	define Q_UINTTOP_FROM_UINT8_MIRROR  Q_UINT64_FROM_UINT8_MIRROR
#	define Q_UINTTOP_FROM_UINT16_MIRROR Q_UINT64_FROM_UINT16_MIRROR
#	define Q_UINTTOP_FROM_UINT32_MIRROR Q_UINT64_FROM_UINT32_MIRROR

#elif Q_UINTTOP_BITS == 128 && \
      Q_IS_AVAILABLE(128BIT_MIRRORING_MACROS)

#	define Q_UINTTOP_FROM_UINT8_MIRROR  Q_UINT128_FROM_UINT8_MIRROR
#	define Q_UINTTOP_FROM_UINT16_MIRROR Q_UINT128_FROM_UINT16_MIRROR
#	define Q_UINTTOP_FROM_UINT32_MIRROR Q_UINT128_FROM_UINT32_MIRROR
#	define Q_UINTTOP_FROM_UINT64_MIRROR Q_UINT128_FROM_UINT64_MIRROR

#endif

/* MARK: - Reversion */

#define Q_8BIT_REVERSED_IN_8BIT(  value)   (value)
#define	Q_16BIT_REVERSED_IN_8BIT( value) (((value) <<  8) | ((value) >>  8))
#define	Q_32BIT_REVERSED_IN_16BIT(value) (((value) << 16) | ((value) >> 16))
#define	Q_64BIT_REVERSED_IN_32BIT(value) (((value) << 32) | ((value) >> 32))

#define	Q_32BIT_REVERSED_IN_8BIT(value)		 \
	( ( (value)			  << 24) \
	| (((value) & Q_UINT32(0x00FF00)) <<  8) \
	| (((value) & Q_UINT32(0xFF0000)) >>  8) \
	| ( (value)			  >> 24) )

#define	Q_64BIT_REVERSED_IN_8BIT(value)			 \
	( ( (value)				  << 56) \
	| (((value) & Q_UINT64(0x0000000000FF00)) << 40) \
	| (((value) & Q_UINT64(0x00000000FF0000)) << 24) \
	| (((value) & Q_UINT64(0x000000FF000000)) <<  8) \
	| (((value) & Q_UINT64(0x0000FF00000000)) >>  8) \
	| (((value) & Q_UINT64(0x00FF0000000000)) >> 24) \
	| (((value) & Q_UINT64(0xFF000000000000)) >> 40) \
	| ( (value)				  >> 56) )

#define	Q_64BIT_REVERSED_IN_16BIT(value)	       \
	( ( (value)				<< 48) \
	| (((value) & Q_UINT64(0x0000FFFF0000)) << 16) \
	| (((value) & Q_UINT64(0xFFFF00000000)) >> 16) \
	| ( (value)				>> 48) )

#define Q_16BIT_REVERSE_IN_8BIT( value) ((value) = Q_16BIT_REVERSED_IN_8BIT( value))
#define Q_32BIT_REVERSE_IN_8BIT( value) ((value) = Q_32BIT_REVERSED_IN_8BIT( value))
#define Q_32BIT_REVERSE_IN_16BIT(value) ((value) = Q_32BIT_REVERSED_IN_16BIT(value))
#define Q_64BIT_REVERSE_IN_8BIT( value) ((value) = Q_64BIT_REVERSED_IN_8BIT( value))
#define Q_64BIT_REVERSE_IN_16BIT(value) ((value) = Q_64BIT_REVERSED_IN_16BIT(value))
#define Q_64BIT_REVERSE_IN_32BIT(value) ((value) = Q_64BIT_REVERSED_IN_32BIT(value))

#if Q_IS_AVAILABLE(UINT128) && \
    Q_COMPILER_HAS(UINT128_LITERAL)

#	define Q_128BIT_REVERSED_IN_8BIT(value)					   \
		( ( (value)						   << 120) \
		| (((value) & Q_UINT128(0x00000000000000000000000000FF00)) << 104) \
		| (((value) & Q_UINT128(0x000000000000000000000000FF0000)) <<  88) \
		| (((value) & Q_UINT128(0x0000000000000000000000FF000000)) <<  72) \
		| (((value) & Q_UINT128(0x00000000000000000000FF00000000)) <<  56) \
		| (((value) & Q_UINT128(0x000000000000000000FF0000000000)) <<  40) \
		| (((value) & Q_UINT128(0x0000000000000000FF000000000000)) <<  24) \
		| (((value) & Q_UINT128(0x00000000000000FF00000000000000)) <<   8) \
		| (((value) & Q_UINT128(0x000000000000FF0000000000000000)) >>   8) \
		| (((value) & Q_UINT128(0x0000000000FF000000000000000000)) >>  24) \
		| (((value) & Q_UINT128(0x00000000FF00000000000000000000)) >>  40) \
		| (((value) & Q_UINT128(0x000000FF0000000000000000000000)) >>  56) \
		| (((value) & Q_UINT128(0x0000FF000000000000000000000000)) >>  72) \
		| (((value) & Q_UINT128(0x00FF00000000000000000000000000)) >>  88) \
		| (((value) & Q_UINT128(0xFF0000000000000000000000000000)) >> 104) \
		| ( (value)						   >> 120) )

#	define Q_128BIT_REVERSED_IN_16BIT(value)				 \
		( ( (value)						 << 112) \
		| (((value) & Q_UINT128(0x00000000000000000000FFFF0000)) <<  80) \
		| (((value) & Q_UINT128(0x0000000000000000FFFF00000000)) <<  48) \
		| (((value) & Q_UINT128(0x000000000000FFFF000000000000)) <<  16) \
		| (((value) & Q_UINT128(0x00000000FFFF0000000000000000)) >>  16) \
		| (((value) & Q_UINT128(0x0000FFFF00000000000000000000)) >>  48) \
		| (((value) & Q_UINT128(0xFFFF000000000000000000000000)) >>  80) \
		| ( (value)						 >> 112) )

#	define Q_128BIT_REVERSED_IN_32BIT(value)			    \
		( ( (value)					     << 96) \
		| (((value) & Q_UINT128(0x00000000FFFFFFFF00000000)) << 32) \
		| (((value) & Q_UINT128(0xFFFFFFFF0000000000000000)) >> 32) \
		| ( (value)					     >> 96) )

#	define Q_128BIT_REVERSED_IN_64BIT(value) (((value) << 64) | ((value) >> 64))

#	define Q_128BIT_REVERSE_IN_8BIT(  value) ((value) = Q_128BIT_REVERSED_IN_8BIT( value))
#	define Q_128BIT_REVERSE_IN_16BIT( value) ((value) = Q_128BIT_REVERSED_IN_16BIT(value))
#	define Q_128BIT_REVERSE_IN_32BIT( value) ((value) = Q_128BIT_REVERSED_IN_32BIT(value))
#	define Q_128BIT_REVERSE_IN_64BIT( value) ((value) = Q_128BIT_REVERSED_IN_64BIT(value))

#	define Q_AVAILABLE_128BIT_REVERSION_MACROS

#endif

#define Q_UCHAR_REVERSED	Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_REVERSED_IN_8BIT)
#define Q_USHORT_REVERSED	Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_REVERSED_IN_8BIT)
#define Q_UINT_REVERSED		Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_REVERSED_IN_8BIT)
#define Q_ULONG_REVERSED	Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_REVERSED_IN_8BIT)
#define Q_ULLONG_REVERSED	Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_REVERSED_IN_8BIT)
#define Q_CHAR_REVERSED		Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_REVERSED_IN_8BIT)
#define Q_SHORT_REVERSED	Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_REVERSED_IN_8BIT)
#define Q_INT_REVERSED		Q_JOIN_3(Q_, Q_INT_BITS,     BIT_REVERSED_IN_8BIT)
#define Q_LONG_REVERSED		Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_REVERSED_IN_8BIT)
#define Q_LLONG_REVERSED	Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_REVERSED_IN_8BIT)
#define Q_UINT8_REVERSED(value)	(value)
#define Q_UINT16_REVERSED	Q_16BIT_REVERSED_IN_8BIT
#define Q_UINT32_REVERSED	Q_32BIT_REVERSED_IN_8BIT
#define Q_UINT64_REVERSED	Q_64BIT_REVERSED_IN_8BIT
#define Q_INT8_REVERSED(value)	(value)
#define Q_INT16_REVERSED	Q_16BIT_REVERSED_IN_8BIT
#define Q_INT32_REVERSED	Q_32BIT_REVERSED_IN_8BIT
#define Q_INT64_REVERSED	Q_64BIT_REVERSED_IN_8BIT
#define Q_SIZE_REVERSED		Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_REVERSED_IN_8BIT)
#define Q_UINTPTR_REVERSED	Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_REVERSED_IN_8BIT)
#define Q_UINTTOP_REVERSED	Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_REVERSED_IN_8BIT)
#define Q_UINTMAX_REVERSED	Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_REVERSED_IN_8BIT)
#define Q_SSIZE_REVERSED	Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_REVERSED_IN_8BIT)
#define Q_INTPTR_REVERSED	Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_REVERSED_IN_8BIT)
#define Q_INTTOP_REVERSED	Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_REVERSED_IN_8BIT)
#define Q_INTMAX_REVERSED	Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_REVERSED_IN_8BIT)
#define Q_NATURAL_REVERSED	Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_REVERSED_IN_8BIT)
#define Q_INTEGER_REVERSED	Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_REVERSED_IN_8BIT)

#define Q_UCHAR_REVERSE		Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_REVERSE_IN_8BIT)
#define Q_USHORT_REVERSE	Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_REVERSE_IN_8BIT)
#define Q_UINT_REVERSE		Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_REVERSE_IN_8BIT)
#define Q_ULONG_REVERSE		Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_REVERSE_IN_8BIT)
#define Q_ULLONG_REVERSE	Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_REVERSE_IN_8BIT)
#define Q_CHAR_REVERSE		Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_REVERSE_IN_8BIT)
#define Q_SHORT_REVERSE		Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_REVERSE_IN_8BIT)
#define Q_INT_REVERSE		Q_JOIN_3(Q_, Q_INT_BITS,     BIT_REVERSE_IN_8BIT)
#define Q_LONG_REVERSE		Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_REVERSE_IN_8BIT)
#define Q_LLONG_REVERSE		Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_REVERSE_IN_8BIT)
#define Q_UINT8_REVERSE(value)
#define Q_UINT16_REVERSE	Q_16BIT_REVERSE_IN_8BIT
#define Q_UINT32_REVERSE	Q_32BIT_REVERSE_IN_8BIT
#define Q_UINT64_REVERSE	Q_64BIT_REVERSE_IN_8BIT
#define Q_INT8_REVERSE(value)
#define Q_INT16_REVERSE		Q_16BIT_REVERSE_IN_8BIT
#define Q_INT32_REVERSE		Q_32BIT_REVERSE_IN_8BIT
#define Q_INT64_REVERSE		Q_64BIT_REVERSE_IN_8BIT
#define Q_SIZE_REVERSE		Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_REVERSE_IN_8BIT)
#define Q_UINTPTR_REVERSE	Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_REVERSE_IN_8BIT)
#define Q_UINTTOP_REVERSE	Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_REVERSE_IN_8BIT)
#define Q_UINTMAX_REVERSE	Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_REVERSE_IN_8BIT)
#define Q_SSIZE_REVERSE		Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_REVERSE_IN_8BIT)
#define Q_INTPTR_REVERSE	Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_REVERSE_IN_8BIT)
#define Q_INTTOP_REVERSE	Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_REVERSE_IN_8BIT)
#define Q_INTMAX_REVERSE	Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_REVERSE_IN_8BIT)
#define Q_NATURAL_REVERSE	Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_REVERSE_IN_8BIT)
#define Q_INTEGER_REVERSE	Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_REVERSE_IN_8BIT)

/* MARK: - Rotation */

#define Q_8BIT_ROTATED_LEFT(  value, rotation) (((value) << (rotation)) | ((value) >> ( 8 - (rotation))))
#define Q_8BIT_ROTATED_RIGHT( value, rotation) (((value) >> (rotation)) | ((value) << ( 8 - (rotation))))
#define Q_16BIT_ROTATED_LEFT( value, rotation) (((value) << (rotation)) | ((value) >> (16 - (rotation))))
#define Q_16BIT_ROTATED_RIGHT(value, rotation) (((value) >> (rotation)) | ((value) << (16 - (rotation))))
#define Q_32BIT_ROTATED_LEFT( value, rotation) (((value) << (rotation)) | ((value) >> (32 - (rotation))))
#define Q_32BIT_ROTATED_RIGHT(value, rotation) (((value) >> (rotation)) | ((value) << (32 - (rotation))))
#define Q_64BIT_ROTATED_LEFT( value, rotation) (((value) << (rotation)) | ((value) >> (64 - (rotation))))
#define Q_64BIT_ROTATED_RIGHT(value, rotation) (((value) >> (rotation)) | ((value) << (64 - (rotation))))

#define Q_8BIT_ROTATE_LEFT(   value, rotation) ((value) = Q_8BIT_ROTATED_LEFT  (value, rotation))
#define Q_8BIT_ROTATE_RIGHT(  value, rotation) ((value) = Q_8BIT_ROTATED_RIGHT (value, rotation))
#define Q_16BIT_ROTATE_LEFT(  value, rotation) ((value) = Q_8BIT_ROTATED_LEFT  (value, rotation))
#define Q_16BIT_ROTATE_RIGHT( value, rotation) ((value) = Q_16BIT_ROTATED_RIGHT(value, rotation))
#define Q_32BIT_ROTATE_LEFT(  value, rotation) ((value) = Q_32BIT_ROTATED_LEFT (value, rotation))
#define Q_32BIT_ROTATE_RIGHT( value, rotation) ((value) = Q_32BIT_ROTATED_RIGHT(value, rotation))
#define Q_64BIT_ROTATE_LEFT(  value, rotation) ((value) = Q_64BIT_ROTATED_LEFT (value, rotation))
#define Q_64BIT_ROTATE_RIGHT( value, rotation) ((value) = Q_64BIT_ROTATED_RIGHT(value, rotation))

#if Q_UINT128_IS_AVAILABLE

#	define Q_128BIT_ROTATED_LEFT( value, rotation) (((value) << (rotation)) | ((value) >> (128 - (rotation))))
#	define Q_128BIT_ROTATED_RIGHT(value, rotation) (((value) >> (rotation)) | ((value) << (128 - (rotation))))

#	define Q_128BIT_ROTATE_LEFT(  value, rotation) ((value) = Q_128BIT_ROTATED_LEFT (value, rotation))
#	define Q_128BIT_ROTATE_RIGHT( value, rotation) ((value) = Q_128BIT_ROTATED_RIGHT(value, rotation))

#	define Q_AVAILABLE_128BIT_ROTATION_MACROS

#endif

/* MARK: - Shift */

#define Q_32BIT_FROM_8BIT_DCBA(d, c, b, a)	\
	((((quint32)(d)) << 24) |		\
	 (((quint32)(c)) << 16) |		\
	 (((quint32)(b)) <<  8) |		\
	  ((quint32)(a)))

#define Q_32BIT_FROM_8BIT_0CBA(c, b, a)		\
	((((quint32)(c)) << 16) |		\
	 (((quint32)(b)) <<  8) |		\
	  ((quint32)(a)))

#define Q_32BIT_FROM_8BIT_0CB0(c, b)		\
	((((quint32)(c)) << 16) |		\
	 (((quint32)(b)) <<  8))

#define Q_32BIT_FROM_8BIT_00BA(b, a)		\
	((((quint32)(b)) <<  8) |		\
	  ((quint32)(a)))

#define Q_32BIT_FROM_DCBA(d, c, b, a)		\
	(((((quint32)(d)) & 0xFF) << 24) |	\
	 ((((quint32)(c)) & 0xFF) << 16) |	\
	 ((((quint32)(b)) & 0xFF) <<  8) |	\
	  (((quint32)(a)) & 0xFF))

#define Q_64BIT_FROM_32BIT_BA(b, a)		\
	((((quint64)(b)) << 32) |		\
	  ((quint64)(a)))

/* MARK: - Translation */

#define Q_8BIT_ENSURE_BIG_ENDIAN(   value)
#define Q_8BIT_ENSURE_LITTLE_ENDIAN(value)
#define Q_8BIT_BIG_ENDIAN(	    value) (value)
#define Q_8BIT_LITTLE_ENDIAN(	    value) (value)

#if Q_INT16_ENDIANNESS == Q_ENDIANNESS_BIG

#	define Q_16BIT_ENSURE_BIG_ENDIAN(value)
#	define Q_16BIT_ENSURE_LITTLE_ENDIAN		Q_16BIT_REVERSE_IN_8BIT
#	define Q_16BIT_BIG_ENDIAN(value)		(value)
#	define Q_16BIT_LITTLE_ENDIAN			Q_16BIT_REVERSED_IN_8BIT

#elif Q_INT16_ENDIANNESS == Q_ENDIANNESS_LITTLE

#	define Q_16BIT_ENSURE_BIG_ENDIAN		Q_16BIT_REVERSE_IN_8BIT
#	define Q_16BIT_ENSURE_LITTLE_ENDIAN(value)
#	define Q_16BIT_BIG_ENDIAN			Q_16BIT_REVERSED_IN_8BIT
#	define Q_16BIT_LITTLE_ENDIAN(value)		(value)

#endif

#if Q_INT32_ENDIANNESS == Q_ENDIANNESS_BIG

#	define Q_32BIT_ENSURE_BIG_ENDIAN(value)
#	define Q_32BIT_ENSURE_LITTLE_ENDIAN		Q_32BIT_REVERSE_IN_8BIT
#	define Q_32BIT_BIG_ENDIAN(value)		(value)
#	define Q_32BIT_LITTLE_ENDIAN			Q_32BIT_REVERSED_IN_8BIT

#elif Q_INT32_ENDIANNESS == Q_ENDIANNESS_LITTLE

#	define Q_32BIT_ENSURE_BIG_ENDIAN		Q_32BIT_REVERSE_IN_8BIT
#	define Q_32BIT_ENSURE_LITTLE_ENDIAN(value)
#	define Q_32BIT_BIG_ENDIAN			Q_32BIT_REVERSED_IN_8BIT
#	define Q_32BIT_LITTLE_ENDIAN(value)		(value)

#endif

#if Q_INT64_ENDIANNESS == Q_ENDIANNESS_BIG

#	define Q_64BIT_ENSURE_BIG_ENDIAN(value)
#	define Q_64BIT_ENSURE_LITTLE_ENDIAN		Q_64BIT_REVERSE_IN_8BIT
#	define Q_64BIT_BIG_ENDIAN(value)		(value)
#	define Q_64BIT_LITTLE_ENDIAN			Q_64BIT_REVERSED_IN_8BIT

#elif Q_INT64_ENDIANNESS == Q_ENDIANNESS_LITTLE

#	define Q_64BIT_ENSURE_BIG_ENDIAN		Q_64BIT_REVERSE_IN_8BIT
#	define Q_64BIT_ENSURE_LITTLE_ENDIAN(value)
#	define Q_64BIT_BIG_ENDIAN			Q_64BIT_REVERSED_IN_8BIT
#	define Q_64BIT_LITTLE_ENDIAN(value)		(value)

#endif

#define Q_UCHAR_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_ENSURE_BIG_ENDIAN)
#define Q_USHORT_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_ENSURE_BIG_ENDIAN)
#define Q_UINT_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_ENSURE_BIG_ENDIAN)
#define Q_ULONG_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_ENSURE_BIG_ENDIAN)
#define Q_ULLONG_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_ENSURE_BIG_ENDIAN)
#define Q_CHAR_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_ENSURE_BIG_ENDIAN)
#define Q_SHORT_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_ENSURE_BIG_ENDIAN)
#define Q_INT_ENSURE_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INT_BITS,     BIT_ENSURE_BIG_ENDIAN)
#define Q_LONG_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_ENSURE_BIG_ENDIAN)
#define Q_LLONG_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_ENSURE_BIG_ENDIAN)
#define Q_UINT8_ENSURE_BIG_ENDIAN(value)
#define Q_UINT16_ENSURE_BIG_ENDIAN		Q_16BIT_ENSURE_BIG_ENDIAN
#define Q_UINT32_ENSURE_BIG_ENDIAN		Q_32BIT_ENSURE_BIG_ENDIAN
#define Q_UINT64_ENSURE_BIG_ENDIAN		Q_64BIT_ENSURE_BIG_ENDIAN
#define Q_INT8_ENSURE_BIG_ENDIAN(value)
#define Q_INT16_ENSURE_BIG_ENDIAN		Q_16BIT_REVERSED_IN_8BIT
#define Q_INT32_ENSURE_BIG_ENDIAN		Q_32BIT_REVERSED_IN_8BIT
#define Q_INT64_ENSURE_BIG_ENDIAN		Q_64BIT_REVERSED_IN_8BIT
#define Q_SIZE_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_ENSURE_BIG_ENDIAN)
#define Q_UINTPTR_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_ENSURE_BIG_ENDIAN)
#define Q_UINTTOP_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_ENSURE_BIG_ENDIAN)
#define Q_UINTMAX_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_ENSURE_BIG_ENDIAN)
#define Q_SSIZE_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_ENSURE_BIG_ENDIAN)
#define Q_INTPTR_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_ENSURE_BIG_ENDIAN)
#define Q_INTTOP_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_ENSURE_BIG_ENDIAN)
#define Q_INTMAX_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_ENSURE_BIG_ENDIAN)
#define Q_NATURAL_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_ENSURE_BIG_ENDIAN)
#define Q_INTEGER_ENSURE_BIG_ENDIAN		Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_ENSURE_BIG_ENDIAN)

#define Q_UCHAR_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_ENSURE_LITTLE_ENDIAN)
#define Q_USHORT_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_ENSURE_LITTLE_ENDIAN)
#define Q_UINT_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_ENSURE_LITTLE_ENDIAN)
#define Q_ULONG_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_ENSURE_LITTLE_ENDIAN)
#define Q_ULLONG_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_ENSURE_LITTLE_ENDIAN)
#define Q_CHAR_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_ENSURE_LITTLE_ENDIAN)
#define Q_SHORT_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_ENSURE_LITTLE_ENDIAN)
#define Q_INT_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_INT_BITS,     BIT_ENSURE_LITTLE_ENDIAN)
#define Q_LONG_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_ENSURE_LITTLE_ENDIAN)
#define Q_LLONG_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_ENSURE_LITTLE_ENDIAN)
#define Q_UINT8_ENSURE_LITTLE_ENDIAN(value)
#define Q_UINT16_ENSURE_LITTLE_ENDIAN		Q_16BIT_ENSURE_LITTLE_ENDIAN
#define Q_UINT32_ENSURE_LITTLE_ENDIAN		Q_32BIT_ENSURE_LITTLE_ENDIAN
#define Q_UINT64_ENSURE_LITTLE_ENDIAN		Q_64BIT_ENSURE_LITTLE_ENDIAN
#define Q_INT8_ENSURE_LITTLE_ENDIAN(value)
#define Q_INT16_ENSURE_LITTLE_ENDIAN		Q_16BIT_REVERSED_IN_8BIT
#define Q_INT32_ENSURE_LITTLE_ENDIAN		Q_32BIT_REVERSED_IN_8BIT
#define Q_INT64_ENSURE_LITTLE_ENDIAN		Q_64BIT_REVERSED_IN_8BIT
#define Q_SIZE_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_ENSURE_LITTLE_ENDIAN)
#define Q_UINTPTR_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_ENSURE_LITTLE_ENDIAN)
#define Q_UINTTOP_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_ENSURE_LITTLE_ENDIAN)
#define Q_UINTMAX_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_ENSURE_LITTLE_ENDIAN)
#define Q_SSIZE_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_ENSURE_LITTLE_ENDIAN)
#define Q_INTPTR_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_ENSURE_LITTLE_ENDIAN)
#define Q_INTTOP_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_ENSURE_LITTLE_ENDIAN)
#define Q_INTMAX_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_ENSURE_LITTLE_ENDIAN)
#define Q_NATURAL_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_ENSURE_LITTLE_ENDIAN)
#define Q_INTEGER_ENSURE_LITTLE_ENDIAN		Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_ENSURE_LITTLE_ENDIAN)

#define Q_UCHAR_BIG_ENDIAN			Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_BIG_ENDIAN)
#define Q_USHORT_BIG_ENDIAN			Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_BIG_ENDIAN)
#define Q_UINT_BIG_ENDIAN			Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_BIG_ENDIAN)
#define Q_ULONG_BIG_ENDIAN			Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_BIG_ENDIAN)
#define Q_ULLONG_BIG_ENDIAN			Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_BIG_ENDIAN)
#define Q_CHAR_BIG_ENDIAN			Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_BIG_ENDIAN)
#define Q_SHORT_BIG_ENDIAN			Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_BIG_ENDIAN)
#define Q_INT_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INT_BITS,     BIT_BIG_ENDIAN)
#define Q_LONG_BIG_ENDIAN			Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_BIG_ENDIAN)
#define Q_LLONG_BIG_ENDIAN			Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_BIG_ENDIAN)
#define Q_UINT8_BIG_ENDIAN(value)		(value)
#define Q_UINT16_BIG_ENDIAN			Q_16BIT_BIG_ENDIAN
#define Q_UINT32_BIG_ENDIAN			Q_32BIT_BIG_ENDIAN
#define Q_UINT64_BIG_ENDIAN			Q_64BIT_BIG_ENDIAN
#define Q_INT8_BIG_ENDIAN(value)		(value)
#define Q_INT16_BIG_ENDIAN			Q_16BIT_REVERSED_IN_8BIT
#define Q_INT32_BIG_ENDIAN			Q_32BIT_REVERSED_IN_8BIT
#define Q_INT64_BIG_ENDIAN			Q_64BIT_REVERSED_IN_8BIT
#define Q_SIZE_BIG_ENDIAN			Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_BIG_ENDIAN)
#define Q_UINTPTR_BIG_ENDIAN			Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_BIG_ENDIAN)
#define Q_UINTTOP_BIG_ENDIAN			Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_BIG_ENDIAN)
#define Q_UINTMAX_BIG_ENDIAN			Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_BIG_ENDIAN)
#define Q_SSIZE_BIG_ENDIAN			Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_BIG_ENDIAN)
#define Q_INTPTR_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_BIG_ENDIAN)
#define Q_INTTOP_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_BIG_ENDIAN)
#define Q_INTMAX_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_BIG_ENDIAN)
#define Q_NATURAL_BIG_ENDIAN			Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_BIG_ENDIAN)
#define Q_INTEGER_BIG_ENDIAN			Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_BIG_ENDIAN)

#define Q_UCHAR_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_UCHAR_BITS,   BIT_LITTLE_ENDIAN)
#define Q_USHORT_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_USHORT_BITS,  BIT_LITTLE_ENDIAN)
#define Q_UINT_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_UINT_BITS,    BIT_LITTLE_ENDIAN)
#define Q_ULONG_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_ULONG_BITS,   BIT_LITTLE_ENDIAN)
#define Q_ULLONG_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_ULLONG_BITS,  BIT_LITTLE_ENDIAN)
#define Q_CHAR_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_CHAR_BITS,    BIT_LITTLE_ENDIAN)
#define Q_SHORT_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_SHORT_BITS,   BIT_LITTLE_ENDIAN)
#define Q_INT_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_INT_BITS,     BIT_LITTLE_ENDIAN)
#define Q_LONG_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_LONG_BITS,    BIT_LITTLE_ENDIAN)
#define Q_LLONG_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_LLONG_BITS,   BIT_LITTLE_ENDIAN)
#define Q_UINT8_LITTLE_ENDIAN(value)		(value)
#define Q_UINT16_LITTLE_ENDIAN			Q_16BIT_LITTLE_ENDIAN
#define Q_UINT32_LITTLE_ENDIAN			Q_32BIT_LITTLE_ENDIAN
#define Q_UINT64_LITTLE_ENDIAN			Q_64BIT_LITTLE_ENDIAN
#define Q_INT8_LITTLE_ENDIAN(value)		(value)
#define Q_INT16_LITTLE_ENDIAN			Q_16BIT_REVERSED_IN_8BIT
#define Q_INT32_LITTLE_ENDIAN			Q_32BIT_REVERSED_IN_8BIT
#define Q_INT64_LITTLE_ENDIAN			Q_64BIT_REVERSED_IN_8BIT
#define Q_SIZE_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_SIZE_BITS,    BIT_LITTLE_ENDIAN)
#define Q_UINTPTR_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_UINTPTR_BITS, BIT_LITTLE_ENDIAN)
#define Q_UINTTOP_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_UINTTOP_BITS, BIT_LITTLE_ENDIAN)
#define Q_UINTMAX_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_UINTMAX_BITS, BIT_LITTLE_ENDIAN)
#define Q_SSIZE_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_SSIZE_BITS,   BIT_LITTLE_ENDIAN)
#define Q_INTPTR_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_INTPTR_BITS,  BIT_LITTLE_ENDIAN)
#define Q_INTTOP_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_INTTOP_BITS,  BIT_LITTLE_ENDIAN)
#define Q_INTMAX_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_INTMAX_BITS,  BIT_LITTLE_ENDIAN)
#define Q_NATURAL_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_NATURAL_BITS, BIT_LITTLE_ENDIAN)
#define Q_INTEGER_LITTLE_ENDIAN			Q_JOIN_3(Q_, Q_INTEGER_BITS, BIT_LITTLE_ENDIAN)

#endif /* __Q_macros_value_H__ */