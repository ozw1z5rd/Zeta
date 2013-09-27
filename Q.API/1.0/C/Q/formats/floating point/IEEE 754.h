/* Q API - formats/floating point/IEEE 754.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2011 RedCode Software.
Released under the terms of the GNU General Public License v2. */

#ifndef __Q_formats_floating_point_IEEE_754_H__
#define __Q_formats_floating_point_IEEE_754_H__

#include <Q/types/basics.h>

/* MARK: - binary16 */

/*   15  14	10   9		       0
   .---.-----------.---------------------.
   | S | E E E E E | M M M M M M M M M M |
   '---'-----------'---------------------' */

#define Q_IEEE754_BINARY16_BITS			16
#define Q_IEEE754_BINARY16_BIAS			0xF
#define Q_IEEE754_BINARY16_MINIMUM		5.96046448e-08
#define Q_IEEE754_BINARY16_MAXIMUM		65504.0
#define Q_IEEE754_BINARY16_NORMALIZED_MINIMUM	6.10351562e-05
#define Q_IEEE754_BINARY16_EPSILON		0.00097656
#define Q_IEEE754_BINARY16_DECIMAL_DIGITS	2
#define Q_IEEE754_BINARY16_MANTISSA_OFFSET	0
#define Q_IEEE754_BINARY16_MANTISSA_BITS	10
#define Q_IEEE754_BINARY16_MANTISSA_DIGITS	11
#define Q_IEEE754_BINARY16_EXPONENT_OFFSET	10
#define Q_IEEE754_BINARY16_EXPONENT_BITS	5
#define Q_IEEE754_BINARY16_EXPONENT_RADIX	2
#define Q_IEEE754_BINARY16_EXPONENT_MINIMUM	(-13)
#define Q_IEEE754_BINARY16_EXPONENT_MAXIMUM	16
#define Q_IEEE754_BINARY16_EXPONENT_10_MINIMUM	-4
#define Q_IEEE754_BINARY16_EXPONENT_10_MAXIMUM	4
#define Q_IEEE754_BINARY16_SIGN_OFFSET		15
#define Q_IEEE754_BINARY16_SIGN_BITS		1


#if Q_CPU_ENDIANNESS_16BIT == Q_ENDIANNESS_BIG

	typedef Q_STRICT_STRUCTURE (
	) QIEEE754Binary16;

#elif Q_CPU_ENDIANNESS_16BIT == Q_ENDIANNESS_LITTLE

	typedef Q_STRICT_STRUCTURE (
	) QIEEE754Binary16;

#endif

/* MARK: - binary32 */

/*   31  30	      23   22					       0
   .---.-----------------.-----------------------------------------------.
   | S | E E E E E E E E | M M M M M M M M M M M M M M M M M M M M M M M |
   '---'-----------------'-----------------------------------------------' */

#define Q_IEEE754_BINARY32_BITS			32
#define Q_IEEE754_BINARY32_BIAS			0x7F /* Added to exponent. */
#define Q_IEEE754_BINARY32_MINIMUM		1.17549435e-38F
#define Q_IEEE754_BINARY32_MAXIMUM		3.40282347e+38F
#define Q_IEEE754_BINARY32_EPSILON		1.19209290e-07F
#define Q_IEEE754_BINARY32_DECIMAL_DIGITS	6
#define Q_IEEE754_BINARY16_MANTISSA_OFFSET	0
#define Q_IEEE754_BINARY16_MANTISSA_BITS	23
#define Q_IEEE754_BINARY32_MANTISSA_DIGITS	24
#define Q_IEEE754_BINARY16_EXPONENT_OFFSET	23
#define Q_IEEE754_BINARY16_EXPONENT_BITS	8
#define Q_IEEE754_BINARY32_EXPONENT_RADIX	2
#define Q_IEEE754_BINARY32_EXPONENT_MINIMUM	(-125)
#define Q_IEEE754_BINARY32_EXPONENT_MAXIMUM	128
#define Q_IEEE754_BINARY32_EXPONENT_10_MINIMUM	(-37)
#define Q_IEEE754_BINARY32_EXPONENT_10_MAXIMUM	38
#define Q_IEEE754_BINARY16_SIGN_OFFSET		31
#define Q_IEEE754_BINARY16_SIGN_BITS		1

