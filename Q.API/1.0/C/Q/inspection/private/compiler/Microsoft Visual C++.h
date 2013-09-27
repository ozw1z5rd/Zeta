/* Q API - inspection/private/compiler/GCC.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2010-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_inspection_private_compiler_H__
#define __Q_inspection_private_compiler_H__

#include <Q/constants/basics.h>
#include <Q/keys/compiler.h>
#include <Q/keys/bit field.h>

/* MARK: - Identification */

#define Q_COMPILER						Q_COMPILER_MICROSOFT_VISUAL_CPP
#define Q_COMPILER_STRING					Q_COMPILER_STRING_MICROSOFT_VISUAL_CPP
#define Q_COMPILER_VERSION
#define Q_COMPILER_VERSION_STRING

/* MARK: - Extensions */

#define Q_COMPILER_HAS_ALIAS

/* MARK: - Bit field encoding */

#define Q_COMPILER_LITTLE_ENDIAN_8BIT_FIELD_ENCODING		Q_BIT_FIELD_ENCODING_REVERSED
#define Q_COMPILER_LITTLE_ENDIAN_BIT_FIELD_ENCODING		Q_BIT_FIELD_ENCODING_REVERSED
#define Q_COMPILER_BIG_ENDIAN_8BIT_FIELD_ENCODING		Q_BIT_FIELD_ENCODING_LITERAL
#define Q_COMPILER_BIG_ENDIAN_BIT_FIELD_ENCODING		Q_BIT_FIELD_ENCODING_LITERAL

/* MARK: - Custom types */


/* MARK: - Built-in functions */


/* MARK: - Keywords and attributes */

#define Q_ASSEMBLY
#define Q_THREAD_LOCAL(type, variable)				__declspec(thread) type variable
#define Q_API							__declspec(dllimport)
#define Q_PRIVATE						static
#define Q_PUBLIC						__declspec(dllexport)
#define Q_ALIAS(name)
#define Q_STRICT_SIZE_BEGIN					__pragma(pack(push, 1))
#define Q_STRICT_SIZE_END					__pragma(pack(pop))

#define Q_INLINE						static __inline

#endif /* __Q_inspection_private_compiler_H__ */