
/*  A Bison parser, made from c:\marc_serra\tortoisegit_busmaster\busmaster_2.3_uds\busmaster\sources\application\ldfparser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	BEGINLOGTOKEN	258
#define	ENDLOGTOKEN	259
#define	DATETOKEN	260
#define	FULLTIME	261
#define	BASE	262
#define	TIMEMODE	263
#define	NUMBER	264
#define	DOUBLEVAL	265
#define	DATE	266
#define	TIME	267
#define	STDMSG	268
#define	EXTMSG	269
#define	STDRMSG	270
#define	EXTRMSG	271
#define	MSGDIR	272
#define	EQUAL	273
#define	LENGTHTOKEN	274
#define	BITCOUNTTOKEN	275
#define	LINEEND	276
#define	TIMESTAMPTOKEN	277
#define	STRING	278
#define	ENDOFSTATEMENT	279
#define	KBPS	280
#define	IDENTIFIER	281
#define	DECNUMBER	282
#define	HEXNUMBER	283
#define	LIN_DESCRIPTION_FILE	284
#define	LIN_PROTOCOL_VERSION	285
#define	LIN_LANGUAGE_VERSION	286
#define	LIN_SPEED	287
#define	SIGNAL_REPRESENTATION	288
#define	LOGICAL_VALUE	289
#define	FLOAT	290
#define	CONSTANT	291
#define	SIGNALS	292
#define	DIAGNOSTIC_SIGNALS	293
#define	FRAMES	294
#define	SPORADIC_FRAMES	295
#define	EVENT_TRIGGERED_FRAMES	296
#define	DIAGNOSTIC_FRAMES	297
#define	SIGNAL_ENCODING_TYPES	298
#define	PHYSICAL_VALUE	299
#define	NODE	300
#define	OPENBRACE	301
#define	CLOSEBRACE	302
#define	MASTER	303
#define	SLAVES	304
#define	COLONE	305
#define	MS	306


#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "ParserHelper.h"
extern "C" FILE *yyin, *yyout;
extern "C" int yylval;
extern "C" int yylex();
extern "C" int yyparse(void);
extern "C" char* yytext;

CParserHelper *g_obParserHelper = NULL;
void yyerror(const char *str)
{
	
	//fprintf(stderr,"error: %s\n", yytext);
}
extern "C" int yywrap()
{
	g_obParserHelper->CreateNetwork();
	return 1;
}
extern "C" int  nParseLDFFile(string strInputFile, CHANNEL_CONFIG& ouCluster)
{
	FILE *fpInputFile = fopen(strInputFile.c_str(), "r");
	if( (NULL != fpInputFile) )
	{ 
		if ( g_obParserHelper == NULL )
		{
			g_obParserHelper = new CParserHelper(ouCluster);
		}
		yyin = fpInputFile;
		yyout = NULL;
		yyparse();

		if ( g_obParserHelper != NULL )
		{
			delete g_obParserHelper;
			g_obParserHelper = NULL;
		}

	}
	return 0;
}

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		128
#define	YYFLAG		-32768
#define	YYNTBASE	52

#define YYTRANSLATE(x) ((unsigned)(x) <= 306 ? yytranslate[x] : 91)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,     9,    11,    13,    15,    17,    19,
    21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
    41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
    61,    63,    66,    71,    76,    81,    87,    90,    99,   104,
   105,   108,   111,   113,   115,   122,   130,   131,   134,   137,
   140,   142,   144,   151,   158,   162,   165,   167,   169,   174,
   179,   182,   188,   191,   193,   195,   200,   205,   208,   211,
   218,   222
};

static const short yyrhs[] = {    53,
     0,    52,    53,     0,     1,     0,    54,     0,    55,     0,
    58,     0,    59,     0,    60,     0,    61,     0,    62,     0,
    63,     0,    65,     0,    66,     0,    70,     0,    71,     0,
    72,     0,    75,     0,    76,     0,    77,     0,    80,     0,
    81,     0,    82,     0,    83,     0,    86,     0,    87,     0,
    88,     0,    89,     0,    90,     0,    47,     0,    56,     0,
    57,     0,    29,    24,     0,    29,    18,    23,    24,     0,
    30,    18,    23,    24,     0,    31,    18,    23,    24,     0,
    32,    18,    35,    25,    24,     0,    45,    46,     0,    48,
    50,    26,    35,    51,    35,    51,    24,     0,    49,    50,
    64,    24,     0,     0,    64,    26,     0,    37,    46,     0,
    67,     0,    68,     0,    26,    50,    35,    35,    64,    24,
     0,    26,    50,    35,    46,    69,    47,    64,     0,     0,
    69,    35,     0,    38,    46,     0,    39,    46,     0,    73,
     0,    74,     0,    26,    50,    35,    26,    35,    46,     0,
    26,    50,    28,    26,    35,    46,     0,    26,    35,    24,
     0,    40,    46,     0,    78,     0,    79,     0,    26,    50,
    64,    24,     0,    26,    50,    26,    24,     0,    41,    46,
     0,    26,    50,    26,    35,    64,     0,    42,    46,     0,
    84,     0,    85,     0,    26,    50,    35,    46,     0,    26,
    50,    28,    46,     0,    26,    46,     0,    43,    46,     0,
    44,    35,    35,    35,    35,    23,     0,    34,    35,    23,
     0,    33,    46,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    57,    58,    61,    63,    65,    67,    69,    71,    73,    75,
    77,    79,    81,    83,    85,    87,    89,    91,    93,    95,
    97,    99,   101,   103,   105,   107,   109,   111,   115,   120,
   122,   125,   130,   135,   140,   145,   150,   156,   162,   169,
   170,   175,   181,   183,   186,   198,   211,   212,   220,   226,
   232,   234,   237,   245,   253,   261,   266,   268,   271,   279,
   288,   293,   299,   304,   306,   309,   317,   325,   332,   337,
   343,   348
};

static const char * const yytname[] = {   "$","error","$undefined.","BEGINLOGTOKEN",
"ENDLOGTOKEN","DATETOKEN","FULLTIME","BASE","TIMEMODE","NUMBER","DOUBLEVAL",
"DATE","TIME","STDMSG","EXTMSG","STDRMSG","EXTRMSG","MSGDIR","EQUAL","LENGTHTOKEN",
"BITCOUNTTOKEN","LINEEND","TIMESTAMPTOKEN","STRING","ENDOFSTATEMENT","KBPS",
"IDENTIFIER","DECNUMBER","HEXNUMBER","LIN_DESCRIPTION_FILE","LIN_PROTOCOL_VERSION",
"LIN_LANGUAGE_VERSION","LIN_SPEED","SIGNAL_REPRESENTATION","LOGICAL_VALUE","FLOAT",
"CONSTANT","SIGNALS","DIAGNOSTIC_SIGNALS","FRAMES","SPORADIC_FRAMES","EVENT_TRIGGERED_FRAMES",
"DIAGNOSTIC_FRAMES","SIGNAL_ENCODING_TYPES","PHYSICAL_VALUE","NODE","OPENBRACE",
"CLOSEBRACE","MASTER","SLAVES","COLONE","MS","commands","command","Section_End",
"LinDescriptionFile","LinDescriptionEmpty","LinDescription","LIN_protocol_version",
"LIN_language_version","LIN_Speed","NodeDecleration","Master_Decleration","Slaves_Deleration",
"IdentifierList","Signal_Start","Signal_Def","Signal_Single","Signal_Multiple",
"ArrayVal","DigSignal_Start","Unconditional_Frame_Start","Unconditional_Frame_Def",
"Unconditional_Frame_Def_Int","Unconditional_Frame_Def_Hex","Unconditional_Frame_Signal_Map",
"Sporadic_Frame_Start","Sporadic_Frames_Dec","Sporadic_Frames_Dec_List","Sporadic_Frames_Dec_Sinlge",
"Event_Triggered_Frames","Event_Trigger_Frame_Start","Diagnostic_Frames_Dec",
"Diagnostic_Frame_Start","Diagnostic_Frame_Start_DEC","Diagnostic_Frame_Start_HEX",
"Section_Start","Signal_Encodeing_Start","Signal_Physical_Val_dec","Signal_Logical_Val_dec",
"Signal_Representation_Start",""
};
#endif

static const short yyr1[] = {     0,
    52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
    53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
    53,    53,    53,    53,    53,    53,    53,    53,    54,    55,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    64,    65,    66,    66,    67,    68,    69,    69,    70,    71,
    72,    72,    73,    74,    75,    76,    77,    77,    78,    79,
    80,    81,    82,    83,    83,    84,    85,    86,    87,    88,
    89,    90
};

static const short yyr2[] = {     0,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     2,     4,     4,     4,     5,     2,     8,     4,     0,
     2,     2,     1,     1,     6,     7,     0,     2,     2,     2,
     1,     1,     6,     6,     3,     2,     1,     1,     4,     4,
     2,     5,     2,     1,     1,     4,     4,     2,     2,     6,
     3,     2
};

static const short yydefact[] = {     0,
     3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
     0,     1,     4,     5,    30,    31,     6,     7,     8,     9,
    10,    11,    12,    13,    43,    44,    14,    15,    16,    51,
    52,    17,    18,    19,    57,    58,    20,    21,    22,    23,
    64,    65,    24,    25,    26,    27,    28,     0,    68,    40,
     0,    32,     0,     0,     0,    72,     0,    42,    49,    50,
    56,    61,    63,    69,     0,    37,     0,    40,     2,    55,
     0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
     0,     0,    60,    40,     0,    67,     0,    40,    66,    59,
    41,    33,    34,    35,     0,     0,     0,    39,    62,     0,
     0,     0,     0,    36,     0,     0,    54,    53,    45,    48,
    40,    70,     0,    46,     0,    38,     0,     0
};

static const short yydefgoto[] = {    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    84,    33,    34,    35,    36,   113,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57
};

static const short yypact[] = {    24,
-32768,   -30,   -11,    -3,     9,    17,   -10,    16,     6,    13,
    14,    32,    33,    34,    35,    47,    38,-32768,    20,    36,
     0,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    61,-32768,    48,
    64,-32768,    65,    66,    55,-32768,    68,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    57,-32768,    67,-32768,-32768,-32768,
    -7,   -22,   -24,   -16,    70,    71,    72,    73,-32768,    62,
    69,   -12,-32768,-32768,    74,-32768,    75,-32768,   -29,-32768,
-32768,-32768,-32768,-32768,    76,    77,    50,-32768,    79,    53,
    56,    51,   -26,-32768,    80,    78,-32768,-32768,-32768,-32768,
-32768,-32768,    60,    79,    82,-32768,   107,-32768
};

static const short yypgoto[] = {-32768,
    87,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   -75,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		113


static const short yytable[] = {   127,
     1,    97,    92,    95,    58,   -47,    61,   100,   120,   101,
    98,   108,    62,   101,    63,    59,    93,   -47,   109,    60,
   121,    99,   112,    96,     1,     2,    64,    94,     3,     4,
     5,     6,     7,     8,    65,    66,     9,    10,    11,    12,
    13,    14,    15,    16,    17,   124,    18,    19,    20,     2,
    67,    68,     3,     4,     5,     6,     7,     8,    69,    70,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    77,
    18,    19,    20,    81,   119,    82,   101,    71,    72,    73,
    74,    75,    83,    76,    80,    78,    85,    86,    87,    88,
    89,    90,    91,   102,   103,   104,   106,   105,   117,   114,
   116,   118,   122,   107,   101,   126,   128,    79,   110,   111,
   125,   115,   123
};

static const short yycheck[] = {     0,
     1,    26,    78,    26,    35,    35,    18,    24,    35,    26,
    35,    24,    24,    26,    18,    46,    24,    47,    94,    50,
    47,    46,    98,    46,     1,    26,    18,    35,    29,    30,
    31,    32,    33,    34,    18,    46,    37,    38,    39,    40,
    41,    42,    43,    44,    45,   121,    47,    48,    49,    26,
    35,    46,    29,    30,    31,    32,    33,    34,    46,    46,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    50,
    47,    48,    49,    26,    24,    28,    26,    46,    46,    46,
    46,    35,    35,    46,    24,    50,    23,    23,    23,    35,
    23,    35,    26,    24,    24,    24,    35,    25,    46,    24,
    51,    46,    23,    35,    26,    24,     0,    21,    35,    35,
    51,    35,    35
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */


