/********************************************************************************************************************************/
/* Created:  1-FEB-2006 14:49:18 by OpenVMS SDL EV1-69     */
/* Source:   7-DEC-2000 14:25:22 ISK$SYSMAN:[LAISHEV.WORK.SDL]SDLNODEF.SDL;1     */
/********************************************************************************************************************************/
/*** MODULE $nodef IDENT EV1-21A ***/
#ifndef __NODEF_LOADED
#define __NODEF_LOADED 1
 
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
 
#define SDL$K_NODE_REV 1
#define NOD$M_VALUE 0x1
#define NOD$M_MASK 0x2
#define NOD$M_UNSIGNED 0x4
#define NOD$M_COMMON 0x8
#define NOD$M_GLOBAL 0x10
#define NOD$M_VARYING 0x20
#define NOD$M_VARIABLE 0x40
#define NOD$M_BASED 0x80
#define NOD$M_DESC 0x100
#define NOD$M_DIMEN 0x200
#define NOD$M_IN 0x400
#define NOD$M_OUT 0x800
#define NOD$M_BOTTOM 0x1000
#define NOD$M_BOUND 0x2000
#define NOD$M_REF 0x4000
#define NOD$M_USERFILL 0x8000
#define NOD$M_ALIAS 0x10000
#define NOD$M_DEFAULT 0x20000
#define NOD$M_VARDIM 0x40000
#define NOD$M_LINK 0x80000
#define NOD$M_OPTIONAL 0x100000
#define NOD$M_SIGNED 0x200000
#define NOD$M_FIXED_FLDSIZ 0x400000
#define NOD$M_GENERATED 0x800000
#define NOD$M_MODULE 0x1000000
#define NOD$M_LIST 0x2000000
#define NOD$M_RTL_STR_DESC 0x4000000
#define NOD$M_COMPLEX 0x8000000
#define NOD$M_TYPEDEF 0x10000000
#define NOD$M_DECLARED 0x20000000
#define NOD$M_FORWARD 0x40000000
#define NOD$M_ALIGN 0x80000000
#define NOD$K_NODESIZE 346
	
