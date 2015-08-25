/* Z Kit C API - formats/multimedia container/Microsoft Wave.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_formats_multimedia_container_Microsoft_Wave_H__
#define __Z_formats_multimedia_container_Microsoft_Wave_H__

#include <Z/types/base.h>

Z_DEFINE_STRICT_STRUCTURE (
	zuint32 block_id;		/* 'RIFF' in big endian */
	zuint32 block_size;		/* The size of the entire file minus 8 bytes */
	zuint32 format;			/* 'WAVE' in big endian */

	struct {zuint32 subblock_id;	/* 'fmt ' in big endian */
		zuint32 subblock_size;
		zuint16 audio_format;
		zuint16 channel_count;
		zuint32 sample_rate;
		zuint32 byte_rate;
		zuint16 block_alignment;
		zuint16 bits_per_sample;
	} fmt;

	struct {zuint32 subblock_id;	/* 'data' in big endian */
		zuint32 subblock_size;
		zuint8	samples[];
	} data;
) ZMicrosoftWave;

#define Z_MICROSOFT_WAVE(p) ((ZMicrosoftWare *)(p))

#if Z_UINT32_ENDIANNESS == Z_ENDIANNESS_BIG
#	define Z_MICROSOFT_WAVE_BLOCK_ID	0x52494646
#	define Z_MICROSOFT_WAVE_FORMAT		0x57415645
#elif Z_UINT32_ENDIANNESS == Z_ENDIANNESS_LITTLE
#	define Z_MICROSOFT_WAVE_BLOCK_ID	0x46464952
#	define Z_MICROSOFT_WAVE_FORMAT		0x45564157
#endif

#endif /* __Z_formats_multimedia_container_Microsoft_Wave_H__ */