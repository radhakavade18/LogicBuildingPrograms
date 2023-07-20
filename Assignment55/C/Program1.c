// PS - Write a recursive program which accepts string from user and count white spaces.
// HE llo WOr LD
// 3

#include <stdio.h>
#include <stdlib.h>

int CountWhiteSpaces(char *str)
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

int CountWhiteSpacesR(char *str)
{
    static int iCount = 0;
    if (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
        CountWhiteSpacesR(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhiteSpacesR(Arr);
    printf("Count of white spaces are %d\n", iRet);

    return 0;
}