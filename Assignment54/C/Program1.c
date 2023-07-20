// PS - Write a recursive program display below pattern
//5   4   3   2   1

#include <stdio.h>
#include <stdlib.h>

void DisplayR(int iNo)
{
   int iCnt = iNo;
   while (iCnt <= iNo)
   {
       printf("%d \t", iCnt);
       iCnt--;
   }
}

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d", &iValue);

    DisplayR(iValue);

    return 0;
}