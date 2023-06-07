// PS - Write a program which accpet number and position form user and TOGGLE bit.
// Return Modified number

#include <iostream>

using namespace std;

typedef unsigned int UINT;

int OffBit(UINT No, UINT iPos)
{
    UINT iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = No ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;

    int iRet = 0;

    cout << "Enter number \n";
    cin >> iValue;

    cout << "Enter Position \n";
    cin >> iBit;

    iRet = OffBit(iValue, iBit);

    cout << "Result is " << iRet << "\n";

    return 0;
}