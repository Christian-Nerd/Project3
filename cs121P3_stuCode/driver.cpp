
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : driver.cpp
//
// This program ??????????
//
// Programmer        : B.J. Streller AND WHO ARE YOU ???????????????
//
// Date Written      : in the past
//
// Date Last Revised :
//
///////////////////////////////////////////////////////////////////////////////



#include<iostream>
#include<iomanip>
#include "binNum.h"
#include "misc_ops.h"
using namespace::std;



int main()
{
	while (true)
	{
		GreetUsers();
		BinNum term1;
		BinNum term2;
		char choice = ShowMenu();
		if (choice == 'a')
		{
			GetBinaryNumbers(choice, term1, term2);
			ShowAddition(term1, term2);
		}

		else if (choice == 'm')
		{
			GetBinaryNumbers(choice, term1, term2);
			ShowMultiplication(term1, term2);
		}

	}
}


