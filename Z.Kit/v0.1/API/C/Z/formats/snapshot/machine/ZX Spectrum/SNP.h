/* Z Kit C API - formats/snapshot/machine/ZX Spectrum/SNP.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3.
 ___________________________________________________
/\						    \
\_| Extensions: .snp				     |
  | Endianness: Little				     |
  | Created by: Radovan Garabik - Lubomir Salanci    |
  | Used by:	Nuclear ZX [DOS]		     |
  |						     |
  | http://korpus.juls.savba.sk/~garabik/old/zx.html |
  |   _______________________________________________|_
   \_/_______________________________________________*/

#ifndef __Z_formats_snapshot_machine_ZX_Spectrum_SNP_H__
#define __Z_formats_snapshot_machine_ZX_Spectrum_SNP_H__

#include <Z/types/base.h>

Z_DEFINE_STRICT_STRUCTURE_BEGIN
	zuint8	ram[1024 * 48];
	Z16Bit	af;
	zuint8	border_color;
	zuint8	reserved;
	Z16Bit	bc, de, hl;
	zuint16	pc, sp;
	Z16Bit	ix, iy;
	zuint8	iff2; /* not used actually */
	zuint8	iff1;
	zuint8	im;
	zuint8	r, i;
	Z16Bit	af_, bc_, de_, hl_;
Z_DEFINE_STRICT_STRUCTURE_END ZSNP;

#endif /* __Z_formats_snapshot_machine_ZX_Spectrum_SNP_H__ */