#ifdef __NEW_STARLET
typedef struct _nod$_node {
    void *nod$a_flink;
    void *nod$a_blink;
    void *nod$a_parent;
    void *nod$a_child;
    void *nod$a_comment;
    __union  {
        int nod$l_typeinfo;
        void *nod$a_typeinfo;
        } nod$r_info;
    __union  {
        int nod$l_typeinfo2;
        void *nod$a_typeinfo2;
        void *nod$a_symtab;
        } nod$r_info2;
    char nod$b_type;
    char nod$b_boundary;
    short int nod$w_datatype;
    int nod$l_offset;
    __union  {
        int nod$l_fldsiz;
        void *nod$a_fldsiz;
        } nod$r_fldsiz;
/* Flags nod$v_%%dim indicate module SDLACTION.PLI                          */
/* has cached a pointer to an expression that cannot                        */
/* be evaluated yet.  Those flags will be cleared as                        */
/* SDLACTION.PLI finishes parsing the aggregate that                        */
/* contains the item.                                                       */
    __union  {                          /* A single longword used for two purposes */
        int nod$l_hidim;                /* generally used as integer, but   */
        void *nod$a_hidim;              /* SDLACTION.PLI caches a pointer.  */
        } nod$r_hidim;
    __union  {                          /* A single longword used for two purposes */
        int nod$l_lodim;                /* generally used as integer, but   */
        void *nod$a_lodim;              /* SDLACTION.PLI caches a pointer.  */
        } nod$r_lodim;
/* Flag nod$v_initial indicate module SDLACTION.PLI                         */
/* has cached a pointer to an expression that cannot                        */
/* be evaluated yet.  That flag will be cleared as                          */
/* SDLACTION.PLI finishes parsing the aggregate that                        */
/* contains the item.                                                       */
    __union  {                          /* A single longword used for two purposes */
        int nod$l_initial;              /* generally used as integer, but   */
        void *nod$a_initial;            /* SDLACTION.PLI caches a pointer.  */
        } nod$r_initial;
    int nod$l_srcline;
    int nod$l_nodeid;
    __union  {
        unsigned int nod$l_flags;
        int nod$l_fixflags;
        __struct  {
            unsigned nod$v_value : 1;
            unsigned nod$v_mask : 1;
            unsigned nod$v_unsigned : 1;
            unsigned nod$v_common : 1;
            unsigned nod$v_global : 1;
            unsigned nod$v_varying : 1;
            unsigned nod$v_variable : 1;
            unsigned nod$v_based : 1;
            unsigned nod$v_desc : 1;
            unsigned nod$v_dimen : 1;   /* is dimensioned                   */
            unsigned nod$v_in : 1;
            unsigned nod$v_out : 1;
            unsigned nod$v_bottom : 1;
            unsigned nod$v_bound : 1;
            unsigned nod$v_ref : 1;
            unsigned nod$v_userfill : 1;
            unsigned nod$v_alias : 1;
            unsigned nod$v_default : 1; /* DEFAULT                          */
            unsigned nod$v_vardim : 1;  /* "DIMENSION *"                    */
            unsigned nod$v_link : 1;
            unsigned nod$v_optional : 1;
            unsigned nod$v_signed : 1;
            unsigned nod$v_fixed_fldsiz : 1;
            unsigned nod$v_generated : 1;
            unsigned nod$v_module : 1;
            unsigned nod$v_list : 1;
            unsigned nod$v_rtl_str_desc : 1;
            unsigned nod$v_complex : 1;
            unsigned nod$v_typedef : 1;
            unsigned nod$v_declared : 1;
            unsigned nod$v_forward : 1;
            unsigned nod$v_align : 1;
            } nod$r_flagstruc;
        } nod$r_flagunion;
    __union  {
        unsigned int nod$l_flags2;
        int nod$l_fixflags2;
        __struct  {
            unsigned nod$v_has_object : 1;
            unsigned nod$v_offset_fixed : 1;
            unsigned nod$v_length : 1;
            unsigned nod$v_hidim : 1;
            unsigned nod$v_lodim : 1;
            unsigned nod$v_initial : 1;
            unsigned nod$v_base_align : 1;
            unsigned nod$v_offset_ref : 1;
            } nod$r_flags2struc;
        } nod$r_flags2union;
    struct {short string_length; char string_text[34];} nod$t_naked;
    struct {short string_length; char string_text[34];} nod$t_name;
    struct {short string_length; char string_text[34];} nod$t_return_name;
    struct {short string_length; char string_text[32];} nod$t_prefix;
    struct {short string_length; char string_text[32];} nod$t_marker;
    struct {short string_length; char string_text[32];} nod$t_tag;
    struct {short string_length; char string_text[32];} nod$t_typename;
    struct {short string_length; char string_text[32];} nod$t_maskstr;
    } NOD$_NODE;
 
