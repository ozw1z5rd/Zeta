/* Q API - hardware/CPU/architecture/650x.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2009 RedCode Software.
Released under the terms of the GNU General Public License v3.

   	    .----._.----.
    VSS -01-|    \_/    |-40- RES
    RDY -02-|		|-39-
        -03-|     _	|-38-
    IRQ -04-|    (_)    |-37-
        -05-|		|-36-
    NMI -06-|		|-35-
   SYNC -07-|		|-34-
    VCC -08-|		|-33- D0
     A0 -09-|		|-32- D1
     A1 -10-|		|-31- D2
     A2 -11-|    6502   |-30- D3
     A3 -12-|		|-29- D4
     A4 -13-|		|-28- D5
     A5 -14-|		|-27- D6
     A6 -15-|		|-26- D7
     A7 -16-|     _     |-25- A15
     A8 -17-|    (_)    |-24- A14
     A9 -18-|		|-23- A13
    A10 -19-|		|-22- A12
    A11 -20-|		|-21- VSS
	    '-----------'

   Registers:
   .-----------------------------------.
   | F E D C B A 9 8 | 7 6 5 4 3 2 1 0 |
   |-----------------------------------|
   |		    PC		       |
   '-----------------------------------|
		     |	     SP	       |
		     |-----------------|
		     |	     S	       |
		     |-----------------|
		     |	     A	       |
		     |-----------------|
		     |	     X	       |
		     |-----------------|
		     |	     Y	       |
		     '-----------------'

   Status (S register):
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   | N V - B D I Z C |
   '-|-|-|-|-|-|-|-|-'
     | | | | | | | '-> carry
     | | | | | | '---> zero
     | | | | | '-----> interrupt (IRQ disable)
     | | | | '-------> decimal (use BCD for arithmetics)
     | | | '---------> break
     | | '-----------> (ignored)
     | '-------------> overflow
     '---------------> negative					*/

#ifndef __Q_hardware_CPU_architecture_650x_H__
#define __Q_hardware_CPU_architecture_650x_H__

#include <Q/keys/endianness.h>

#ifdef Q_INSPECTING
#	define Q_CPU_ARCHITECTURE_TOKEN 650X
#else

#	include <Q/types/basics.h>

#	pragma mark - State storage type

	typedef struct {
		quint16	pc;
		quint8	sp, s, a, x, y;	
	} Q6502State;

#	define Q_6502_STATE(p) ((Q6502State *)(p))

#	define Q_6502_STATE_PC(object)	(object)->pc
#	define Q_6502_STATE_SP(object)	(object)->sp
#	define Q_6502_STATE_S( object)	(object)->s
#	define Q_6502_STATE_A( object)	(object)->a
#	define Q_6502_STATE_X( object)	(object)->x
#	define Q_6502_STATE_Y( object)	(object)->y

#	define Q_6502_STATE_MEMBER_PC	pc
#	define Q_6502_STATE_MEMBER_SP	sp
#	define Q_6502_STATE_MEMBER_S	s
#	define Q_6502_STATE_MEMBER_A	a
#	define Q_6502_STATE_MEMBER_X	x
#	define Q_6502_STATE_MEMBER_Y	y

	Q_DEFINE_STRICT_STRUCTURE (
		quint8 opcode;
		union {	quint16 uint16;
			quint8	uint8;
			qint8	int8;
		} data;
	) Q6502Instruction;

#endif

#pragma mark - Addresses

#define Q_6502_ADDRESS_NMI_POINTER	0xFFFA
#define Q_6502_ADDRESS_RESET_POINTER	0XFFFC
#define Q_6502_ADDRESS_IRQ_POINTER	0xFFFE
#define Q_6502_ADDRESS_BRK_POINTER	0xFFFE
#define Q_6502_ADDRESS_STACK		0x0100

#pragma mark - Values after power on

#define Q_6502_PC_VALUE_AFTER_POWER_ON	0x0000
#define Q_6502_SP_VALUE_AFTER_POWER_ON	0x00
#define Q_6502_S_VALUE_AFTER_POWER_ON	0x00
#define Q_6502_A_VALUE_AFTER_POWER_ON	0x00
#define Q_6502_X_VALUE_AFTER_POWER_ON	0x00
#define Q_6502_Y_VALUE_AFTER_POWER_ON	0x00

#pragma mark - Values after reset

#define Q_6502_PC_VALUE_AFTER_RESET	Q_6502_PC_VALUE_AFTER_POWER_ON
#define Q_6502_SP_VALUE_AFTER_RESET	Q_6502_SP_VALUE_AFTER_POWER_ON
#define Q_6502_S_VALUE_AFTER_RESET	Q_6502_S_VALUE_AFTER_POWER_ON
#define Q_6502_A_VALUE_AFTER_RESET	Q_6502_A_VALUE_AFTER_POWER_ON
#define Q_6502_X_VALUE_AFTER_RESET	Q_6502_X_VALUE_AFTER_POWER_ON
#define Q_6502_Y_VALUE_AFTER_RESET	Q_6502_Y_VALUE_AFTER_POWER_ON

#pragma mark - Information for emulation

#define Q_6502_POWER_ON_IS_EQUAL_TO_RESET TRUE

#endif /* __Q_hardware_CPU_architecture_650x_H__ */