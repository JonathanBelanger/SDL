#pragma	module	SDLDTR	"SDLDTR EV1-41"
#define	__MODULE__	"SDLDTR"


#include	<starlet.h>
#include	<descrip.h>
#include	<lib$routines.h>

#include	"miscellany.h"
#include	"nodef.h"
#include	"tokdef.h"
#include	"typdef.h"


const int	true	= 1, false = 0;
const unsigned char lang_ext [] = ".dtr";


const	unsigned char *bitequiv [] = {
        "USAGE IS BYTE ",
        "USAGE IS WORD ",
        "USAGE IS BYTE OCCURS 3 TIMES ",
        "USAGE IS LONG ",
        "USAGE IS BYTE OCCURS 5 TIMES ",
        "USAGE IS BYTE OCCURS 6 TIMES ",
        "USAGE IS BYTE OCCURS 7 TIMES ",
        "USAGE IS QUAD "};

unsigned char	*typ_tbl[TYP$K_MAXIDX];

int	sdl$output	(
	struct dsc$descriptor	*out_file,
	struct dsc$descriptor	*def_filename,
		void		*sdl$_shr_data
			)
{
int	status;

	/*
	** Initalize DATATRIEVE Data Types table of equivalence
	*/
        typ_tbl[TYP$K_ADDRESS]	=	"USAGE IS LONG";
        typ_tbl[TYP$K_BYTE]	=	"USAGE IS BYTE";
        typ_tbl[TYP$K_CHAR]	=	"PIC X";
        typ_tbl[TYP$K_BOOLEAN]	=	"USAGE IS BYTE";
        typ_tbl[TYP$K_DECIMAL]	=	"USAGE IS PACKED";
        typ_tbl[TYP$K_DOUBLE]	=	"USAGE IS DOUBLE";
        typ_tbl[TYP$K_FLOAT]	=	"USAGE IS REAL";
        typ_tbl[TYP$K_GRAND]	=	"USAGE IS DOUBLE";
        typ_tbl[TYP$K_HUGE]	=	"USAGE IS QUAD";
        typ_tbl[TYP$K_DOUBLE_COMPLEX]=	"USAGE IS DOUBLE OCCURS 2 TIMES";
        typ_tbl[TYP$K_FLOAT_COMPLEX]=	"USAGE IS REAL OCCURS 2 TIMES";
        typ_tbl[TYP$K_GRAND_COMPLEX]=	"USAGE IS DOUBLE OCCURS 2 TIMES";
        typ_tbl[TYP$K_HUGE_COMPLEX]=	"USAGE IS QUAD OCCURS 2 TIMES";
        typ_tbl[TYP$K_LONGWORD]	=	"USAGE IS LONG";
        typ_tbl[TYP$K_OCTAWORD]	=	"USAGE IS QUAD";
        typ_tbl[TYP$K_QUADWORD]	=	"USAGE IS QUAD";
        typ_tbl[TYP$K_VIELD]	=	"";
        typ_tbl[TYP$K_WORD]	=	"USAGE IS WORD";
        typ_tbl[TYP$K_STRUCTURE]=	"";
        typ_tbl[TYP$K_UNION]	=	"";
        typ_tbl[TYP$K_ANY]	=	"";

	if ( out_file || *out_file )
		return	call errmsg (sdl$_shr_data, sdl$_outfilopn,,(sdl$gt_filename));

}
