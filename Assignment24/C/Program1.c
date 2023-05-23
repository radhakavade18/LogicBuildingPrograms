// PS - Accept string from user and accept 1 character. check whether that character is present in string or not.

#include <stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool bRet = false;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter character \n");
    scanf(" %c", &ch);

    bRet = CheckChar(Arr, ch);

    if(bRet == true) {
        printf("Character is present \n");
    } else {
        printf("Character is not present \n");
    }

    return 0;
}