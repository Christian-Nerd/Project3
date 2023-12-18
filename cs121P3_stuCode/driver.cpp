
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
// Date Last Revised : 12/18/23
//
///////////////////////////////////////////////////////////////////////////////



#include<iostream>
#include<iomanip>
#include "binNum.h"
#include "misc_ops.h"
using namespace::std;



int main()
{
	bool Still = true; // Represents user choice
	
	while (Still)
	{
		GreetUsers();
		BinNum term1; // First term
		BinNum term2; // Second Term
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
		cout << endl << "Do you want to continue y/n";
		char KeepGoing = ' '; // Represents if user wants to continue
		cin >> choice; // Gets user choice
		switch (tolower(KeepGoing)) 
		{
			case 'y':
				continue;
			case 'n':
				Still = false; 
				break;
					
		}
	}
}


