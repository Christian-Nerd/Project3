
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : binNum.cpp
//
// This file is the implementation of the binNum class
//
// Programmer        : B.J. Streller AND WHO ARE YOU ???????????????
//
// Date Written      : in the past
//
// Date Last Revised : 2022 November 
//
///////////////////////////////////////////////////////////////////////////////


#include "binNum.h"
#include  <iostream>
#include  <cmath>
using namespace std;

#include "bin_defs.h"



///////////////////////////////////////////////////////////////////////////////
//
// Function name: BinNum()
//
// Purpose: consructor for BinNum class. Initializes bin num of SIZE bits to 0

//
// Input parameters: none
//					 
//
// Output parameters: none
//
// Return Value: a BinNum object initialized to 0
//
///////////////////////////////////////////////////////////////////////////////

BinNum::BinNum()
{
	//initialize the array
    for (int i = 0; i < 3; i++) 
    {
        the_num[0] = bit_0; // Initilizes character array to be 0000
    }
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: BinNum( int num ) 
//
// Purpose: consructor for BinNum class. Initializes bin num of SIZE bits to 
//			input num	
//
// Input parameters: an int, treated as a bin num ( i.e only 0's and 1's),
//					 of length SIZE
//					 
// Output parameters: none
//
// Return Value: a BinNum object initialized to the value of input num
//
///////////////////////////////////////////////////////////////////////////////

BinNum::BinNum( int num ) : BinNum()
{
    //cout << " hi from constructor BinNum( int num ) remove this when done \n";
    //do sone math to convert num to binary
    // Algorithm to convert decimal to binary
    for(int i = 0; i < 3 && num != 0; i++, num /= 2)
    {
        if (num % 2 != 0)
            this[i] = '1';
        else
            this[i] = '0';
    }
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: BinNum( const BinNum &initBinNum )
//
// Purpose: copy consructor for BinNum class. Creates a BinNum object which 
//			is a copy of the inputted BinNum objecdt
//
// Input parameters: a BinNum object of which copy of will be made
//					 
// Output parameters: none
//
// Return Value: a new BinNum object which is a copy of the input arg
//
///////////////////////////////////////////////////////////////////////////////

BinNum::BinNum( const BinNum &initBinNum ): BinNum()
{
    // cout << " calling copy constructor \n";
    for (int i = 0; i < SIZE; i++)
        (this->the_num[i]) = initBinNum.the_num[i];

}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: operator =
//
// Purpose: overloaded assignment operator for BinNum class.
//
// Input parameters: a BinNum object which will be assigned to the left side
//			         =; i.e. this
//					 
// Output parameters: none
//
// Return Value: *this, the left hand side, which now has the "value" of 
//				 the input
//
///////////////////////////////////////////////////////////////////////////////

BinNum&  BinNum::operator = ( const BinNum &initBinNum )
{
    if (this == &initBinNum)
        return *this;   //avoid self assignment

    //loop to assign array elements
    for (int i = 0; i < 3; i++)
        this->the_num[i] = initBinNum.the_num[i];
    return *this;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: operator +
//
// Purpose: overloaded + operator for BinNum class.
//
// Input parameters: a BinNum object, b1, which is the second addend in +
//			        					 
// Output parameters: none
//
// Return Value: a BinNum object which is the sum of the calling object, 
//				 this, and b1
//
///////////////////////////////////////////////////////////////////////////////

BinNum BinNum::operator+ ( BinNum &b1 )
{
    BinNum temp;

   //loop to add array elements- use addBits function
	for (int i = 0; i < 3; i++)
	{
		temp.the_num[i] = addBits(this->the_num[i], b1.the_num[i]); // Adds each bit together
	}
  

    return temp;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: operator *
//
// Purpose: overloaded * operator for BinNum class.
//
// Input parameters: a BinNum object, b1, which is the multiplier in *
//			        					 
// Output parameters: none
//
// Return Value: a BinNum object which is the product of the calling object, 
//				  the multiplicand (represented by this), and b1
//
///////////////////////////////////////////////////////////////////////////////

BinNum BinNum::operator* ( BinNum &b1 )
{
    BinNum product;				//resulting product of this and b1
    BinNum partialProd[SIZE];	//an array storing all the partial products
								//of the multiplicand by a single bit

	 //loop to multiple array elements
	 //use shiftBinNumBy function to compute partial products
  

    return product;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: bin2Base10( )
//
// Purpose: converts BinNum object of SIZE bits to integer equivalent
//
// Input parameters: none
//			        					 
// Output parameters: none
//
// Return Value: the integer equivalent of the calling object, 
//
///////////////////////////////////////////////////////////////////////////////

int BinNum::bin2Base10( )
{
    int num = 0;
    for ( int i = 0; i < SIZE; i++)
        {
            if(  the_num[ i] == '1')
                num= num + (int)pow( 2.0, SIZE-1-i  );
        }
    return num;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: getBit( int i)
//
// Purpose: gets the bit at position i of the BinNum object
//
// Input parameters: an int, i, a position in the bin num
//			        					 
// Output parameters: none
//
// Return Value: a char, the bit ( '0' or '1' ) of the BinNum object
//
///////////////////////////////////////////////////////////////////////////////

char BinNum::getBit( int i)
{
    return  (  this -> the_num[i] );
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: foo()
//
// Purpose: a dummy function stub; servers no purpose
//
// Input parameters: none
//			        					 
// Output parameters: none
//
// Return Value: none
//
///////////////////////////////////////////////////////////////////////////////

void BinNum::foo()
{
    // cout << " hi from foo\n\n";
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: <<
//
// Purpose: overloaded insertion operator for a BinNum object; allows for easy
//			outputting
//
// Input parameters: a BinNum object, and an output stream
//			        					 
// Output parameters: none
//
// Return Value: an output stream object
//
///////////////////////////////////////////////////////////////////////////////

ostream &operator << ( ostream &s, BinNum &b )
{
    int i;
    for( i = 0; i < SIZE ; i++ )
        {
            s << b.the_num[i];
        }

    return s;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: >>
//
// Purpose: overloaded extraction operator for a BinNum object; allows for easy
//			inputting
//
// Input parameters: a BinNum object, and an input stream
//			        					 
// Output parameters: none
//
// Return Value: an input stream object
//
///////////////////////////////////////////////////////////////////////////////

istream &operator >> ( istream &s, BinNum &b )
{
    int i;
    for( i = 0; i < SIZE; i++ )
        s >> b.the_num[i];

    return s;
}



///////////////////////////////////////////////////////////////////////////////
//
// Function name: shiftBinNumBy
//
// Purpose: a helper function used by *. Shifts a BinNum object shiftNum 
//			of places left
//	
// Input parameters: an int shiftNum, representing the number of places to 
//					 shift left the input initBinNum object. shiftNum must
//					 be <= SIZE. And the calling object, this.
//			        					 
// Output parameters: this which will be the shifted BinNum object
//
// Return Value: none
//
///////////////////////////////////////////////////////////////////////////////

void  BinNum::shiftBinNumBy( int shiftNum, BinNum& initBinNum )
{
  // cout << " add your code here \n\n";
}




///////////////////////////////////////////////////////////////////////////////