#if Q_CPU_ENDIANNESS_32BIT == Q_ENDIANNESS_BIG

	Q_DEFINE_STRICT_STRUCTURE (
		quint32 sign:		 1;
		quint32 exponent:	 8;
		quint32 mantissa:	23;
	) QIEEE754Binary32;

	Q_DEFINE_STRICT_STRUCTURE (
		quint32 sign:		 1;
		quint32 exponent:	 8;
		quint32 quiet_nan:	 1;
		quint32 mantissa:	22;
	) QIEEE754Binary32NaN;

	Q_DEFINE_STRICT_STRUCTURE (
		/* To Do */
	) QIEEE754Decimal32;

#elif

	Q_DEFINE_STRICT_STRUCTURE (
		quint32 mantissa:	23;
		quint32 exponent:	 8;
		quint32 sign:		 1;
	) QIEEE754Binary32;

	Q_DEFINE_STRICT_STRUCTURE (
		quint32 mantissa:	22;
		quint32 quiet_nan:	 1;
		quint32 exponent:	 8;
		quint32 sign:		 1;
	) QIEEE754Binary32NaN;

	Q_DEFINE_STRICT_STRUCTURE (
		/* To Do */
	) QIEEE754Decimal32;

#endif

/* MARK: - binary64 */

/*   63  62		    52	 51												       0
   .---.-----------------------.---------------------------------------------------------------------------------------------------------.
   | S | E E E E E E E E E E E | M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M |
   '---'-----------------------'---------------------------------------------------------------------------------------------------------' */

#define Q_IEEE754_BINARY64_BITS			64
#define Q_IEEE754_BINARY64_BIAS			0x3FF /* Added to exponent. */
#define Q_IEEE754_BINARY64_MINIMUM		2.2250738585072014e-308
#define Q_IEEE754_BINARY64_MAXIMUM		1.7976931348623157e+308
#define Q_IEEE754_BINARY64_EPSILON		2.2204460492503131e-16
#define Q_IEEE754_BINARY64_DECIMAL_DIGITS	15
#define Q_IEEE754_BINARY16_MANTISSA_OFFSET	0
#define Q_IEEE754_BINARY16_MANTISSA_BITS	52
#define Q_IEEE754_BINARY64_MANTISSA_DIGITS	53
#define Q_IEEE754_BINARY16_EXPONENT_OFFSET	52
#define Q_IEEE754_BINARY16_EXPONENT_BITS	11
#define Q_IEEE754_BINARY64_EXPONENT_RADIX	2
#define Q_IEEE754_BINARY64_EXPONENT_MINIMUM	(-1021)
#define Q_IEEE754_BINARY64_EXPONENT_MAXIMUM	1024
#define Q_IEEE754_BINARY64_EXPONENT_10_MINIMUM	(-307)
#define Q_IEEE754_BINARY64_EXPONENT_10_MAXIMUM	308
#define Q_IEEE754_BINARY16_SIGN_OFFSET		63
#define Q_IEEE754_BINARY16_SIGN_BITS		1

#if Q_CPU_ENDIANNESS_64BIT == Q_ENDIANNESS_BIG

	Q_DEFINE_STRICT_STRUCTURE (
		quint64 negative:	 1;
		quint64 exponent:	11;
		quint64 mantissa0:	20;
		quint64 mantissa1:	32;
	) QIEEE754Binary64;

	Q_DEFINE_STRICT_STRUCTURE (
		quint64 negative:	 1;
		quint64 exponent:	11;
		quint64 quiet_nan:	 1;
		quint64 mantissa0:	19;
		quint64 mantissa1:	32;
	) QIEEE754Binary64NaN;

	Q_DEFINE_STRICT_STRUCTURE (
		/* To Do */
	) QIEEE754Decimal64;

#elif Q_CPU_ENDIANNESS_64BIT == Q_ENDIANNESS_LITTLE

	Q_DEFINE_STRICT_STRUCTURE (
	) QIEEE754Binary64;

	Q_DEFINE_STRICT_STRUCTURE (
		/* To Do */
	) QIEEE754Decimal64;

#endif

