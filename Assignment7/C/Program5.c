// PS - Write a program which acepts one number from user and count frequency of such a digit which is less than 6

#include<stdio.h>

int CountLessThanSix(int iNo) {
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    while(iNo != 0) {
        iDigit = iNo % 10;
        if(iDigit < 6) {
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

    iRet = CountLessThanSix(iValue);

    printf("Frequency of less than 6 digits is %d \n", iRet);

    return 0;
}