
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : driver.cpp
//
// This program ??????????
//
// Programmer        : B.J. Streller Trey Davis
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
		// Greet users and get their choice
		GreetUsers();
		BinNum term1; // First term
		BinNum term2; // Second Term
		char choice = ShowMenu(); // What the user chooses from the menu
		// Act on the choices a user makes
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
		cout << endl << "Do you want to continue y/n : ";
		char KeepGoing = ' '; // Represents if user wants to continue
		cin >> KeepGoing; // Gets user choice
		if (tolower(KeepGoing) == 'y')
		{
			cout << endl; // e pAdds new line to buffer to make next run of the program look nice
			continue;
		}

		else if (tolower(KeepGoing) == 'n')
		{
			Still = false;
		}
	}
}


