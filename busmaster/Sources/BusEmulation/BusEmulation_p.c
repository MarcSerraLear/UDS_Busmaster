

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Apr 09 11:28:34 2014
 */
/* Compiler settings for BusEmulation.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "BusEmulation.h"

#define TYPE_FORMAT_STRING_SIZE   1089                              
#define PROC_FORMAT_STRING_SIZE   307                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _BusEmulation_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } BusEmulation_MIDL_TYPE_FORMAT_STRING;

typedef struct _BusEmulation_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } BusEmulation_MIDL_PROC_FORMAT_STRING;

typedef struct _BusEmulation_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } BusEmulation_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const BusEmulation_MIDL_TYPE_FORMAT_STRING BusEmulation__MIDL_TypeFormatString;
extern const BusEmulation_MIDL_PROC_FORMAT_STRING BusEmulation__MIDL_ProcFormatString;
extern const BusEmulation_MIDL_EXPR_FORMAT_STRING BusEmulation__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimENG_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISimENG_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const BusEmulation_MIDL_PROC_FORMAT_STRING BusEmulation__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SendMessage */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x9c ),	/* 156 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientID */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter CurrDataLength */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pbCurrDataByte */

/* 36 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterClient */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 58 */	NdrFcShort( 0xc ),	/* 12 */
/* 60 */	NdrFcShort( 0x22 ),	/* 34 */
/* 62 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 64 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 66 */	NdrFcShort( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Bus */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter MaxDataLen */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ClientID */

/* 84 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter PipeName */

/* 90 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Parameter EventName */

/* 96 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 100 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterClient */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x9 ),	/* 9 */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	NdrFcShort( 0x6 ),	/* 6 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 124 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientID */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ConnectNode */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xa ),	/* 10 */
/* 152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 154 */	NdrFcShort( 0x6 ),	/* 6 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientID */

/* 168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisconnectNode */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0xb ),	/* 11 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x6 ),	/* 6 */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientID */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimeModeMapping */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xc ),	/* 12 */
/* 224 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8c ),	/* 140 */
/* 230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter CurrSysTime */

/* 240 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter TimeStamp */

/* 246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter lQueryTickCount */

/* 252 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 256 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentStatus */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0xd ),	/* 13 */
/* 272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x6 ),	/* 6 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 280 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ClientID */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pNodeStatus */

/* 294 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const BusEmulation_MIDL_TYPE_FORMAT_STRING BusEmulation__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  4 */	NdrFcShort( 0x80 ),	/* 128 */
/*  6 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/*  8 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 10 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 14 */	NdrFcShort( 0x1c ),	/* Offset= 28 (42) */
/* 16 */	
			0x13, 0x0,	/* FC_OP */
/* 18 */	NdrFcShort( 0xe ),	/* Offset= 14 (32) */
/* 20 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 22 */	NdrFcShort( 0x2 ),	/* 2 */
/* 24 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 26 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 28 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (20) */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0xffde ),	/* Offset= -34 (16) */
/* 52 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 58 */	NdrFcShort( 0x10 ),	/* 16 */
/* 60 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 62 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 64 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 66 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 68 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 80 */	NdrFcShort( 0x8 ),	/* 8 */
/* 82 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 84 */	
			0x11, 0x0,	/* FC_RP */
/* 86 */	NdrFcShort( 0x3e0 ),	/* Offset= 992 (1078) */
/* 88 */	
			0x13, 0x0,	/* FC_OP */
