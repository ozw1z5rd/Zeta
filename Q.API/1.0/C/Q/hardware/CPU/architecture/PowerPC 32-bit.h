/* Q API - hardware/CPU/architecture/PowerPC 32-bit.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2009 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_hardware_CPU_architecture_PowerPC_32_bit_H__
#define __Q_hardware_CPU_architecture_PowerPC_32_bit_H__

#include <Q/keys/endianness.h>

#ifdef Q_INSPECTING
#	define Q_CPU_ARCHITECTURE_TOKEN POWER_PC_32BIT
#endif

#define Q_POWER_PC_32BIT_HAS_MMU
#define Q_POWER_PC_32BIT_HAS_FPU
#define Q_POWER_PC_32BIT_HAS_32BIT_ARITHMETIC
#define Q_POWER_PC_32BIT_MINIMUM_LOAD_BITS	 8
#define Q_POWER_PC_32BIT_MINIMUM_STORE_BITS	 8
#define Q_POWER_PC_32BIT_MINIMUM_COPY_BITS	 8
#define Q_POWER_PC_32BIT_MAXIMUM_LOAD_BITS	32
#define Q_POWER_PC_32BIT_MAXIMUM_STORE_BITS	32
#define Q_POWER_PC_32BIT_MAXIMUM_COPY_BITS	32
#define Q_POWER_PC_32BIT_ADDRESSING_BITS	32
#define Q_POWER_PC_32BIT_ENDIANNESS		Q_ENDIANNESS_BIG

#endif /* __Q_hardware_CPU_architecture_PowerPC_32_bit_H__ */