
#include "misc_ops.h"
#include<algorithm>
//*****************************************************************************
// Function Name: GreetUser
// Purpose: Greet the user and explain to them what to do
// Parameters: None
//   Input: None
//   Input & Output: None
//   Output: None
// Return Value: None
// Non-local Vairables Used:
// Functions Called: 
//
//*****************************************************************************
void GreetUsers() 
{
    cout << "Hello user. This program will add nad multiply 4 bit binary numbers" << endl << endl;
    cout << "Do you wish to add or multiply the numbers?";
}


//*****************************************************************************
// Function Name: ShowMenu 
// Purpose: Shows Menu to user and returns answer
// Parameters: None
//   Input: None
//   Input & Output: None
//   Output: None
// Return Value: Character representing answer
// Non-local Vairables Used:
// Functions Called: 
//
//*****************************************************************************
char ShowMenu() 
{
    while (true)
    {
        cout << endl << endl << "Add or Subtract";
        string Answer;
        cin >> Answer;
        std::transform(Answer.begin(), Answer.end(), Answer.begin(), tolower);  // Convert
        // Answer to lowercase
        if((Answer == "add") || (Answer == "addition"))
        {
            return 'a';
        }
        else if ((Answer == "multi") || (Answer == "multiply") ) 
        {
            return 'm';
        }
        else
        {
            cerr << endl << "Invalid Input please input either Add or Subtract";
        }
    }
}

//*****************************************************************************
// Function Name: GetBinaryNumbers
// Purpose: Gets BinNums from user and shows message based on what they selected
// Parameters: 
//      Input: Selection
//      Input & Output:
//      Output: Two BinNums to be modified passed by reference
// Return Value: None
// Non-local Variables Used: 
// Functions Called: 
//*****************************************************************************
void GetBinaryNumbers(char Selection, BinNum& Term1, BinNum& Term2) 
{
    // Displays proper message for addition
    if (Selection == 'a') 
    {
        cout << "Please input the terms you are adding : " << endl; 
        cin >> Term1;
        cin >> Term2;
    }
    // Displays proper message for subtraction
    else if (Selection == 's') 
    {
        cout << "Please input the terms you are subtracting : " << endl; 
        cin >> Term1;
        cin >> Term2;
    }
}

//*****************************************************************************
// Function Name: ShowAddition
// Purpose: Shows addition of binary numbers to user in both decimal and binary format
// Parameters
//      Input: Two BinNum objects passed by reference
//      Input & Output: None
//      Output: None
// Return Value: None
// Functions Called:
// 
//*****************************************************************************

void ShowAddition(BinNum& Term1, BinNum& Term2) 
{
    BinNum sum = Term1 + Term2;
    cout << "In binary form:    " << Term1 << " + " << Term2 << " = " << sum;
    cout << "In base 10 form:    " << Term1.bin2Base10() << " + " << Term2.bin2Base10() << " = " << sum.bin2Base10();
}


//*****************************************************************************
// Function Name: ShowMultiplication
// Purpose: Shows multiplication of binary numbers to user in both decimal and binary format
// Parameters
//      Input: Two BinNum objects passed by reference
//      Input & Output: None
//      Output: None
// Return Value: None
// Functions Called:
// 
//*****************************************************************************


void ShowMultiplication(BinNum& Term1, BinNum& Term2) 
{
    BinNum product = Term1 * Term2;
    cout << "In binary form:    " << Term1 << " x " << Term2 << " = " << product;
    cout << "In base 10 form:    " << Term1.bin2Base10() << " x ";
    cout << Term2.bin2Base10() << " = " << product.bin2Base10();
}