/* MARK: - binary128 */

/*  127 126			   112	 111																											       0
   .---.-------------------------------.---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------.
   | S | E E E E E E E E E E E E E E E | M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M M |
   '---'-------------------------------'---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------' */

#define Q_IEEE754_BINARY128_BITS		128
#define Q_IEEE754_BINARY128_BIAS
#define Q_IEEE754_BINARY128_MINIMUM		3.3621031431120935062626778173217526026E-4932L
#define Q_IEEE754_BINARY128_MAXIMUM		1.1897314953572317650857593266280070162E4932L
#define Q_IEEE754_BINARY128_EPSILON		1.925929944387235853055977942584927319E-34L
#define Q_IEEE754_BINARY128_DECIMAL_DIGITS	33
#define Q_IEEE754_BINARY128_MANTISSA_OFFSET	0
#define Q_IEEE754_BINARY128_MANTISSA_BITS	112
#define Q_IEEE754_BINARY128_MANTISSA_DIGITS	113
#define Q_IEEE754_BINARY128_EXPONENT_OFFSET	112
#define Q_IEEE754_BINARY128_EXPONENT_BITS	15
#define Q_IEEE754_BINARY128_EXPONENT_RADIX	2
#define Q_IEEE754_BINARY128_EXPONENT_MINIMUM	(-16381)
#define Q_IEEE754_BINARY128_EXPONENT_MAXIMUM	16384
#define Q_IEEE754_BINARY128_EXPONENT_10_MINIMUM	(-4931)
#define Q_IEEE754_BINARY128_EXPONENT_10_MAXIMUM	4932
#define Q_IEEE754_BINARY128_SIGN_OFFSET		127
#define Q_IEEE754_BINARY128_SIGN_BITS		1

/* MARK: - decimal32 */

#define Q_IEEE754_DECIMAL32_BITS				32
#define Q_IEEE754_DECIMAL32_MINIMUM_POSITIVE			1E-95DF
#define Q_IEEE754_DECIMAL32_MINIMUM_POSITIVE_DENORMALIZED	0.000001E-95DF
#define Q_IEEE754_DECIMAL32_MAXIMUM				9.999999E96DF
#define Q_IEEE754_DECIMAL32_EPSILON				1E-6DF
#define Q_IEEE754_DECIMAL32_MANTISSA_DIGITS			7
#define Q_IEEE754_DECIMAL32_EXPONENT_MINIMUM			(-95)
#define Q_IEEE754_DECIMAL32_EXPONENT_MAXIMUM			96

/* MARK: - decimal64 */

#define Q_IEEE754_DECIMAL32_BITS				64
#define Q_IEEE754_DECIMAL64_MINIMUM_POSITIVE			1E-383DD
#define Q_IEEE754_DECIMAL64_MINIMUM_POSITIVE_DENORMALIZED	0.000000000000001E-383DD
#define Q_IEEE754_DECIMAL64_MAXIMUM				9.999999999999999E384DD
#define Q_IEEE754_DECIMAL64_EPSILON				1E-15DD
#define Q_IEEE754_DECIMAL64_MANTISSA_DIGITS			16
#define Q_IEEE754_DECIMAL64_EXPONENT_MINIMUM			(-383)
#define Q_IEEE754_DECIMAL64_EXPONENT_MAXIMUM			384

/* MARK: - decimal128 */

#define Q_IEEE754_DECIMAL32_BITS				128
#define Q_IEEE754_DECIMAL128_MINIMUM_POSITIVE			1E-6143DL
#define Q_IEEE754_DECIMAL128_MINIMUM_POSITIVE_DENORMALIZED	0.000000000000000000000000000000001E-6143DL
#define Q_IEEE754_DECIMAL128_MAXIMUM				9.999999999999999999999999999999999E6144DL
#define Q_IEEE754_DECIMAL128_EPSILON				1E-33DL
#define Q_IEEE754_DECIMAL128_MANTISSA_DIGITS			34
#define Q_IEEE754_DECIMAL128_EXPONENT_MINIMUM			(-6143)
#define Q_IEEE754_DECIMAL128_EXPONENT_MAXIMUM			6144

#endif /* __Q_formats_floating_point_IEEE_754_H__ */