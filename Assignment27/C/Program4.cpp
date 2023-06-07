// PS - Write a program which accpet number form user and TOGGLE 7th and 10th bit of that number.
// Return Modified number

#include <iostream>

using namespace std;

typedef unsigned int UINT;

int ToggleBit(UINT No)
{
    UINT iMask = 0X00000440;
    int iResult = 0;

    iResult = No & iMask;

    return (No ^ iMask);
}

int main()
{
    UINT iValue = 0;

    int iRet = 0;

    cout << "Enter number \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Result is " << iRet << "\n";

    return 0;
}