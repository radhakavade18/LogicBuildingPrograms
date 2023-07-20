// PS - Write a recursive program which accepts string from user and return length
// hello
// 5

#include <stdio.h>
#include <stdlib.h>

int DisplayR(char *arr)
{
    static int iSum = 0;
    if(*arr != '\0')
    {
        iSum++;
        arr++;
        DisplayR(arr);
    }
    return iSum;
}

int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", str);

    iRet = DisplayR(str);
    printf("Count of characters are %d \n", iRet);

    return 0;
}