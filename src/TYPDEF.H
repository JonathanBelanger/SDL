/********************************************************************************************************************************/
/* Created:  1-FEB-2006 14:49:37 by OpenVMS SDL EV1-69     */
/* Source:   8-DEC-2000 14:08:27 ISK$SYSMAN:[LAISHEV.WORK.SDL]SDLTYPDEF.SDL;1    */
/********************************************************************************************************************************/
/*** MODULE $typdef IDENT EV1-0 ***/
#ifndef __TYPDEF_LOADED
#define __TYPDEF_LOADED 1
 
#pragma __nostandard			 /* This file uses non-ANSI-Standard features */
#pragma __member_alignment __save
#pragma __nomember_alignment
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __save		 /* Save the previously-defined required ptr size */
#pragma __required_pointer_size __short		 /* And set ptr size default to 32-bit pointers */
#endif
 
#ifdef __cplusplus
    extern "C" {
#define __unknown_params ...
#define __optional_params ...
#else
#define __unknown_params
#define __optional_params ...
#endif
 
#ifndef __struct
#if !defined(__VAXC)
#define __struct struct
#else
#define __struct variant_struct
#endif
#endif
 
#ifndef __union
#if !defined(__VAXC)
#define __union union
#else
#define __union variant_union
#endif
#endif
 
#define TYP$K_ADDRESS 1
#define TYP$K_BYTE 2
#define TYP$K_CHAR 3
#define TYP$K_BOOLEAN 4
#define TYP$K_DECIMAL 5
#define TYP$K_DOUBLE 6
#define TYP$K_FLOAT 7
#define TYP$K_GRAND 8
#define TYP$K_HUGE 9
#define TYP$K_LONGWORD 10
#define TYP$K_OCTAWORD 11
#define TYP$K_QUADWORD 12
#define TYP$K_VIELD 13
#define TYP$K_WORD 14
#define TYP$K_STRUCTURE 15
#define TYP$K_UNION 16
#define TYP$K_ANY 17
#define TYP$K_ENTRY 18
#define TYP$K_DOUBLE_COMPLEX 19
#define TYP$K_FLOAT_COMPLEX 20
#define TYP$K_GRAND_COMPLEX 21
#define TYP$K_HUGE_COMPLEX 22
#define TYP$K_USER 23
#define TYP$K_VOID 24
#define TYP$K_INTEGER 25
#define TYP$K_HARDWARE_ADDRESS 26
#define TYP$K_HARDWARE_INTEGER 27
#define TYP$K_POINTER_HW 28
#define TYP$K_POINTER_LONG 29
#define TYP$K_POINTER 30
#define TYP$K_POINTER_QUAD 31
#define TYP$K_INTEGER_BYTE 32
#define TYP$K_INTEGER_WORD 33
#define TYP$K_INTEGER_LONG 34
#define TYP$K_INTEGER_QUAD 35
#define TYP$K_INTEGER_HW 36
 
#pragma __member_alignment __restore
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __restore		 /* Restore the previously-defined required ptr size */
#endif
#ifdef __cplusplus
    }
#endif
#pragma __standard
 
#endif /* __TYPDEF_LOADED */
 
