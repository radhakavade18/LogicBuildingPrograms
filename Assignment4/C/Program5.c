// PS - Write a program which accepts total marks & Obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(float iNo1, float iNo2) {
    float fPercent = 0.0f;

    fPercent = iNo1 / iNo2 * 100;

    return fPercent;
}

int main() {
    float iValue1 = 0.0f;
    float iValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter total marks \n");
    scanf("%f", &iValue1);

    printf("Enter Obtained marks \n");
    scanf("%f", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage of marks is %f \n", fRet);

    return 0;
}