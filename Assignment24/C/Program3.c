// PS - Accept string from user and accept 1 character. return index of fisrt occurance

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 1;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }
    return iCount;
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