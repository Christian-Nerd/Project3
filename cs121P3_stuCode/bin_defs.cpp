
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
// Date Last Revised : 12/18/23
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
	int B1 = (int)bit1; // int version of bit 1 
	int B2 = (int)bit2; // int version of bit 2
	int B1xorB2 = B1 ^ B2; // bit1 xor bit2
	int B1andB2 = B1 & B2; // bit1 and bit2
	int CarryBit = (int)carry_bit; // ineger version of carry bit
	// Full adder
	char sum = static_cast<char>(B1xorB2 ^ CarryBit); // Gets sum
	carry_bit = static_cast<char>(B1andB2 | (B1xorB2 & CarryBit)); // Gets carry bit
    return sum;

}

///////////////////////////////////////////////////////////////////////////////
