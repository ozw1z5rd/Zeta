/* Q API - hardware/VDP/Ricoh/RP2C0x.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2014 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3.

   	    .----._.----.
    R/W -01-|    \_/    |-40- VCC
     D0 -02-|		|-39- ALE
     D1 -03-|     _	|-38- AD0
     D2 -04-|    (_)    |-37- AD1
     D3 -05-|		|-36- AD2
     D4 -06-|		|-35- AD3
     D5 -07-|		|-34- AD4
     D6 -08-|		|-33- AD5
     D7 -09-|		|-32- AD6
     A2 -10-|		|-31- AD7
     A1 -11-|   RP2C02  |-30- A8
     A0 -12-|		|-29- A9
    /CS -13-|		|-28- A10
   EXT0 -14-|		|-27- A11
   EXT1 -15-|		|-26- A12
   EXT2 -16-|     _     |-25- A13
   EXT3 -17-|    (_)    |-24- /R
    CLK -18-|		|-23- /W
   /VBL -19-|		|-22- /SYNC
    VEE -20-|		|-21- VOUT
	    '-----------'		*/


/* .--------------------------.
   | Default background color |
   |   .--------------------------.
   |   | Sprites with priority 1  |
   |   |   .--------------------------.
   |   |   | Background		      |
   |   |   |   .--------------------------.
   |   |   |   | Sprites with priority 0  |
   '---|   |   |			  |
     | |   |   |			  |
     | '---|   |			  |
     |	 | |   |			  |
     |	 | '---|			  |
     |	 |   | |			  |
     |	 |   | '--------------------------'
     |	 |   |   |
     |	 |   |   |    .-----------------.
     '---|---|---|--->| Stored at 3F00h |
	 |   |	 |    '-----------------'
	 |   |	 |
	 |   |	 |    .----------------------------.
	 |   '---|--->| The ones with priority = 1 |
	 |	 |    '----------------------------'
	 |	 |
	 |	 |    .----------------------------.
	 |	 '--->| The ones with priority = 0 |
	 '----------->'----------------------------'



	| Scanline	| 341	|
	| Frame		| 89342 |










   Sprite Rendering

          .--------.
          | Sprite |
          '--------'
              ||         .------------------.
       .------''-----.   | Control Register |
       |.-----------.|   '------------------'
      _||_         _||_         _||_ 
      \  /         \  /         \  /
       \/           \/           \/
   .---------.  .---------.  .---------.
   | Palette |  | Pattern |  | Pattern |
   |         |  |  index  |  |  table  |
   |---------|  '---------'  '---------'
   |  1 |  0 |      ||           ||
   '---------'      |'-----------'|
      |   |         '------..-----'
      |   |               _||_
      |   |               \  /
      |   |                \/
      |   |            .---------.
      |   |            | Pattern |
      |   |            '---------'
      |   |                ||
      |   |          .-----''-----.
      |   |          |.----------.|
      |   |         _||_        _||_
      |   |         \  /        \  /
      |   |          \/          \/
      |   |      .--------.  .--------.
      |   |      | Tile 0 |  | Tile 1 |
      |   |      '--------'  '--------'
      |   |   .------'           |
      |   |   |   .--------------'
      |   |   |   |
      v   v   v   v
    .---------------.
    | 3 | 2 | 1 | 0 |
    |---------------|
    |  Color Index  |
    |    (4 bit)    |
    '---------------'



      .------------.
      | Name table |
      '------------'
            ||
            |'---------------------.
            |.--------------------.|
           _||_                  _||_
           \  /                  \  /
            \/                    \/
   .-----------------.     .---------------.
   | Attribute table |     | Pattern table |
   '-----------------'     '---------------'
           _||_                  _||_
           \  /                  \  /
            \/                    \/
      .-----------.          .----------.
      | Attribute |          | Pattern  |
      '-----------'          '----------'
          |   |                   ||
          |   |             .-----''-----.
          |   |             |.----------.|
          |   |            _||_        _||_
          |   |            \  /        \  /
          |   |             \/          \/
          |   |         .--------.  .--------.
          |   |         | Tile 0 |  | Tile 1 |
     .----'   |         '--------'  '--------'
     |   .----'             |           |
     |   |   .--------------'           |
     |   |   |   .----------------------'
     |   |   |   |
     v   v   v   v
   .---------------.
   | 3 | 2 | 1 | 0 |
   |---------------|
   |  Color Index  |
   |    (4 bit)    |
   '---------------'












	 <--- 4 bit --->





	1. Draw background
	2. Draw sprites



	.--------------------------------.
	|	    For each		 |
	|     Index from Name Table      |
	|	and its asotiated	 |
	| Attribute from Attribute Table |
	'--------------------------------'
		      _|  |_
		      \    /
		       \  /
		        \/



	    		*/

