#pragma once
#ifndef miscops
#define miscops
#include "bin_defs.h"
#include "binNum.h"
#include<iostream>
using namespace std;

void GetBinaryNumbers(char Selection, // The user's selection between adding and subtracting
					  BinNum& Term1, // The first term used 
					  BinNum& Term2 // The second term used 
									); // This program will get the numbers for adding and multiplying binary numbers
void GreetUsers(); // Greets users and explains what to do
char ShowMenu(); // Program will show menu and return users choice as well as error checking for invalid choices
void ShowAddition(BinNum& Term1, // The first term used
				  BinNum& Term2 // The second term used
							   ); // Show addition of binary numbers
char ShowMenu(); // Shows menu for user
void ShowMultiplication(BinNum& Term1, // The first term used
						BinNum& Term2 // The second term used
						  		     ); // Show multiplication of binary numbers

//*****************************************************************************
#endif
