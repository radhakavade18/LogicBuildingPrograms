// PS - Write a recursive program which accepts number from user and return smallest digit
// 87983
// 3

#include <stdio.h>
#include <stdlib.h>

int DisplayR(int iNo)
{
    int iDigit = 0;
    static int iSmall = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        DisplayR(iNo);
        if(iSmall < iDigit)
        {
            iSmall = iDigit;
        }
    }
    return iSmall;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = DisplayR(iValue);
    printf("Smallest digit is %d \n", iRet);

    return 0;
}