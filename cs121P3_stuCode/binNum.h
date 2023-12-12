
///////////////////////////////////////////////////////////////////////////////
//
// File Name         : binNum.h
//
// This file contains the definition the BinNum class
//
// Programmer        : B.J. Streller
//
// Date Written      : in the past
//
// Date Last Revised : 2022 November
//
///////////////////////////////////////////////////////////////////////////////

#ifndef BINNUM_H_
#define BINNUM_H_

#include <iostream>
using namespace::std;

#include "bin_defs.h"


class BinNum
{

public:
    BinNum();					//default constructor; creates binNum 0000
    BinNum( int num );			//creates binNum equal to 4 bin digits of num
    BinNum( const BinNum &initBinNum );  //copy constructor


    BinNum& operator = ( const BinNum &initBinNum );
    BinNum operator + ( BinNum &b );
    BinNum operator * ( BinNum &b );

    int bin2Base10();				//converts BinNum to integer equivalent
    char getBit( int i );			//returns bit at postion i
	void foo();						//function that does nothing

    friend ostream &operator << ( ostream &s, BinNum &b );
    friend istream &operator >> ( istream &s, BinNum &b );



 private:
    char the_num[SIZE];			//THE binary num of SIZE bits - a char array
    void shiftBinNumBy( int shiftNum, BinNum& initBinNum );//shifts BinNum
};


#endif


