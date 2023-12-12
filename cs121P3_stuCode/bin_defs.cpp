
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : bin_defs.cpp
//
// This file contains the implementation of the addBits function
//
// Programmer        : B.J. Streller AND WHO ARE YOU ???????????????
//
// Date Written      : in the past
//
// Date Last Revised : 2022 November
//
///////////////////////////////////////////////////////////////////////////////

#include "binNum.h"
#include "bin_defs.h"
#include  <cmath>
#include <iostream>
using namespace std;


char carry_bit = '0';		//initialize extern variable here

	
///////////////////////////////////////////////////////////////////////////////
//
// Function name: addBits
//
// Purpose: performs the binary "addtion" of 2 chars ( '0' and '1' )
//
// Input parameters: 2 chars repesenting the bits 0 an 1
//					 
// Output parameters: none
//
// Return Value: the sum of the 2 inputted bits, as a char
//
///////////////////////////////////////////////////////////////////////////////

char addBits(char bit1, char bit2)
{
	char sum;
	int result = static_cast<int>(bit1) + static_cast<int>(bit2) + static_cast<int>(carry_bit); // This value evalutes if we should carry or not
	if (result > 1)
	{
		carry_bit = '1';
		sum = '1';
	}
	else if (result < 1)
	{
		sum = static_cast<char>(result);
	}
	else if (result > 0)
	{
		carry_bit = '1';
		sum = '0';
	}
    return sum;

}

///////////////////////////////////////////////////////////////////////////////
