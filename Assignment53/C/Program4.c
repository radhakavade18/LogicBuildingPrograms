// PS - Write a recursive program display below pattern
//A   B   C   D   E

#include <stdio.h>
#include <stdlib.h>

void DisplayR(int iNo)
{
    static char ch= 'A';
    static int iCnt = 1;
    if (iCnt <= iNo)
    {
        printf("%c \t", ch);
        iCnt++;
        ch++;
        DisplayR(iNo);
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