#if !defined(__VAXC)
#define nod$l_typeinfo nod$r_info.nod$l_typeinfo
#define nod$a_typeinfo nod$r_info.nod$a_typeinfo
#define nod$l_typeinfo2 nod$r_info2.nod$l_typeinfo2
#define nod$a_typeinfo2 nod$r_info2.nod$a_typeinfo2
#define nod$a_symtab nod$r_info2.nod$a_symtab
#define nod$l_fldsiz nod$r_fldsiz.nod$l_fldsiz
#define nod$a_fldsiz nod$r_fldsiz.nod$a_fldsiz
#define nod$l_hidim nod$r_hidim.nod$l_hidim
#define nod$a_hidim nod$r_hidim.nod$a_hidim
#define nod$l_lodim nod$r_lodim.nod$l_lodim
#define nod$a_lodim nod$r_lodim.nod$a_lodim
#define nod$l_initial nod$r_initial.nod$l_initial
#define nod$a_initial nod$r_initial.nod$a_initial
#define nod$l_flags nod$r_flagunion.nod$l_flags
#define nod$l_fixflags nod$r_flagunion.nod$l_fixflags
#define nod$r_flagstruc	nod$r_flagunion.nod$r_flagstruc
#define nod$v_value nod$r_flagstruc.nod$v_value
#define nod$v_mask nod$r_flagstruc.nod$v_mask
#define nod$v_unsigned nod$r_flagstruc.nod$v_unsigned
#define nod$v_common nod$r_flagstruc.nod$v_common
#define nod$v_global nod$r_flagstruc.nod$v_global
#define nod$v_varying nod$r_flagstruc.nod$v_varying
#define nod$v_variable nod$r_flagstruc.nod$v_variable
#define nod$v_based nod$r_flagstruc.nod$v_based
#define nod$v_desc nod$r_flagstruc.nod$v_desc
#define nod$v_dimen nod$r_flagstruc.nod$v_dimen
#define nod$v_in nod$r_flagstruc.nod$v_in
#define nod$v_out nod$r_flagstruc.nod$v_out
#define nod$v_bottom nod$r_flagstruc.nod$v_bottom
#define nod$v_bound nod$r_flagstruc.nod$v_bound
#define nod$v_ref nod$r_flagstruc.nod$v_ref
#define nod$v_userfill nod$r_flagstruc.nod$v_userfill
#define nod$v_alias nod$r_flagstruc.nod$v_alias
#define nod$v_default nod$r_flagstruc.nod$v_default
#define nod$v_vardim nod$r_flagstruc.nod$v_vardim
#define nod$v_link nod$r_flagstruc.nod$v_link
#define nod$v_optional nod$r_flagstruc.nod$v_optional
#define nod$v_signed nod$r_flagstruc.nod$v_signed
#define nod$v_fixed_fldsiz nod$r_flagstruc.nod$v_fixed_fldsiz
#define nod$v_generated nod$r_flagstruc.nod$v_generated
#define nod$v_module nod$r_flagstruc.nod$v_module
#define nod$v_list nod$r_flagstruc.nod$v_list
#define nod$v_rtl_str_desc nod$r_flagstruc.nod$v_rtl_str_desc
#define nod$v_complex nod$r_flagstruc.nod$v_complex
#define nod$v_typedef nod$r_flagstruc.nod$v_typedef
#define nod$v_declared nod$r_flagstruc.nod$v_declared
#define nod$v_forward nod$r_flagstruc.nod$v_forward
#define nod$v_align nod$r_flagstruc.nod$v_align
#define nod$l_flags2 nod$r_flags2union.nod$l_flags2
#define nod$l_fixflags2 nod$r_flags2union.nod$l_fixflags2
#define nod$r_flags2struc	nod$r_flags2union.nod$r_flags2struc
#define nod$v_has_object nod$r_flags2struc.nod$v_has_object
#define nod$v_offset_fixed nod$r_flags2struc.nod$v_offset_fixed
#define nod$v_length nod$r_flags2struc.nod$v_length
#define nod$v_hidim nod$r_flags2struc.nod$v_hidim
#define nod$v_lodim nod$r_flags2struc.nod$v_lodim
#define nod$v_initial nod$r_flags2struc.nod$v_initial
#define nod$v_base_align nod$r_flags2struc.nod$v_base_align
#define nod$v_offset_ref nod$r_flags2struc.nod$v_offset_ref
#endif		/* #if !defined(__VAXC) */
 
