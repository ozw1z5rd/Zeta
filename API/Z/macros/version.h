/* Z Kit - macros/version.h
 _____  _______________
/_   /_/  -_/_   _/  _ | Kit
 /____/\___/ /__//___/_| ゼータキット
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_macros_version_H
#define Z_macros_version_H

#define Z_VERSION(major, minor, micro) \
	((major) * 4194304UL + (minor) * 4096UL + (micro))

#define Z_VERSION_MAJOR(version) \
	((version) / 4194304UL)

#define Z_VERSION_MINOR(version) \
	(((version) % 4194304UL) / 4096UL)

#define Z_VERSION_MICRO(version) \
	((version) & 0xFFFUL)

#endif /* Z_macros_version_H */

