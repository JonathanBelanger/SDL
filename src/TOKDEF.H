/********************************************************************************************************************************/
/* Created:  1-FEB-2006 14:49:30 by OpenVMS SDL EV1-69     */
/* Source:   8-DEC-2000 13:22:26 ISK$SYSMAN:[LAISHEV.WORK.SDL]SDLTOKDEF.SDL;1    */
/********************************************************************************************************************************/
/*** MODULE $tokdef IDENT EV1-8 ***/
#ifndef __TOKDEF_LOADED
#define __TOKDEF_LOADED 1
 
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
 
/* token structure                                                          */
/* filled in by LEX                                                         */
#define MAXTOKSIZ 132
#define TOKEN_SIZE 150
	
#ifdef __NEW_STARLET
extern typedef struct _token {
    int token_id;
    __union  {
        int token_locator;
        __struct  {
            short int lineno;
            short int colno;
            } fill_1_;
        } fill_0_;
    __struct  {
        int token_length;
        void *token_address;
        } token_text;
    char start_line;
    char synthetic;
    char token_string [132];
    } TOKEN [10];
 
#if !defined(__VAXC)
#define token_locator fill_0_.token_locator
#define lineno fill_0_.fill_1_.lineno
#define colno fill_0_.fill_1_.colno
#define token_length token_text.token_length
#define token_address token_text.token_address
#endif		/* #if !defined(__VAXC) */
 
#else	    /* __OLD_STARLET */
extern struct token {
    int token_id;
    __union  {
        int token_locator;
        __struct  {
            short int lineno;
            short int colno;
            } fill_1_;
        } fill_0_;
    __struct  {
        int token_length;
        void *token_address;
        } token_text;
    char start_line;
    char synthetic;
    char token_string [132];
    } token [10];
 
#if !defined(__VAXC)
#define token_locator fill_0_.token_locator
#define lineno fill_0_.fill_1_.lineno
#define colno fill_0_.fill_1_.colno
#define token_length token_text.token_length
#define token_address token_text.token_address
#endif		/* #if !defined(__VAXC) */
 
#endif	    /* #ifdef __NEW_STARLET */
#ifdef __NEW_STARLET
extern typedef int TOKEN_INDEX;
extern int token_index;
 
#pragma __member_alignment __restore
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __restore		 /* Restore the previously-defined required ptr size */
#endif
#ifdef __cplusplus
    }
#endif
#pragma __standard
 
#endif /* __TOKDEF_LOADED */
 