/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 3:
{yyerrok;yyclearin; ;
    break;}
case 29:
{
		g_obParserHelper->OnSectionClosed();
	;
    break;}
case 32:
{
	//fprintf(yyout, "Description = null\n");
	;
    break;}
case 33:
{
	//fprintf(yyout, "Description = %s\n", (char*)$3);
	;
    break;}
case 34:
{
		g_obParserHelper->nOnProtocolVersion((char*)yyvsp[-1]);
	;
    break;}
case 35:
{
	//fprintf(yyout, "Launguage version = %s\n", (char*)$3 );
	;
    break;}
case 36:
{
		g_obParserHelper->nOnLinBaudRate((char*)yyvsp[-2]);
	;
    break;}
case 37:
{
		//fprintf(yyout, "Node Dec\n", (char*)$1 );
		g_obParserHelper->OnSectionStarted(SEC_NODE_DEC); 
	;
    break;}
case 38:
{
		g_obParserHelper->m_strMasterEcu = (char*)yyvsp[-5];
		//fprintf(yyout, "Master is %s\n", $3);
	;
    break;}
case 39:
{
		g_obParserHelper->m_strSlaveEcuList = g_obParserHelper->m_strIdList;
		g_obParserHelper->m_strIdList.clear();
		//fprintf(yyout, "Slaves is %s\n", $1);
	;
    break;}
