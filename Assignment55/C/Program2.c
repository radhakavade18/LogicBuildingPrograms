// PS - Write a recursive program which accepts number from user and return largest digit
// 87983
// 9

#include <stdio.h>
#include <stdlib.h>

int DisplayR(int iNo)
{
    int iDigit = 0;
    static int iLarge = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo);
        if(iLarge < iDigit)
        {
            iLarge = iDigit;
        }
    }
    return iLarge;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = DisplayR(iValue);
    printf("Largest digit is %d \n", iRet);

    return 0;
}