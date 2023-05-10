// PS - Write a program which acepts one number from user and return count of digits in between 3 and 7

#include<stdio.h>

int CountInbetween(int iNo) {
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    while(iNo != 0) {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7)){
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = CountInbetween(iValue);

    printf("Count of digits in between 3 and 7 is %d \n", iRet);

    return 0;
}