case 41:
{
		g_obParserHelper->m_strIdList.push_back((char*)yyvsp[0]);
		//fprintf(yyout, "Identifier is %s\n", $2);
	;
    break;}
case 42:
{
		g_obParserHelper->OnSectionStarted(SEC_SIGNAL_DEC);
		//fprintf(yyout, "Signal is %s\n", $1);
	;
    break;}
case 45:
{
		LdfSignal ouSignal;
		ouSignal.m_strName = (char*)yyvsp[-5];
		ouSignal.m_nLength = atoi((char*)yyvsp[-3]);
		ouSignal.m_nDefVal = atoi((char*)yyvsp[-2]);
		ouSignal.m_strTxEcuList = g_obParserHelper->m_strIdList;
		g_obParserHelper->m_strIdList.clear();
		g_obParserHelper->nOnSignal(ouSignal);
		//fprintf(yyout, "Signal Definitions %s\n", $1);
	;
    break;}
case 46:
{
		LdfSignal ouSignal;
		ouSignal.m_strName = (char*)yyvsp[-6];
		ouSignal.m_nLength = atoi((char*)yyvsp[-4]);
		ouSignal.m_nDefVal = g_obParserHelper->m_unSignalVal;
		ouSignal.m_strTxEcuList = g_obParserHelper->m_strIdList;
		g_obParserHelper->m_strIdList.clear();
		g_obParserHelper->m_unSignalVal = 0;
		g_obParserHelper->nOnSignal(ouSignal);
		//fprintf(yyout, "Signal Definitions %s\n", $1);
	;
    break;}
