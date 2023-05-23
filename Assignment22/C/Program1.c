// PS - Accept string from user and count number of capital letters in it

#include <stdio.h>

int CountCap(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCap(Arr);

    printf("Capital count of charqcters are %d \n", iRet);

    return 0;
}