#else	    /* __OLD_STARLET */
struct nod$_node {
    void *nod$a_flink;
    void *nod$a_blink;
    void *nod$a_parent;
    void *nod$a_child;
    void *nod$a_comment;
    __union  {
        int nod$l_typeinfo;
        void *nod$a_typeinfo;
        } nod$r_info;
    __union  {
        int nod$l_typeinfo2;
        void *nod$a_typeinfo2;
        void *nod$a_symtab;
        } nod$r_info2;
    char nod$b_type;
    char nod$b_boundary;
    short int nod$w_datatype;
    int nod$l_offset;
    __union  {
        int nod$l_fldsiz;
        void *nod$a_fldsiz;
        } nod$r_fldsiz;
/* Flags nod$v_%%dim indicate module SDLACTION.PLI                          */
/* has cached a pointer to an expression that cannot                        */
/* be evaluated yet.  Those flags will be cleared as                        */
/* SDLACTION.PLI finishes parsing the aggregate that                        */
/* contains the item.                                                       */
    __union  {                          /* A single longword used for two purposes */
        int nod$l_hidim;                /* generally used as integer, but   */
        void *nod$a_hidim;              /* SDLACTION.PLI caches a pointer.  */
        } nod$r_hidim;
    __union  {                          /* A single longword used for two purposes */
        int nod$l_lodim;                /* generally used as integer, but   */
        void *nod$a_lodim;              /* SDLACTION.PLI caches a pointer.  */
        } nod$r_lodim;
/* Flag nod$v_initial indicate module SDLACTION.PLI                         */
/* has cached a pointer to an expression that cannot                        */
/* be evaluated yet.  That flag will be cleared as                          */
/* SDLACTION.PLI finishes parsing the aggregate that                        */
/* contains the item.                                                       */
    __union  {                          /* A single longword used for two purposes */
        int nod$l_initial;              /* generally used as integer, but   */
        void *nod$a_initial;            /* SDLACTION.PLI caches a pointer.  */
        } nod$r_initial;
    int nod$l_srcline;
    int nod$l_nodeid;
    __union  {
        unsigned int nod$l_flags;
        int nod$l_fixflags;
        __struct  {
            unsigned nod$v_value : 1;
            unsigned nod$v_mask : 1;
            unsigned nod$v_unsigned : 1;
            unsigned nod$v_common : 1;
            unsigned nod$v_global : 1;
            unsigned nod$v_varying : 1;
            unsigned nod$v_variable : 1;
            unsigned nod$v_based : 1;
            unsigned nod$v_desc : 1;
            unsigned nod$v_dimen : 1;   /* is dimensioned                   */
            unsigned nod$v_in : 1;
            unsigned nod$v_out : 1;
            unsigned nod$v_bottom : 1;
            unsigned nod$v_bound : 1;
            unsigned nod$v_ref : 1;
            unsigned nod$v_userfill : 1;
            unsigned nod$v_alias : 1;
            unsigned nod$v_default : 1; /* DEFAULT                          */
            unsigned nod$v_vardim : 1;  /* "DIMENSION *"                    */
            unsigned nod$v_link : 1;
            unsigned nod$v_optional : 1;
            unsigned nod$v_signed : 1;
            unsigned nod$v_fixed_fldsiz : 1;
            unsigned nod$v_generated : 1;
            unsigned nod$v_module : 1;
            unsigned nod$v_list : 1;
            unsigned nod$v_rtl_str_desc : 1;
            unsigned nod$v_complex : 1;
            unsigned nod$v_typedef : 1;
            unsigned nod$v_declared : 1;
            unsigned nod$v_forward : 1;
            unsigned nod$v_align : 1;
            } nod$r_flagstruc;
        } nod$r_flagunion;
    __union  {
        unsigned int nod$l_flags2;
        int nod$l_fixflags2;
        __struct  {
            unsigned nod$v_has_object : 1;
            unsigned nod$v_offset_fixed : 1;
            unsigned nod$v_length : 1;
            unsigned nod$v_hidim : 1;
            unsigned nod$v_lodim : 1;
            unsigned nod$v_initial : 1;
            unsigned nod$v_base_align : 1;
            unsigned nod$v_offset_ref : 1;
            } nod$r_flags2struc;
        } nod$r_flags2union;
    struct {short string_length; char string_text[34];} nod$t_naked;
    struct {short string_length; char string_text[34];} nod$t_name;
    struct {short string_length; char string_text[34];} nod$t_return_name;
    struct {short string_length; char string_text[32];} nod$t_prefix;
    struct {short string_length; char string_text[32];} nod$t_marker;
    struct {short string_length; char string_text[32];} nod$t_tag;
    struct {short string_length; char string_text[32];} nod$t_typename;
    struct {short string_length; char string_text[32];} nod$t_maskstr;
    } ;
 
