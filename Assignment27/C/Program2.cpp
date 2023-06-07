// PS - Write a program which accpet number form user and OFF 7th and 10th bit of that number if it is ON.
// Return Modified number

#include <iostream>

using namespace std;

typedef unsigned int UINT;

int OffBit(UINT No)
{
    UINT iMask = 0X00000440;
    int iResult = 0;

    iResult = No & iMask;

    if(iResult == iMask){
        return (No ^ iMask);
    } else{
        return No;
    }
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