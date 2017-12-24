#pragma region Copyright (c) 2014-2017 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#ifndef _MAP_HELPERS_H_
#define _MAP_HELPERS_H_

enum {
    SLOPE_S_THRESHOLD_FLAGS = (1 << 0),
    SLOPE_W_THRESHOLD_FLAGS = (1 << 1),
    SLOPE_N_THRESHOLD_FLAGS = (1 << 2),
    SLOPE_E_THRESHOLD_FLAGS = (1 << 3)
};

#ifdef __cplusplus
extern "C" {
#endif

sint32 map_smooth(sint32 l, sint32 t, sint32 r, sint32 b);
sint32 tile_smooth(sint32 x, sint32 y);

#ifdef __cplusplus
}
#endif

#endif
