// PS - Write a program which checks whether 7th, 8th and 9th bit is ON or OFF

#include<iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(int No) {
    UINT iMask = 0X80000001;
    int iResult = 0;

    iResult = No & iMask;

    if(iResult == iMask) {
        return true;
    } else {
        return false;
    }
}

int main() {
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number \n";
    cin>> iValue;

    bRet = CheckBit(iValue);

    if(bRet == true) {
        cout<<"Bits are ON \n";
    } else{
        cout<<"Bits are OFF \n";
    }

    return 0;
}