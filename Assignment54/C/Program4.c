// PS - Write a recursive program which accepts string from user and return length
// hello
// 5

#include <stdio.h>
#include <stdlib.h>

void DisplayI(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo /2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \t", iCnt);
        }
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt = 1;
    if (iCnt <= iNo /2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \t", iCnt);
        }
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    //DisplayI(iValue);

    DisplayR(iValue);

    return 0;
}