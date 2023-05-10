// PS - Write a program which acepts one number from user and return diff between sumation of even digit and summation of odd digits

#include<stdio.h>

int Difference(int iNo) {
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;


    if(iNo < 0) {
        iNo = -iNo;
    }

    while(iNo != 0) {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0) {
            iEven = iEven + iDigit;
        }
        if((iDigit % 2) != 0) {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    return (iEven - iOdd);
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf("Difference between sumation of even digit and summation of odd digits %d \n", iRet);

    return 0;
}