case 48:
{
		g_obParserHelper->m_unSignalVal = g_obParserHelper->m_unSignalVal * 100;
		int nVal =  atoi((char*)yyvsp[0]);
		g_obParserHelper->m_unSignalVal = g_obParserHelper->m_unSignalVal + nVal ;
		int  i = 0;
	;
    break;}
case 49:
{
		g_obParserHelper->OnSectionStarted(SEC_DIAG_SIGNAL_DEC);
		//fprintf(yyout, "Dig signals %s\n", $1);
	;
    break;}
case 50:
{
		g_obParserHelper->OnSectionStarted(SEC_FRAME_DEC);
		//fprintf(yyout, "Frame Start %s\n", $1);
	;
    break;}
case 53:
{
		g_obParserHelper->OnSectionStarted(SEC_FRAME_DEF);
		int nId = strtoul((char*)yyvsp[-3], NULL, 10);
		g_obParserHelper->OnFrameStarted((char*)yyvsp[-5], nId, (char*)yyvsp[-2], (char*)yyvsp[-1] );
		//fprintf(yyout, "Frame are %s\n", $1);
	;
    break;}
case 54:
{
		g_obParserHelper->OnSectionStarted(SEC_FRAME_DEF);
		int nId = strtoul((char*)yyvsp[-3], NULL, 16);
		g_obParserHelper->OnFrameStarted((char*)yyvsp[-5], nId, (char*)yyvsp[-2], (char*)yyvsp[-1] );
		//fprintf(yyout, "Frame are %s\n", $1);
	;
    break;}