#if !defined(__VAXC)
#define nod$l_typeinfo nod$r_info.nod$l_typeinfo
#define nod$a_typeinfo nod$r_info.nod$a_typeinfo
#define nod$l_typeinfo2 nod$r_info2.nod$l_typeinfo2
#define nod$a_typeinfo2 nod$r_info2.nod$a_typeinfo2
#define nod$a_symtab nod$r_info2.nod$a_symtab
#define nod$l_fldsiz nod$r_fldsiz.nod$l_fldsiz
#define nod$a_fldsiz nod$r_fldsiz.nod$a_fldsiz
#define nod$l_hidim nod$r_hidim.nod$l_hidim
#define nod$a_hidim nod$r_hidim.nod$a_hidim
#define nod$l_lodim nod$r_lodim.nod$l_lodim
#define nod$a_lodim nod$r_lodim.nod$a_lodim
#define nod$l_initial nod$r_initial.nod$l_initial
#define nod$a_initial nod$r_initial.nod$a_initial
#define nod$l_flags nod$r_flagunion.nod$l_flags
#define nod$l_fixflags nod$r_flagunion.nod$l_fixflags
#define nod$v_value nod$r_flagunion.nod$r_flagstruc.nod$v_value
#define nod$v_mask nod$r_flagunion.nod$r_flagstruc.nod$v_mask
#define nod$v_unsigned nod$r_flagunion.nod$r_flagstruc.nod$v_unsigned
#define nod$v_common nod$r_flagunion.nod$r_flagstruc.nod$v_common
#define nod$v_global nod$r_flagunion.nod$r_flagstruc.nod$v_global
#define nod$v_varying nod$r_flagunion.nod$r_flagstruc.nod$v_varying
#define nod$v_variable nod$r_flagunion.nod$r_flagstruc.nod$v_variable
#define nod$v_based nod$r_flagunion.nod$r_flagstruc.nod$v_based
#define nod$v_desc nod$r_flagunion.nod$r_flagstruc.nod$v_desc
#define nod$v_dimen nod$r_flagunion.nod$r_flagstruc.nod$v_dimen
#define nod$v_in nod$r_flagunion.nod$r_flagstruc.nod$v_in
#define nod$v_out nod$r_flagunion.nod$r_flagstruc.nod$v_out
#define nod$v_bottom nod$r_flagunion.nod$r_flagstruc.nod$v_bottom
#define nod$v_bound nod$r_flagunion.nod$r_flagstruc.nod$v_bound
#define nod$v_ref nod$r_flagunion.nod$r_flagstruc.nod$v_ref
#define nod$v_userfill nod$r_flagunion.nod$r_flagstruc.nod$v_userfill
#define nod$v_alias nod$r_flagunion.nod$r_flagstruc.nod$v_alias
#define nod$v_default nod$r_flagunion.nod$r_flagstruc.nod$v_default
#define nod$v_vardim nod$r_flagunion.nod$r_flagstruc.nod$v_vardim
#define nod$v_link nod$r_flagunion.nod$r_flagstruc.nod$v_link
#define nod$v_optional nod$r_flagunion.nod$r_flagstruc.nod$v_optional
#define nod$v_signed nod$r_flagunion.nod$r_flagstruc.nod$v_signed
#define nod$v_fixed_fldsiz nod$r_flagunion.nod$r_flagstruc.nod$v_fixed_fldsiz
#define nod$v_generated nod$r_flagunion.nod$r_flagstruc.nod$v_generated
#define nod$v_module nod$r_flagunion.nod$r_flagstruc.nod$v_module
#define nod$v_list nod$r_flagunion.nod$r_flagstruc.nod$v_list
#define nod$v_rtl_str_desc nod$r_flagunion.nod$r_flagstruc.nod$v_rtl_str_desc
#define nod$v_complex nod$r_flagunion.nod$r_flagstruc.nod$v_complex
#define nod$v_typedef nod$r_flagunion.nod$r_flagstruc.nod$v_typedef
#define nod$v_declared nod$r_flagunion.nod$r_flagstruc.nod$v_declared
#define nod$v_forward nod$r_flagunion.nod$r_flagstruc.nod$v_forward
#define nod$v_align nod$r_flagunion.nod$r_flagstruc.nod$v_align
#define nod$l_flags2 nod$r_flags2union.nod$l_flags2
#define nod$l_fixflags2 nod$r_flags2union.nod$l_fixflags2
#define nod$v_has_object nod$r_flags2union.nod$r_flags2struc.nod$v_has_object
#define nod$v_offset_fixed nod$r_flags2union.nod$r_flags2struc.nod$v_offset_fixed
#define nod$v_length nod$r_flags2union.nod$r_flags2struc.nod$v_length
#define nod$v_hidim nod$r_flags2union.nod$r_flags2struc.nod$v_hidim
#define nod$v_lodim nod$r_flags2union.nod$r_flags2struc.nod$v_lodim
#define nod$v_initial nod$r_flags2union.nod$r_flags2struc.nod$v_initial
#define nod$v_base_align nod$r_flags2union.nod$r_flags2struc.nod$v_base_align
#define nod$v_offset_ref nod$r_flags2union.nod$r_flags2struc.nod$v_offset_ref
#endif		/* #if !defined(__VAXC) */
 
