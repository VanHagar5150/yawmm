/*-------------------------------------------------------------
 from any title deleter and wad manager 1.4
title.h --

Copyright (C) 2008 tona and/or waninkoko
-------------------------------------------------------------*/
#include <gccore.h>
#include <ogcsys.h>
#include <string.h>
#include <stdio.h>
#include <fat.h>
#include <malloc.h>

// Turn upper and lower into a full title ID
#define TITLE_ID(x,y)		(((u64)(x) << 32) | (y))
// Get upper or lower half of a title ID
#define TITLE_UPPER(x)		((u32)((x) >> 32))
// Turn upper and lower into a full title ID
#define TITLE_LOWER(x)		((u32)(x))

#define MAX_TITLES 100

#ifndef _TITLE_H_
#define _TITLE_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Constants */
#define BLOCK_SIZE	1024

/* Prototypes */
s32 Title_GetList(u64 **, u32 *);
s32 Title_GetTicketViews(u64, tikview **, u32 *);
s32 Title_GetTMD(u64, signed_blob **, u32 *);
s32 Title_GetVersion(u64, u16 *);
s32 Title_GetSysVersion(u64, u64 *);
s32 Title_GetSize(u64, u32 *);
s32 Title_GetIOSVersions(u8 **, u32 *);

#ifdef __cplusplus
}
#endif

#endif