/* 90 */	NdrFcShort( 0x3c8 ),	/* Offset= 968 (1058) */
/* 92 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 94 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 96 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 98 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 104 */	NdrFcShort( 0x2f ),	/* 47 */
/* 106 */	NdrFcLong( 0x14 ),	/* 20 */
/* 110 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 112 */	NdrFcLong( 0x3 ),	/* 3 */
/* 116 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 118 */	NdrFcLong( 0x11 ),	/* 17 */
/* 122 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 124 */	NdrFcLong( 0x2 ),	/* 2 */
/* 128 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 130 */	NdrFcLong( 0x4 ),	/* 4 */
/* 134 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 136 */	NdrFcLong( 0x5 ),	/* 5 */
/* 140 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 142 */	NdrFcLong( 0xb ),	/* 11 */
/* 146 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 148 */	NdrFcLong( 0xa ),	/* 10 */
/* 152 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 154 */	NdrFcLong( 0x6 ),	/* 6 */
/* 158 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (78) */
/* 160 */	NdrFcLong( 0x7 ),	/* 7 */
/* 164 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 166 */	NdrFcLong( 0x8 ),	/* 8 */
/* 170 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (16) */
/* 172 */	NdrFcLong( 0xd ),	/* 13 */
/* 176 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (390) */
/* 178 */	NdrFcLong( 0x9 ),	/* 9 */
/* 182 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (408) */
/* 184 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 188 */	NdrFcShort( 0xee ),	/* Offset= 238 (426) */
/* 190 */	NdrFcLong( 0x24 ),	/* 36 */
/* 194 */	NdrFcShort( 0x316 ),	/* Offset= 790 (984) */
/* 196 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 200 */	NdrFcShort( 0x310 ),	/* Offset= 784 (984) */
/* 202 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 206 */	NdrFcShort( 0x30e ),	/* Offset= 782 (988) */
/* 208 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 212 */	NdrFcShort( 0x30c ),	/* Offset= 780 (992) */
/* 214 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 218 */	NdrFcShort( 0x30a ),	/* Offset= 778 (996) */
/* 220 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 224 */	NdrFcShort( 0x308 ),	/* Offset= 776 (1000) */
/* 226 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 230 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1004) */
/* 232 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 236 */	NdrFcShort( 0x304 ),	/* Offset= 772 (1008) */
/* 238 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 242 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (992) */
/* 244 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 248 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (996) */
/* 250 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 254 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1012) */
/* 256 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 260 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1008) */
/* 262 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 266 */	NdrFcShort( 0x2ee ),	/* Offset= 750 (1016) */
/* 268 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 272 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (1020) */
/* 274 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 278 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1024) */
/* 280 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 284 */	NdrFcShort( 0x2e8 ),	/* Offset= 744 (1028) */
/* 286 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 290 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (1032) */
/* 292 */	NdrFcLong( 0x10 ),	/* 16 */
/* 296 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 298 */	NdrFcLong( 0x12 ),	/* 18 */
/* 302 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 304 */	NdrFcLong( 0x13 ),	/* 19 */
/* 308 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 310 */	NdrFcLong( 0x15 ),	/* 21 */
/* 314 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 316 */	NdrFcLong( 0x16 ),	/* 22 */
/* 320 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 322 */	NdrFcLong( 0x17 ),	/* 23 */
/* 326 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 328 */	NdrFcLong( 0xe ),	/* 14 */
/* 332 */	NdrFcShort( 0x2c4 ),	/* Offset= 708 (1040) */
/* 334 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 338 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (1050) */
/* 340 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 344 */	NdrFcShort( 0x2c6 ),	/* Offset= 710 (1054) */
/* 346 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 350 */	NdrFcShort( 0x282 ),	/* Offset= 642 (992) */
/* 352 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 356 */	NdrFcShort( 0x280 ),	/* Offset= 640 (996) */
/* 358 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 362 */	NdrFcShort( 0x27e ),	/* Offset= 638 (1000) */
/* 364 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 368 */	NdrFcShort( 0x274 ),	/* Offset= 628 (996) */
/* 370 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 374 */	NdrFcShort( 0x26e ),	/* Offset= 622 (996) */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* Offset= 0 (380) */
/* 382 */	NdrFcLong( 0x1 ),	/* 1 */
/* 386 */	NdrFcShort( 0x0 ),	/* Offset= 0 (386) */
/* 388 */	NdrFcShort( 0xffff ),	/* Offset= -1 (387) */
/* 390 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 404 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 406 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 408 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 410 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 420 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 426 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	
			0x13, 0x0,	/* FC_OP */