#endif	    /* #ifdef __NEW_STARLET */
#define NOD$K_ROOTNODE 1
#define NOD$K_COMMNODE 2
#define NOD$K_CONSTNODE 3
#define NOD$K_ENTRYNODE 4
#define NOD$K_ITEMNODE 5
#define NOD$K_MODULNODE 6
#define NOD$K_PARMNODE 7
#define NOD$K_DUMMYNODE 8
#define NOD$K_OBJNODE 9
#define NOD$K_HEADNODE 10
#define NOD$K_TYPNODE 11
#define NOD$K_ENDNODE 12
#define NOD$K_CONDNODE 13
#define NOD$K_LITNODE 14
#define NOD$K_SYMBNODE 15
#define NOD$K_READNODE 16
	
#ifdef __NEW_STARLET
typedef struct _exp$node {
    void *exp$a_next;
    __union  {
        void *exp$a_ref_node;
        void *exp$a_expr_list;
        } exp$r_union_1;
    int exp$l_value;
    short int exp$w_kind;
    short int exp$w_op;
    } EXP$NODE;
 
#if !defined(__VAXC)
#define exp$a_ref_node exp$r_union_1.exp$a_ref_node
#define exp$a_expr_list exp$r_union_1.exp$a_expr_list
#endif		/* #if !defined(__VAXC) */
 
#else	    /* __OLD_STARLET */
struct exp$node {
    void *exp$a_next;
    __union  {
        void *exp$a_ref_node;
        void *exp$a_expr_list;
        } exp$r_union_1;
    int exp$l_value;
    short int exp$w_kind;
    short int exp$w_op;
    } ;
 
#if !defined(__VAXC)
#define exp$a_ref_node exp$r_union_1.exp$a_ref_node
#define exp$a_expr_list exp$r_union_1.exp$a_expr_list
#endif		/* #if !defined(__VAXC) */
 
#endif	    /* #ifdef __NEW_STARLET */
#define MINUS_OP 1
#define ADD_OP 2
#define SUB_OP 3
#define MUL_OP 4
#define DIV_OP 5
#define SHIFT_OP 6
#define AND_OP 7
#define OR_OP 8
#define OP_VAL 1
#define INTEGER_VAL 2
#define ORIGIN_VAL 3
#define BYTEOFF_VAL 4
#define BITOFF_VAL 5
#define CONSTANT_VAL 6
#define EXPR_VAL 7
#define BITMASK_VAL 8
 
#pragma __member_alignment __restore
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __restore		 /* Restore the previously-defined required ptr size */
#endif
#ifdef __cplusplus
    }
#endif
#pragma __standard
 
#endif /* __NODEF_LOADED */
 
