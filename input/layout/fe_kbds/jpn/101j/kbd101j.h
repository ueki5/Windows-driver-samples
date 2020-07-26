/****************************** Module Header ******************************\
* Module Name: kbd106u.h
*
* Copyright (c) 1985-2000, Microsoft Corporation
*
* Various defines for use by keyboard input code.
*
* History:
\***************************************************************************/

/*
 * kbd type should be controlled by cl command-line argument
 */
#define KBD_TYPE 8

/*
 * Include the basis of all keyboard table values
 */
#include "kbd.h"
#include <dontuse.h>
 /***************************************************************************\
 * The table below defines the virtual keys for various keyboard types where
 * the keyboard differ from the US keyboard.
 *
 * _EQ() : all keyboard types have the same virtual key for this scancode
 * _NE() : different virtual keys for this scancode, depending on kbd type
 *
 *     +------+ +----------+----------+----------+----------+----------+----------+
 *     | Scan | |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |
 *     | code | |   type 1 |   type 2 |   type 3 |   type 4 |   type 5 |   type 6 |
 \****+-------+_+----------+----------+----------+----------+----------+----------+*/

#undef  T0D
#define T0D _NE(OEM_7,     OEM_PLUS,  OEM_PLUS,  OEM_PLUS,  OEM_PLUS,  OEM_PLUS,  OEM_PLUS  )
#undef  T1A
#define T1A _NE(OEM_4,     OEM_4,     OEM_4,     OEM_4,     OEM_4,     OEM_4,     OEM_4     )
#undef  T1B
#define T1B _NE(OEM_6,     OEM_6,     OEM_6,     OEM_6,     OEM_6,     OEM_6,     OEM_6     )
#undef  T27
#define T27 _NE(OEM_PLUS,  OEM_1,     OEM_1,     OEM_1,     OEM_1,     OEM_1,     OEM_1     )
#undef  T28
#define T28 _NE(OEM_1,     OEM_7,     OEM_7,     OEM_7,     OEM_7,     OEM_7,     OEM_7     )
#undef  T29
#define T29 _NE(OEM_3,     OEM_3,     OEM_3,     OEM_3,     OEM_3,     OEM_3,     OEM_3     )
#undef  T2B
#define T2B _NE(OEM_5,     OEM_5,     OEM_5,     OEM_5,     OEM_5,     OEM_5,     OEM_5     )
#undef  T3A
#define T3A _NE(DBE_ALPHANUMERIC,CAPITAL,CAPITAL,CAPITAL,CAPITAL,CAPITAL,CAPITAL   )
#undef  T56
#define T56 _NE(_none_,    OEM_102,   OEM_102,   OEM_102,   OEM_102,   OEM_102,   OEM_102   )
#undef  T5C
#define T5C _NE(NONAME,    DBE_SBCSCHAR, OEM_AX,    OEM_JUMP,  OEM_JUMP,  OEM_JUMP,  OEM_JUMP  )
