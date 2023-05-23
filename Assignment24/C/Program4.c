// PS - Accept string from user and accept 1 character. return index of last occurance

#include <stdio.h>
#define ERR_NOTFOUNT -1

int CountChar(char *str, char ch)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUNT;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCount;
        }
        iCount++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter character \n");
    scanf(" %c", &ch);

    iRet = CountChar(Arr, ch);

    printf("Count of %c is %d \n", ch, iRet);

    return 0;
}