#ifndef __Q_hardware_VDP_Ricoh_RP2C0x_H__
#define __Q_hardware_VDP_Ricoh_RP2C0x_H__

#include <Q/types/base.h>
#include <Q/macros/bits.h>

typedef struct {
	quint8 y;
	quint8 tile_index;
	quint8 attributes;
	quint8 x;
} QRP2C0xSprite;

typedef struct {

	/* Registers */
	quint8 control;		/* Read / Write  */
	quint8 mask;		/* Read / Write  */
	quint8 status;		/* Read		 */
	quint8 oam_address;	/* Write	 */
	quint8 oam_data;	/* Read / Write  */
	quint8 scroll;		/* Write	 */
	quint8 address;		/* Write	 */
	quint8 data;		/* Read / Write  */

	/* On-Die Memory */
	QRP2C0xSprite oam[64];	/* Not accesible */
	quint8 palettes[28];	/* Not accesible */

} Q_STRICT_SIZE QRP2C0xState;

#define Q_RP2C0X_STATE_REGISTER_OFFSET_CONTROL		0
#define Q_RP2C0X_STATE_REGISTER_OFFSET_MASK		1
#define Q_RP2C0X_STATE_REGISTER_OFFSET_STATUS		2
#define Q_RP2C0X_STATE_REGISTER_OFFSET_OAM_ADDRESS	3
#define Q_RP2C0X_STATE_REGISTER_OFFSET_OAM_DATA		4
#define Q_RP2C0X_STATE_REGISTER_OFFSET_SCROLL		5
#define Q_RP2C0X_STATE_REGISTER_OFFSET_ADDRESS		6
#define Q_RP2C0X_STATE_REGISTER_OFFSET_DATA		7

#define Q_RP2C0X_STATE_REGISTER_SIZE_CONTROL		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_MASK		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_STATUS		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_OAM_ADDRESS	1
#define Q_RP2C0X_STATE_REGISTER_SIZE_OAM_DATA		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_SCROLL		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_ADDRESS		1
#define Q_RP2C0X_STATE_REGISTER_SIZE_DATA		1

/* Control Register
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-|-|-|-|-|-|-\_/-'
     | | | | | |  '--> name_table --------------------------------------.
     | | | | | '-----> address_increment --------------.		|
     | | | | '-------> sprite_patten_table ---------.  |		|
     | | | '---------> background_pattern_table --. |  |		|
     | | '-----------> use_8x16_sprites --------. | |  |		|
     | '-------------> mode ------------------. | | |  |		|
     '---------------> emit_nmi_on_vblank --. | | | |  |		|
					    | | | | |  |		|
      .-------------------------------------' | | | |  |		|
      |		      .-----------------------' | | |  |		|
      |	  .-----------|-------------------------' | |  |		|
      |	  |	      |		    .-------------' |  |		|
      |	  |	      |		    |	.-----------'  |		|
      |	  |	      |		    |   |	       |		|
      |	  |	      |		    |   |	       |		|
      v   v	      v		    v   v	       v		v
   .---------.  .------------.  .-----------.  .---------------.  .------------.
   | 0 = NO  |  | 0 = Master |  | 0 = 0000h |  | 0 =  +1 (X++) |  | 00 = 2000h |
   | 1 = YES |  | 1 = Slave  |  | 1 = 1000h |  | 1 = +32 (Y++) |  | 01 = 2400h |
   '---------'  '------------'  '-----------'  '---------------'  | 10 = 2800h |
								  | 11 = 2C00h |
								  '------------' */

#define Q_RP2C0X_CONTROL_OPTION_NAMETABLE_0			0
#define Q_RP2C0X_CONTROL_OPTION_NAMETABLE_1			1
#define Q_RP2C0X_CONTROL_OPTION_NAMETABLE_2			2
#define Q_RP2C0X_CONTROL_OPTION_NAMETABLE_3			3


