// PS - Write a program which accpet number form user and ON 1st 4 bit of that number.
// Return Modified number

#include <iostream>

using namespace std;

typedef unsigned int UINT;

int OffBit(UINT No)
{
    UINT iMask = 0X0000000F;
    int iResult = 0;

    iResult = No | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;

    int iRet = 0;

    cout << "Enter number \n";
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Result is " << iRet << "\n";

    return 0;
}