
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : bin_defs.h
//
// This file contains "definitions" for use by our BinNum class
//
// Programmer        : B.J. Streller
//
// Date Written      : in the past
//
// Date Last Revised : 2022 November
//
///////////////////////////////////////////////////////////////////////////////


#ifndef BIN_DEFS_H_
#define BIN_DEFS_H_

const int SIZE = 4;					//the size of our binary number
const char bit_0 = '0';				//define the char 0 as the 0 bit
const char bit_1 = '1';				//define the char 1 as the 1 bit			
extern char carry_bit;				//define the carry bit; needed for addition
									//must be extern to be seen by "others"



char addBits( char bit1, char bit2 );	//helper function to add bits




#endif