#define Q_RP2C0X_CONTROL_GET_NAME_TABLE(v)			(0x2000 | ((((quint16)(v)) & 3) << 10))
#define Q_RP2C0X_CONTROL_GET_ADDRESS_INCREMENT(v)		(Q_BIT_2(v) ? 32 : 1)
#define Q_RP2C0X_CONTROL_GET_SPRITE_PATTERN_TABLE(v)		Q_BIT_3(v)
#define Q_RP2C0X_CONTROL_GET_BACKGROUND_PATTERN_TABLE(v)	Q_BIT_4(v)
#define Q_RP2C0X_CONTROL_GET_USE_8X16_SPRITES(v)		Q_BIT_5(v)
#define Q_RP2C0X_CONTROL_GET_PPU_MODE(v)			Q_BIT_6(v)
#define Q_RP2C0X_CONTROL_GET_EMIT_NMI_ON_VBLANK(v)		Q_BIT_7(v)

/* Mask Register
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-|-|-|-|-|-|-|-|-'
     | | | | | | | '-> use_grayscale
     | | | | | | '---> disable_background_clipping
     | | | | | '-----> disable_sprite_clipping
     | | | | '-------> enable_background
     | | | '---------> enable_sprites
     | | '-----------> intensify_red
     | '-------------> intensify_green
     '---------------> intensify_blue */

#define Q_RP2C0X_MASK_OPTION_USE_GRAYSCALE			  1
#define Q_RP2C0X_MASK_OPTION_DISABLE_BACKGROUND_CLIPPING	  2
#define Q_RP2C0X_MASK_OPTION_DISABLE_SPRITE_CLIPPING		  4
#define Q_RP2C0X_MASK_OPTION_ENABLE_BACKGROUND			  8
#define Q_RP2C0X_MASK_OPTION_ENABLE_SPRITES			 16
#define Q_RP2C0X_MASK_OPTION_INTENSITY_RED			 32
#define Q_RP2C0X_MASK_OPTION_INTENSITY_GREEN			 64
#define Q_RP2C0X_MASK_OPTION_INTENSITY_BLUE			128

#define Q_RP2C0X_MASK_GET_USE_GRAYSCALE(v)			Q_BIT_0(v)
#define Q_RP2C0X_MASK_GET_DISABLE_BACKGROUND_CLIPPING(v)	Q_BIT_1(v)
#define Q_RP2C0X_MASK_GET_DISABLE_SPRITE_CLIPPING(v)		Q_BIT_2(v)
#define Q_RP2C0X_MASK_GET_ENABLE_BACKGROUND(v)			Q_BIT_3(v)
#define Q_RP2C0X_MASK_GET_ENABLE_SPRITES(v)			Q_BIT_4(v)
#define Q_RP2C0X_MASK_GET_INTENSIFY_RED(v)			Q_BIT_5(v)
#define Q_RP2C0X_MASK_GET_INTENSIFY_GREEN(v)			Q_BIT_6(v)
#define Q_RP2C0X_MASK_GET_INTENSIFY_BLUE(v)			Q_BIT_7(v)

/* Status Register
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-|-|-|-\_______/-'
     | | |     '-----> unused
     | | '-----------> sprite_overflow
     | '-------------> sprite_hit
     '---------------> vblank


   Reading resets the 1st/2nd-write flipflop (used by register scroll and 2006h).
Reading resets Bit 7, can be used to acknowledge NMIs, Bit 7 is also automatically reset at the end of VBlank, so manual acknowledge is normally not required (unless one wants to free the NMI signal for external NMI inputs).

*/

#define Q_RP2C0X_STATUS_GET_SPRITE_OVERFLOW(v)			Q_BIT_5(v)
#define Q_RP2C0X_STATUS_GET_SPRITE_HIT(v)			Q_BIT_6(v)
#define Q_RP2C0X_STATUS_GET_VBLANK(v)				Q_BIT_7(v)

/* Sprite

   Y Coordinate
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-----------------'

   Tile Index
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-\___________/-|-'
	   |	   |
	   |	   '-> patern_table
	   '---------> pattern_index

   Attributes
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-|-|-|-\___/-\_/-'
     | | |   |	  '--> palette ----------------.
     | | |   '-------> Unused		       |
     | | '-----------> priority -----------.   |
     | '-------------> horizontal_flip --. |   |
     '---------------> vertical_flip --. | |   |
				       | | |   |
      .--------------------------------' | |   |
      |   .------------------------------' |   |
      |   |		    .--------------'   |
      |   |		    |		       |
      v   v		    v		       v
   .---------.  .----------------------.  .--------.
   | 0 = NO  |  | 0 = over background  |  | 00 = 4 |
   | 1 = YES |  | 1 = under background |  | 01 = 5 |
   '---------'  '----------------------'  | 10 = 6 |
					  | 11 = 7 |
					  '--------'
   .-------------------------------.
   | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |	X Coordinate
   '-------------------------------' */