case 55:
{
		//Both For Diag and Unconditional Frame Signals
		g_obParserHelper->nAddSignaltoFrame((char*)yyvsp[-2],atoi((char*)yyvsp[-1]));
		//fprintf(yyout, "Frame Signal are %s\n", $1);
	;
    break;}
case 56:
{
		g_obParserHelper->OnSectionStarted(SEC_SPORADIC_FRAME_DEC);
	;
    break;}
case 59:
{
		g_obParserHelper->OnSporadicOrCompuType((CHAR*)yyvsp[-3]);
		g_obParserHelper->m_strIdList.clear();
		//Works for Signal Representation also
		//fprintf(yyout, "Sporadic_Frames Signal are %s\n", $1);
	;
    break;}
case 60:
{
		g_obParserHelper->m_strIdList.push_back((char*)yyvsp[-1]);
		g_obParserHelper->OnSporadicOrCompuType((CHAR*)yyvsp[-3]);
		g_obParserHelper->m_strIdList.clear();
		//Works for Signal Representation also
		//fprintf(yyout, "Sporadic_Frames Signal are %s\n", $1);
	;
    break;}
case 61:
{
		g_obParserHelper->OnSectionStarted(SEC_EVENT_TRIGGER_FRAME_DEC);
	;
    break;}
case 62:
{
		//fprintf(yyout, "Event_Trigger_Frames are %s\n", $1);
	;
    break;}
case 63:
{
		g_obParserHelper->OnSectionStarted(SEC_DIAG_FRAME_DEC);
	;
    break;}
case 66:
{
		int nId = strtoul((char*)yyvsp[-1], NULL, 10);
		g_obParserHelper->OnFrameStarted((char*)yyvsp[-3], nId, "", "" );
		//fprintf(yyout, "Diag Frame is %s\n", $1);
		g_obParserHelper->OnSectionStarted(SEC_DIAG_FRAME_DEF);
	;
    break;}
case 67:
{
		int nId = strtoul((char*)yyvsp[-1], NULL, 16);
		g_obParserHelper->OnFrameStarted((char*)yyvsp[-3], nId, "", "" );
		//fprintf(yyout, "Diag Frame is %s\n", $1);
		g_obParserHelper->OnSectionStarted(SEC_DIAG_FRAME_DEF);
	;
    break;}
case 68:
{
		//Node Attributes, Signal Encoding
		g_obParserHelper->m_strLastId = (char*)yyvsp[-1];
		//fprintf(yyout, "Section Starts %s\n", $1);
	;
    break;}
case 69:
{
		g_obParserHelper->OnSectionStarted(SEC_SIGNAL_ENCODING_DEC);
	;
    break;}
case 70:
{
		g_obParserHelper->nOnSignalEncoding(atoi((char*)yyvsp[-4]),atoi((char*)yyvsp[-3]),atof((char*)yyvsp[-2]),atof((char*)yyvsp[-1]),(char*)yyvsp[0]) ;
		//fprintf(yyout, "Signal Phyical Val%s\n", $1);
	;
    break;}
case 71:
{
		//fprintf(yyout, "Signal Logical Val%s\n", $1);
	;
    break;}
case 72:
{
		g_obParserHelper->OnSectionStarted(SEC_SIGNAL_REP_DEC);
	;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */


  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
