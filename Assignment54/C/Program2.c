// PS - Write a recursive program which accepts number from user and return summation of its digits
// 876
// 21

#include <stdio.h>
#include <stdlib.h>

int DisplayR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo);
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = DisplayR(iValue);
    printf("Summation of digits are %d \n", iRet);

    return 0;
}