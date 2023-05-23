// PS - Accept string from user and count number of white spaces in it

#include <stdio.h>

int CountWhiteSpace(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
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

    iRet = CountWhiteSpace(Arr);

    printf("Count of white spaces are %d \n", iRet);

    return 0;
}