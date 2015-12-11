/* Z Kit C API - hardware/CPU/model/68k/Motorola/MC68000.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3.

   	    .----._.----.
     D4 -01-|    \_/    |-64- D5
     D3 -02-|		|-63- D6
     D2 -03-|		|-62- D7
     D1 -04-|		|-61- D8
     D0 -05-|		|-60- D9
     AS -06-|		|-59- D10
    UDS -07-|		|-58- D11
    LDS -08-|		|-57- D12
    R/W -09-|		|-56- D13
  DTACK -10-|		|-55- D14
     BG -11-|		|-54- D15
  BGACK -12-|		|-53- GND
     BR -13-|		|-52- A23
    +5V -14-|		|-51- A22
    CLK -15-|		|-50- A21
    GND -16-|  MC68000	|-49- +5V
   HALT -17-|		|-48- A20
  RESET -18-|		|-47- A19
    VMA -19-|		|-46- A18
      E -20-|		|-45- A17
    VPA -21-|		|-44- A16
   BERR -22-|		|-43- A15
   IPL2 -23-|		|-42- A14
   IPL1 -24-|		|-41- A13
   IPL0 -25-|		|-40- A12
    FC2 -26-|		|-39- A11
    FC1 -27-|		|-38- A10
    FC0 -28-|		|-37- A9
     A1 -29-|		|-36- A8
     A2 -30-|		|-35- A7
     A2 -31-|		|-34- A6
     A4 -32-|		|-33- A5
	    '-----------'		*/

#ifndef __Z_hardware_CPU_model_68k_Motorola_MC68000_H__
#define __Z_hardware_CPU_model_68k_Motorola_MC68000_H__

#include <Z/types/base.h>

typedef struct {
	zuint32 pc;
	Z32Bit	d[8];
	Z32Bit	a[8];
	zuint32 usp2;
	zuint16 sr;
} ZMC68000State;

#endif /* __Z_hardware_CPU_model_68k_Motorola_MC68000_H__ */