#define Q_RP2C0X_SPRITE_GET_X(p)
#define Q_RP2C0X_SPRITE_GET_Y(p)
#define Q_RP2C0X_SPRITE_GET_TILE_BANK(p)
#define Q_RP2C0X_SPRITE_GET_TILE_NUMBER(p)
#define Q_RP2C0X_SPRITE_GET_TILE_BANK(p)
#define Q_RP2C0X_SPRITE_GET_PALETTE(p)
#define Q_RP2C0X_SPRITE_GET_PRIORITY(P)		((p)->attributes & 4)
#define Q_RP2C0X_SPRITE_GET_HORIZONTAL_FLIP(p)	((p)->attributes & 2)
#define Q_RP2C0X_SPRITE_GET_VERTICAL_FLIP(p)	((p)->attributes & 1)

/* Palette
   .-----------------.
   | 7 6 5 4 3 2 1 0 |
   '-\_/-\_/-\_____/-'
      |   |	'----> hue
      |   '----------> value
      '--------------> unused (0 when read) */

/* Color
	 .-----------------------------.
	 | Blue %  | Green % | Red %   |
   .-----+---------+---------+---------|
   | 001 |    74.3 |	91.5 |	 123.9 |
   | 010 |    88.2 |   108.6 |	  79.4 |
   | 011 |    65.3 |	98   |	 101.9 |
   | 100 |   127.7 |   102.6 |	  90.5 |
   | 101 |    97.9 |	90.8 |	 102.3 |
   | 110 |   100.1 |	98.7 |	  74.1 |  
   | 111 |    75   |	75   |	  75   |
   '-----------------------------------' */

/* External Memory Structure

   .------------------------------------------------.
   | Address     | Size  | Content		    |
   |-------------+-------+--------------------------|
   | 0000 - 0FFF |  4096 | Pattern table #0	    |
   | 1000 - 1FFF |  4096 | Pattern table #1	    |
   |-------------+-------+--------------------------|
   | 2000 - 23BF |   960 | Name table #0	    |
   | 23C0 - 23FF |    64 | Attribute table #0	    |
   | 2400 - 27BF |   960 | Name table #1	    |
   | 27C0 - 27FF |    64 | Attribute table #1	    |
   | 2800 - 2BBF |   960 | Name table #2	    |
   | 2BC0 - 2BFF |    64 | Attribute table #2	    |
   | 2C00 - 2FBF |   960 | Name table #3	    |
   | 2FC0 - 2FFF |    64 | Attribute table #3	    |
   |-------------+-------+--------------------------|
   | 3000 - 3EFF |  3839 | Name Table Mirror *1	    |
   |-------------+-------+--------------------------|
   | 3F00	 |     1 | Default background color |
   | 3F01 - 3F03 |     2 | Background palette #0    |
   | 3F04	 |     1 | Unused		    |
   | 3F05 - 3F07 |     2 | Background palette #1    |
   | 3F08	 |     1 | Unused		    |
   | 3F09 - 3F0B |     2 | Background palette #2    |
   | 3F0C	 |     1 | Unused		    |
   | 3F0D - 3F0F |     2 | Background palette #3    |
   |-------------+-------+--------------------------|
   | 3F10	 |     1 | Mirror of 3F00h	    |
   | 3F11 - 3F13 |     2 | Sprite palette #0	    |
   | 3F14	 |     1 | Mirror of 3F04h	    |
   | 3F15 - 3F17 |     2 | Sprite palette #1	    |
   | 3F18	 |     1 | Mirror of 3F08h	    |
   | 3F19 - 3F1B |     2 | Sprite palette #2	    |
   | 3F1C	 |     1 | Mirror of 3F0Ch	    |
   | 3F1D - 3F1F |     2 | Sprite palette #3	    |
   |-------------+-------+--------------------------|
   | 3F00 - 3FFF |    20 | Palette *2		    |
   | 4000 - FFFF | 49152 | Mirrors of Above *3	    |
   '------------------------------------------------'

	Pattern Table:
	

	Tile table:		256 tiles
	Attribute table:	


	Name table:
	Used to select tiles for the background. Each element is a tile index.

	Attribute table:
   

*/




typedef struct {
	quint indexes[32 * 30];
	quint attributes[]
} QRP2C0xNameTable;


