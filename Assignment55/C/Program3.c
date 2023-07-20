// PS - Write a recursive program which accepts string from user and return count of small characters
// hello
// 5

#include <stdio.h>
#include <stdlib.h>

int DisplayR(char *arr)
{
    static int iCount = 0;
    if(*arr != '\0')
    {
        if((*arr > 'a') || (*arr < 'z'))
        {
            iCount++;
        }
        arr++;
        DisplayR(arr);
    }
    return iCount;
}

int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", str);

    iRet = DisplayR(str);
    printf("Count of small characters are %d \n", iRet);

    return 0;
}