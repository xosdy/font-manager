//
// The Fontaine Font Analysis Project 
// 
// Copyright (c) 2009 by Edward H. Trager
// All Rights Reserved
// 
// Released under the GNU GPL version 2.0 or later.
//     


//
// CentralEuropean.h
//

#ifndef ORTHOGRAPHY_DATA
#include "../OrthographyData.h"
#endif

#ifndef CENTRAL_EUROPEAN
#define CENTRAL_EUROPEAN

namespace CentralEuropean{

//
// Unicode values 
//
UINT32 values[]={
	0x00C1,	// LATIN CAPITAL LETTER A WITH ACUTE
	0x00C2,	// LATIN CAPITAL LETTER A WITH CIRCUMFLEX
	0x00C4,	// LATIN CAPITAL LETTER A WITH DIAERESIS
	0x00C7,	// LATIN CAPITAL LETTER C WITH CEDILLA
	0x00C9,	// LATIN CAPITAL LETTER E WITH ACUTE
	0x00CB,	// LATIN CAPITAL LETTER E WITH DIAERESIS
	0x00CD,	// LATIN CAPITAL LETTER I WITH ACUTE
	0x00CE,	// LATIN CAPITAL LETTER I WITH CIRCUMFLEX
	0x00D3,	// LATIN CAPITAL LETTER O WITH ACUTE
	0x00D4,	// LATIN CAPITAL LETTER O WITH CIRCUMFLEX
	0x00D6,	// LATIN CAPITAL LETTER O WITH DIAERESIS
	0x00DA,	// LATIN CAPITAL LETTER U WITH ACUTE
	0x00DC,	// LATIN CAPITAL LETTER U WITH DIAERESIS
	0x00DD,	// LATIN CAPITAL LETTER Y WITH ACUTE
	0x00DF,	// LATIN SMALL LETTER SHARP S
	0x00E1,	// LATIN SMALL LETTER A WITH ACUTE
	0x00E2,	// LATIN SMALL LETTER A WITH CIRCUMFLEX
	0x00E4,	// LATIN SMALL LETTER A WITH DIAERESIS
	0x00E7,	// LATIN SMALL LETTER C WITH CEDILLA
	0x00E9,	// LATIN SMALL LETTER E WITH ACUTE
	0x00EB,	// LATIN SMALL LETTER E WITH DIAERESIS
	0x00ED,	// LATIN SMALL LETTER I WITH ACUTE
	0x00EE,	// LATIN SMALL LETTER I WITH CIRCUMFLEX
	0x00F3,	// LATIN SMALL LETTER O WITH ACUTE
	0x00F4,	// LATIN SMALL LETTER O WITH CIRCUMFLEX
	0x00F6,	// LATIN SMALL LETTER O WITH DIAERESIS
	0x00FA,	// LATIN SMALL LETTER U WITH ACUTE
	0x00FC,	// LATIN SMALL LETTER U WITH DIAERESIS
	0x00FD,	// LATIN SMALL LETTER Y WITH ACUTE
	0x0102,	// LATIN CAPITAL LETTER A WITH BREVE
	0x0103,	// LATIN SMALL LETTER A WITH BREVE
	0x0104,	// LATIN CAPITAL LETTER A WITH OGONEK
	0x0105,	// LATIN SMALL LETTER A WITH OGONEK
	0x0106,	// LATIN CAPITAL LETTER C WITH ACUTE
	0x0107,	// LATIN SMALL LETTER C WITH ACUTE
	0x010C,	// LATIN CAPITAL LETTER C WITH CARON
	0x010D,	// LATIN SMALL LETTER C WITH CARON
	0x010E,	// LATIN CAPITAL LETTER D WITH CARON
	0x010F,	// LATIN SMALL LETTER D WITH CARON
	0x0110,	// LATIN CAPITAL LETTER D WITH STROKE
	0x0111,	// LATIN SMALL LETTER D WITH STROKE
	0x0118,	// LATIN CAPITAL LETTER E WITH OGONEK
	0x0119,	// LATIN SMALL LETTER E WITH OGONEK
	0x011A,	// LATIN CAPITAL LETTER E WITH CARON
	0x011B,	// LATIN SMALL LETTER E WITH CARON
	0x0139,	// LATIN CAPITAL LETTER L WITH ACUTE
	0x013A,	// LATIN SMALL LETTER L WITH ACUTE
	0x013D,	// LATIN CAPITAL LETTER L WITH CARON
	0x013E,	// LATIN SMALL LETTER L WITH CARON
	0x0141,	// LATIN CAPITAL LETTER L WITH STROKE
	0x0142,	// LATIN SMALL LETTER L WITH STROKE
	0x0143,	// LATIN CAPITAL LETTER N WITH ACUTE
	0x0144,	// LATIN SMALL LETTER N WITH ACUTE
	0x0147,	// LATIN CAPITAL LETTER N WITH CARON
	0x0148,	// LATIN SMALL LETTER N WITH CARON
	0x0150,	// LATIN CAPITAL LETTER O WITH DOUBLE ACUTE
	0x0151,	// LATIN SMALL LETTER O WITH DOUBLE ACUTE
	0x0154,	// LATIN CAPITAL LETTER R WITH ACUTE
	0x0155,	// LATIN SMALL LETTER R WITH ACUTE
	0x0158,	// LATIN CAPITAL LETTER R WITH CARON
	0x0159,	// LATIN SMALL LETTER R WITH CARON
	0x015A,	// LATIN CAPITAL LETTER S WITH ACUTE
	0x015B,	// LATIN SMALL LETTER S WITH ACUTE
	0x015E,	// LATIN CAPITAL LETTER S WITH CEDILLA
	0x015F,	// LATIN SMALL LETTER S WITH CEDILLA
	0x0160,	// LATIN CAPITAL LETTER S WITH CARON
	0x0161,	// LATIN SMALL LETTER S WITH CARON
	0x0162,	// LATIN CAPITAL LETTER T WITH CEDILLA
	0x0163,	// LATIN SMALL LETTER T WITH CEDILLA
	0x0164,	// LATIN CAPITAL LETTER T WITH CARON
	0x0165,	// LATIN SMALL LETTER T WITH CARON
	0x016E,	// LATIN CAPITAL LETTER U WITH RING ABOVE
	0x016F,	// LATIN SMALL LETTER U WITH RING ABOVE
	0x0170,	// LATIN CAPITAL LETTER U WITH DOUBLE ACUTE
	0x0171,	// LATIN SMALL LETTER U WITH DOUBLE ACUTE
	0x0179,	// LATIN CAPITAL LETTER Z WITH ACUTE
	0x017A,	// LATIN SMALL LETTER Z WITH ACUTE
	0x017B,	// LATIN CAPITAL LETTER Z WITH DOT ABOVE
	0x017C,	// LATIN SMALL LETTER Z WITH DOT ABOVE
	0x017D,	// LATIN CAPITAL LETTER Z WITH CARON
	0x017E,	// LATIN SMALL LETTER Z WITH CARON
	END_OF_DATA
};

//
// Sample sentences
// 
const char *sentences[]={
	"Pchnąć w tę łódź jeża lub ośm skrzyń fig.",
	"Gojazni đačić s biciklom drži hmelj i finu vatu u džepu nošnje.",
	"Koń i żółw grali w kości z piękną ćmą u źródła.",
	END_OF_DATA
};


//
// 
//
OrthographyData data={
	"Central European",
	"Central European",
	0x010C, // LATIN CAPITAL LETTER C WITH CARON
	values,
	"ÂâĄąÇçĐđĹĺűż",
	sentences
};

const OrthographyData *pData = &data;

}; // end of namespace

#endif