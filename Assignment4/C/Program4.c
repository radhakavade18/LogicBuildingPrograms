// PS - Accpet 3 numbers and print its multiplication

#include<stdio.h>

int DisplayMult(int iNo1, int iNo2, int iNo3) {
    int Mult = 0;

    Mult = iNo1 * iNo2 * iNo3;

    return Mult;
}

int main() {
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter 1st number \n");
    scanf("%d", &iValue1);

    printf("Enter 2nd number \n");
    scanf("%d", &iValue2);

    printf("Enter 3rd number \n");
    scanf("%d", &iValue3);

    iRet = DisplayMult(iValue1, iValue2, iValue3);

    printf("Multiplication of numbers is %d \n", iRet);

    return 0;
}