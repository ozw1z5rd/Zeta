/* Z Kit C API - formats/floating point/Intel.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_floating_point_Intel_Ha__
#define __Z_formats_floating_point_Intel_Ha__

/* MARK: - Intel Float80 */

#define Z_INTEL_FLOAT80_BITS			80
#define Z_INTEL_FLOAT80_BIAS			0x3FFF
#define Z_INTEL_FLOAT80_MINIMUM			3.3621031431120935062627e-4932
#define Z_INTEL_FLOAT80_MAXIMUM			1.1897314953572317650213e+4932
#define Z_INTEL_FLOAT80_EPSILON			1.0842021724855044340075e-19
#define Z_INTEL_FLOAT80_DECIMAL_DIGITS		18
#define Z_INTEL_FLOAT80_MANTISA_OFFSET		0
#define Z_INTEL_FLOAT80_MANTISA_BITS		64
#define Z_INTEL_FLOAT80_MANTISSA_DIGITS		64 /* Correct? */
#define Z_INTEL_FLOAT80_EXPONENT_OFFSET		64
#define Z_INTEL_FLOAT80_EXPONENT_BITS		15
#define Z_INTEL_FLOAT80_EXPONENT_RADIX		2
#define Z_INTEL_FLOAT80_EXPONENT_MINIMUM	-16381
#define Z_INTEL_FLOAT80_EXPONENT_MAXIMUM	16384
#define Z_INTEL_FLOAT80_EXPONENT_10_MINIMUM	-4931
#define Z_INTEL_FLOAT80_EXPONENT_10_MAXIMUM	4932
#define Z_INTEL_FLOAT80_SIGN_OFFSET		127
#define Z_INTEL_FLOAT80_SIGN_BITS		1

#endif /* __Z_formats_floating_point_Intel_Ha__ */

#ifndef Z_INSPECTING_FLOATING_POINT

#	ifndef __Z_formats_floating_point_Intel_Hb__
#	define __Z_formats_floating_point_Intel_Hb__

#	include <Z/types/base.h>

	typedef struct {
	} ZIntelFloat80;

	typedef struct {
	} ZIntelFloat96;

#	endif /* __Z_formats_floating_point_Intel_Hb__ */

#endif