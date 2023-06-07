// PS - Write a program which accpet number form user and position form user and check whether bit at that position
//is on or OFF. If bit is ON return TRUE else return false

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT iPos)
{
    UINT iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = No & iMask;

    if(iResult == iMask){
        return true;
    } else{
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;

    bool bRet = false;

    cout << "Enter number \n";
    cin >> iValue;

    cout << "Enter position \n";
    cin >> iBit;

    bRet = CheckBit(iValue, iBit);

    if(bRet == true) {
        cout<<"Bit is ON \n";
    } else {
        cout<<"Bit is OFF \n";
    }

    return 0;
}