/* 432 */	NdrFcShort( 0x216 ),	/* Offset= 534 (966) */
/* 434 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 436 */	NdrFcShort( 0x18 ),	/* 24 */
/* 438 */	NdrFcShort( 0xa ),	/* 10 */
/* 440 */	NdrFcLong( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0x5a ),	/* Offset= 90 (534) */
/* 446 */	NdrFcLong( 0xd ),	/* 13 */
/* 450 */	NdrFcShort( 0x7e ),	/* Offset= 126 (576) */
/* 452 */	NdrFcLong( 0x9 ),	/* 9 */
/* 456 */	NdrFcShort( 0x9e ),	/* Offset= 158 (614) */
/* 458 */	NdrFcLong( 0xc ),	/* 12 */
/* 462 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (662) */
/* 464 */	NdrFcLong( 0x24 ),	/* 36 */
/* 468 */	NdrFcShort( 0x124 ),	/* Offset= 292 (760) */
/* 470 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 474 */	NdrFcShort( 0x140 ),	/* Offset= 320 (794) */
/* 476 */	NdrFcLong( 0x10 ),	/* 16 */
/* 480 */	NdrFcShort( 0x15a ),	/* Offset= 346 (826) */
/* 482 */	NdrFcLong( 0x2 ),	/* 2 */
/* 486 */	NdrFcShort( 0x174 ),	/* Offset= 372 (858) */
/* 488 */	NdrFcLong( 0x3 ),	/* 3 */
/* 492 */	NdrFcShort( 0x18e ),	/* Offset= 398 (890) */
/* 494 */	NdrFcLong( 0x14 ),	/* 20 */
/* 498 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (922) */
/* 500 */	NdrFcShort( 0xffff ),	/* Offset= -1 (499) */
/* 502 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 506 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 512 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 514 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 516 */	NdrFcShort( 0x4 ),	/* 4 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x1 ),	/* 1 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	0x13, 0x0,	/* FC_OP */
/* 528 */	NdrFcShort( 0xfe10 ),	/* Offset= -496 (32) */
/* 530 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 532 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 534 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 538 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 540 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 542 */	NdrFcShort( 0x4 ),	/* 4 */
/* 544 */	NdrFcShort( 0x4 ),	/* 4 */
/* 546 */	0x11, 0x0,	/* FC_RP */
/* 548 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (502) */
/* 550 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 552 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 554 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 564 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 568 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0xff4a ),	/* Offset= -182 (390) */
/* 574 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 576 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x6 ),	/* Offset= 6 (588) */
/* 584 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 586 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 588 */	
			0x11, 0x0,	/* FC_RP */
/* 590 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (554) */
/* 592 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 602 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 606 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 610 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (408) */
/* 612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 614 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x6 ),	/* Offset= 6 (626) */
/* 622 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 624 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 626 */	
			0x11, 0x0,	/* FC_RP */
/* 628 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (592) */
/* 630 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 640 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 642 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 644 */	NdrFcShort( 0x4 ),	/* 4 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	0x13, 0x0,	/* FC_OP */
/* 656 */	NdrFcShort( 0x192 ),	/* Offset= 402 (1058) */
/* 658 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x6 ),	/* Offset= 6 (674) */
/* 670 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 672 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 674 */	
			0x11, 0x0,	/* FC_RP */
/* 676 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (630) */
/* 678 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 680 */	NdrFcLong( 0x2f ),	/* 47 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 690 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 696 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0x1 ),	/* 1 */
/* 700 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 702 */	NdrFcShort( 0x4 ),	/* 4 */
/* 704 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 706 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0xa ),	/* Offset= 10 (724) */
/* 716 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 718 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 720 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (678) */
/* 722 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 724 */	
			0x13, 0x0,	/* FC_OP */
/* 726 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (696) */
/* 728 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 732 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 738 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 740 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	0x13, 0x0,	/* FC_OP */
/* 754 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (708) */
/* 756 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x6 ),	/* Offset= 6 (772) */
/* 768 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x11, 0x0,	/* FC_RP */
/* 774 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (728) */
/* 776 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 780 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 782 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x10 ),	/* 16 */
/* 786 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 788 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 790 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (776) */
			0x5b,		/* FC_END */
/* 794 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x18 ),	/* 24 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0xa ),	/* Offset= 10 (810) */
/* 802 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 804 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 806 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (782) */
/* 808 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 810 */	
			0x11, 0x0,	/* FC_RP */
