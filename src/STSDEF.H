/********************************************************************************************************************************/
/* Created:  2-FEB-2006 11:59:18 by OpenVMS SDL EV1-69     */
/* Source:   8-DEC-2000 13:57:27 ISK$SYSMAN:[LAISHEV.WORK.SDL]STSDEF.SDL;1       */
/********************************************************************************************************************************/
/*** MODULE $stsdef ***/
#ifndef __STSDEF_LOADED
#define __STSDEF_LOADED 1
 
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
 
#define STS$M_SUCCESS 0x1
#define STS$M_SEVERITY 0x7
#define STS$M_COND_ID 0xFFFFFF8
#define STS$M_INHIB_MSG 0x10000000
#define STS$M_MSG_NO 0xFFF8
#define STS$M_FAC_NO 0xFFF0000
#define STS$M_FAC_SP 0x8000
#define STS$M_CUST_DEF 0x8000000
	
#ifdef __NEW_STARLET
typedef union _$cond_value {
    int sts$l_value;
    unsigned sts$v_success : 1;
    __struct  {
        unsigned sts$v_severity : 3;
        unsigned sts$v_cond_id : 25;
        unsigned sts$v_inhib_msg : 1;
        unsigned sts$v_cntrl : 3;
        } sts$r_status2;
    __struct  {
        unsigned sts$v_status_fill3a : 3;
        unsigned sts$v_msg_no : 13;
        unsigned sts$v_fac_no : 12;
        unsigned sts$v_status_fill3b : 4;
        } sts$r_status3;
    __struct  {
        unsigned sts$v_status_fill4a : 3;
        unsigned sts$v_code : 12;
        unsigned sts$v_fac_sp : 1;
        unsigned sts$v_status_fill4 : 11;
        unsigned sts$v_cust_def : 1;
        unsigned sts$v_status_fill4b : 4;
        } sts$r_status4;
    } $COND_VALUE;
 
#if !defined(__VAXC)
#define sts$v_severity sts$r_status2.sts$v_severity
#define sts$v_cond_id sts$r_status2.sts$v_cond_id
#define sts$v_inhib_msg sts$r_status2.sts$v_inhib_msg
#define sts$v_cntrl sts$r_status2.sts$v_cntrl
#define sts$v_status_fill3a sts$r_status3.sts$v_status_fill3a
#define sts$v_msg_no sts$r_status3.sts$v_msg_no
#define sts$v_fac_no sts$r_status3.sts$v_fac_no
#define sts$v_status_fill3b sts$r_status3.sts$v_status_fill3b
#define sts$v_status_fill4a sts$r_status4.sts$v_status_fill4a
#define sts$v_code sts$r_status4.sts$v_code
#define sts$v_fac_sp sts$r_status4.sts$v_fac_sp
#define sts$v_status_fill4 sts$r_status4.sts$v_status_fill4
#define sts$v_cust_def sts$r_status4.sts$v_cust_def
#define sts$v_status_fill4b sts$r_status4.sts$v_status_fill4b
#endif		/* #if !defined(__VAXC) */
 
#else	    /* __OLD_STARLET */
union $cond_value {
    int sts$l_value;
    unsigned sts$v_success : 1;
    __struct  {
        unsigned sts$v_severity : 3;
        unsigned sts$v_cond_id : 25;
        unsigned sts$v_inhib_msg : 1;
        unsigned sts$v_cntrl : 3;
        } sts$r_status2;
    __struct  {
        unsigned sts$v_status_fill3a : 3;
        unsigned sts$v_msg_no : 13;
        unsigned sts$v_fac_no : 12;
        unsigned sts$v_status_fill3b : 4;
        } sts$r_status3;
    __struct  {
        unsigned sts$v_status_fill4a : 3;
        unsigned sts$v_code : 12;
        unsigned sts$v_fac_sp : 1;
        unsigned sts$v_status_fill4 : 11;
        unsigned sts$v_cust_def : 1;
        unsigned sts$v_status_fill4b : 4;
        } sts$r_status4;
    } ;
 
#if !defined(__VAXC)
#define sts$v_severity sts$r_status2.sts$v_severity
#define sts$v_cond_id sts$r_status2.sts$v_cond_id
#define sts$v_inhib_msg sts$r_status2.sts$v_inhib_msg
#define sts$v_cntrl sts$r_status2.sts$v_cntrl
#define sts$v_status_fill3a sts$r_status3.sts$v_status_fill3a
#define sts$v_msg_no sts$r_status3.sts$v_msg_no
#define sts$v_fac_no sts$r_status3.sts$v_fac_no
#define sts$v_status_fill3b sts$r_status3.sts$v_status_fill3b
#define sts$v_status_fill4a sts$r_status4.sts$v_status_fill4a
#define sts$v_code sts$r_status4.sts$v_code
#define sts$v_fac_sp sts$r_status4.sts$v_fac_sp
#define sts$v_status_fill4 sts$r_status4.sts$v_status_fill4
#define sts$v_cust_def sts$r_status4.sts$v_cust_def
#define sts$v_status_fill4b sts$r_status4.sts$v_status_fill4b
#endif		/* #if !defined(__VAXC) */
 
#endif	    /* #ifdef __NEW_STARLET */
#define STS$K_WARNING 0
#define STS$K_SUCCESS 1
#define STS$K_ERROR 2
#define STS$K_INFO 3
#define STS$K_SEVERE 4
 
#pragma __member_alignment __restore
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __restore		 /* Restore the previously-defined required ptr size */
#endif
#ifdef __cplusplus
    }
#endif
#pragma __standard
 
#endif /* __STSDEF_LOADED */
 
