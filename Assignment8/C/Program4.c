// PS - Write a program which acepts one number from user and return multiplication of all digits

#include<stdio.h>

int Multiplication(int iNo) {
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0) {
        iNo = -iNo;
    }

    while(iNo != 0) {
        iDigit = iNo % 10;
        iMult = iDigit * iMult;
        iNo = iNo / 10;
    }
    return iMult;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Multiplication(iValue);

    printf("Multiplication of all digits is %d \n", iRet);

    return 0;
}