/* 812 */	NdrFcShort( 0xfefe ),	/* Offset= -258 (554) */
/* 814 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 818 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 824 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 826 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 832 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 838 */	0x13, 0x0,	/* FC_OP */
/* 840 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (814) */
/* 842 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 844 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 846 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 848 */	NdrFcShort( 0x2 ),	/* 2 */
/* 850 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 856 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 858 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 864 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 866 */	NdrFcShort( 0x4 ),	/* 4 */
/* 868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 870 */	0x13, 0x0,	/* FC_OP */
/* 872 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (846) */
/* 874 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 876 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 878 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x4 ),	/* 4 */
/* 882 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 888 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 890 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	NdrFcShort( 0x4 ),	/* 4 */
/* 902 */	0x13, 0x0,	/* FC_OP */
/* 904 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (878) */
/* 906 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 908 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 910 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 920 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 922 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	0x13, 0x0,	/* FC_OP */
/* 936 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (910) */
/* 938 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 942 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 946 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 950 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 956 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 958 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 960 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 962 */	NdrFcShort( 0xffec ),	/* Offset= -20 (942) */
/* 964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 966 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 968 */	NdrFcShort( 0x28 ),	/* 40 */
/* 970 */	NdrFcShort( 0xffec ),	/* Offset= -20 (950) */
/* 972 */	NdrFcShort( 0x0 ),	/* Offset= 0 (972) */
/* 974 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 976 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 978 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 980 */	NdrFcShort( 0xfdde ),	/* Offset= -546 (434) */
/* 982 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 984 */	
			0x13, 0x0,	/* FC_OP */
/* 986 */	NdrFcShort( 0xfeea ),	/* Offset= -278 (708) */
/* 988 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 990 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 992 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 994 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 996 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 998 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1000 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1002 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1004 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1006 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1010 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1012 */	
			0x13, 0x0,	/* FC_OP */
/* 1014 */	NdrFcShort( 0xfc58 ),	/* Offset= -936 (78) */
/* 1016 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1018 */	NdrFcShort( 0xfc16 ),	/* Offset= -1002 (16) */
/* 1020 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1022 */	NdrFcShort( 0xfd88 ),	/* Offset= -632 (390) */
/* 1024 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1026 */	NdrFcShort( 0xfd96 ),	/* Offset= -618 (408) */
/* 1028 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1030 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (426) */
/* 1032 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1034 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1036) */
/* 1036 */	
			0x13, 0x0,	/* FC_OP */
/* 1038 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1058) */
/* 1040 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1044 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1046 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1048 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1050 */	
			0x13, 0x0,	/* FC_OP */
/* 1052 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1040) */
/* 1054 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1056 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1060 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1064) */
/* 1066 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1068 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1070 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1072 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1074 */	NdrFcShort( 0xfc2a ),	/* Offset= -982 (92) */
/* 1076 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1078 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1082 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0xfc1a ),	/* Offset= -998 (88) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISimENG, ver. 0.0,
   GUID={0xE185AAAD,0x55DF,0x42DE,{0xA0,0x34,0x1E,0xAA,0xBE,0x95,0xA8,0xF3}} */

#pragma code_seg(".orpc")
static const unsigned short ISimENG_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    108,
    144,
    180,
    216,
    264
    };

static const MIDL_STUBLESS_PROXY_INFO ISimENG_ProxyInfo =
    {
    &Object_StubDesc,
    BusEmulation__MIDL_ProcFormatString.Format,
    &ISimENG_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISimENG_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BusEmulation__MIDL_ProcFormatString.Format,
    &ISimENG_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _ISimENGProxyVtbl = 
{
    &ISimENG_ProxyInfo,
    &IID_ISimENG,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISimENG::SendMessage */ ,
    (void *) (INT_PTR) -1 /* ISimENG::RegisterClient */ ,
    (void *) (INT_PTR) -1 /* ISimENG::UnregisterClient */ ,
    (void *) (INT_PTR) -1 /* ISimENG::ConnectNode */ ,
    (void *) (INT_PTR) -1 /* ISimENG::DisconnectNode */ ,
    (void *) (INT_PTR) -1 /* ISimENG::GetTimeModeMapping */ ,
    (void *) (INT_PTR) -1 /* ISimENG::GetCurrentStatus */
};


static const PRPC_STUB_FUNCTION ISimENG_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ISimENGStubVtbl =
{
    &IID_ISimENG,
    &ISimENG_ServerInfo,
    14,
    &ISimENG_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    BusEmulation__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _BusEmulation_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISimENGProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _BusEmulation_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISimENGStubVtbl,
    0
};

PCInterfaceName const _BusEmulation_InterfaceNamesList[] = 
{
    "ISimENG",
    0
};

const IID *  const _BusEmulation_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _BusEmulation_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _BusEmulation, pIID, n)

int __stdcall _BusEmulation_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_BusEmulation_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo BusEmulation_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _BusEmulation_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _BusEmulation_StubVtblList,
    (const PCInterfaceName * ) & _BusEmulation_InterfaceNamesList,
    (const IID ** ) & _BusEmulation_BaseIIDList,
    & _BusEmulation_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