#define Q_RP2C0X_ADDRESS_PATTERN_TABLE_0		0x0000
#define Q_RP2C0X_ADDRESS_PATTERN_TABLE_1		0x1000
#define Q_RP2C0X_ADDRESS_NAME_TABLE_0			0x2000
#define Q_RP2C0X_ADDRESS_NAME_TABLE_1			0x2400
#define Q_RP2C0X_ADDRESS_NAME_TABLE_2			0x2800
#define Q_RP2C0X_ADDRESS_NAME_TABLE_3			0x2C00
#define Q_RP2C0X_ADDRESS_ATTRIBUTE_TABLE_0		0x23C0
#define Q_RP2C0X_ADDRESS_ATTRIBUTE_TABLE_1		0x27C0
#define Q_RP2C0X_ADDRESS_ATTRIBUTE_TABLE_2		0x2BC0
#define Q_RP2C0X_ADDRESS_ATTRIBUTE_TABLE_3		0x2FC0

#define Q_RP2C0X_ADDRESS_DEFAULT_BACKGROUND_COLOR	0x3F00
#define Q_RP2C0X_ADDRESS_BACKGROUND_PALETTE_0		0x3F01
#define Q_RP2C0X_ADDRESS_BACKGROUND_PALETTE_1		0x3F05
#define Q_RP2C0X_ADDRESS_BACKGROUND_PALETTE_2		0x3F09
#define Q_RP2C0X_ADDRESS_BACKGROUND_PALETTE_3		0x3F0D
#define Q_RP2C0X_ADDRESS_SPRITE_PALETTE_0		0x3F11
#define Q_RP2C0X_ADDRESS_SPRITE_PALETTE_1		0x3F15
#define Q_RP2C0X_ADDRESS_SPRITE_PALETTE_2		0x3F19
#define Q_RP2C0X_ADDRESS_SPRITE_PALETTE_3		0x3F1D

#define Q_RP2C0X_TILE_SIZE		8
#define Q_RP2C0X_PATTERN_SIZE		Q_RP2C0X_TILE_SIZE * 2
#define Q_RP2C0X_PATTERN_TABLE_SIZE	Q_RP2C0X_PATTERN_SIZE * 256
#define Q_RP2C0X_NAME_TABLE_SIZE	Q_UINT8_SIZE * 32 * 30



/* Tile 8x8
	     <--------------- 8 bit -------------->
	    .---------------------------------------.
	  A |  0 |  1 |  2 |  3 |  4 |  5 |  6 |  7 |
	  | |----+----+----+----+----+----+----+----|
	  | |  8 |  9 | 10 | 11 | 12 | 13 | 14 | 15 |
	  | |----+----+----+----+----+----+----+----|
	  | | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 |
	  | |----+----+----+----+----+----+----+----|
	  | | 24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 |
   8 byte | |----+----+----+----+----+----+----+----|
	  | | 32 | 33 | 34 | 35 | 36 | 37 | 38 | 39 |
	  | |----+----+----+----+----+----+----+----|
	  | | 40 | 41 | 42 | 43 | 44 | 45 | 46 | 47 |
	  | |----+----+----+----+----+----+----+----|
	  | | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 |
	  | |----+----+----+----+----+----+----+----|
	  V | 56 | 57 | 58 | 59 | 60 | 61 | 62 | 63 |
	    '---------------------------------------'	*/





/*








	<----------------- 512 ----------------->

	(0,0)	    (255,0)  (256,0)	  (511,0)
	  +-------------+	+-------------+
	  |2000	    20FF|	|2000     20FF|
	  |		|	|	      |
	  |		|	|	      |
	  |		|	|	      |
	  |2300	    23FF|	|2300	  23FF|
	  +-------------+	+-------------+
	(0,240)	    (255,255) (0,240)	    (255,255)5)



			*/




#define Q_RP2C0X_ADDRESS_TILE_SET_0
#define Q_RP2C0X_ADDRESS_TILE_SET_1






typedef struct {
	quint8 tile_0[8];
	quint8 tile_1[8];
} QRP2C0xPattern;

typedef struct {
} QRP2C0xPatternTable;


typedef struct {
} QRP2C0xNameTable;



#define Q_RP2C0X_PATTERN(p) ((QRP2C0xPattern *)(p))

#define Q_RP2C0X_TILE_GET_PIXEL(tile, index) \
	(tile[(index) / 8] >> (7 - ((index) % 8)) & 1)

#define Q_RP2C0X_PATTERN_GET_PIXEL(pattern, index)		\
	Q_RP2C0X_TILE_GET_PIXEL(pattern->plane_a, index) |	\
	(Q_RP2C0X_TILE_GET_PIXEL(pattern->plane_b, index) << 1)













typedef struct {
	
} QRP2C0xNameTable;










#define Q_RP2C0X_MASK_GET_GRAYSCALE_MODE



#endif /* __Q_hardware_VDP_Ricoh_RP2C0x_H__ */