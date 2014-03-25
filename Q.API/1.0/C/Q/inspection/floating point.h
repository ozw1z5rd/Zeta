/* Q API - inspection/floating point.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2014 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_inspection_floating_point_H__
#define __Q_inspection_floating_point_H__

#define Q_INSPECTING

#include <Q/inspection/CPU.h>

#if	Q_CPU_ARCHITECTURE == Q_CPU_ARCHITECTURE_X86_32 || \
	Q_CPU_ARCHITECTURE == Q_CPU_ARCHITECTURE_X86_64

#	include <Q/formats/floating point/IEEE 754.h>
#	include <Q/formats/floating point/Intel.h>

#	undef IEEE_754_BINARY32
#	undef IEEE_754_BINARY64

#	define Q_FLOATING_POINT_NAME_FLOAT   IEEE_754_BINARY32
#	define Q_FLOATING_POINT_NAME_DOUBLE  IEEE_754_BINARY64
#	define Q_FLOATING_POINT_NAME_LDOUBLE INTEL_FLOAT80

#else

#endif

#undef Q_INSPECTING

#include <Q/keys/floating point.h>

#undef _BITS
#undef _BIAS
#undef _MINIMUM
#undef _MAXIMUM
#undef _EPSILON
#undef _DECIMAL_DIGITS
#undef _MANTISSA_OFFSET
#undef _MANTISSA_BITS
#undef _MANTISSA_DIGITS
#undef _EXPONENT_OFFSET
#undef _EXPONENT_BITS
#undef _EXPONENT_RADIX
#undef _EXPONENT_MINIMUM
#undef _EXPONENT_MAXIMUM
#undef _EXPONENT_10_MINIMUM
#undef _EXPONENT_10_MAXIMUM
#undef _SIGN_OFFSET
#undef _SIGN_BITS

#define Q_FLOATING_POINT_NAME(		     TYPE) Q_JOIN_2(Q_FLOATING_POINT_NAME_, TYPE)
#define Q_FLOATING_POINT_FORMAT(	     TYPE) Q_JOIN_2(Q_VALUE_FORMAT_, Q_FLOATING_POINT_TOKEN(TYPE))
#define Q_FLOATING_POINT_BITS(		     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _BITS)
#define Q_FLOATING_POINT_BIAS(		     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _BIAS)
#define Q_FLOATING_POINT_MINIMUM(	     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _MINIMUM)
#define Q_FLOATING_POINT_MAXIMUM(	     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _MAXIMUM)
#define Q_FLOATING_POINT_EPSILON(	     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EPSILON)
#define Q_FLOATING_POINT_DECIMAL_DIGITS(     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _DECIMAL_DIGITS)
#define Q_FLOATING_POINT_MANTISSA_OFFSET(    TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _MANTISSA_OFFSET)
#define Q_FLOATING_POINT_MANTISSA_BITS(      TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _MANTISSA_BITS)
#define Q_FLOATING_POINT_MANTISSA_DIGITS(    TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _MANTISSA_DIGITS)
#define Q_FLOATING_POINT_EXPONENT_OFFSET(    TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_OFFSET)
#define Q_FLOATING_POINT_EXPONENT_BITS(      TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_BITS)
#define Q_FLOATING_POINT_EXPONENT_RADIX(     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_RADIX)
#define Q_FLOATING_POINT_EXPONENT_MINIMUM(   TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_MINIMUM)
#define Q_FLOATING_POINT_EXPONENT_MAXIMUM(   TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_MAXIMUM)
#define Q_FLOATING_POINT_EXPONENT_10_MINIMUM(TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_10_MINIMUM)
#define Q_FLOATING_POINT_EXPONENT_10_MAXIMUM(TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _EXPONENT_10_MAXIMUM)
#define Q_FLOATING_POINT_SIGN_OFFSET(	     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _SIGN_OFFSET)
#define Q_FLOATING_POINT_SIGN_BITS(	     TYPE) Q_JOIN_3(Q_, Q_FLOATING_POINT_NAME(TYPE), _SIGN_BITS)

#endif /* __Q_inspection_floating_point_H__ */
