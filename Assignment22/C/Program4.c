// PS - Accept character from user and check whether it contains vowels in it or not

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char *str)
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
    bool bRet = false;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowel(Arr);

    if (bRet == true)
    {
        printf("Contains vowels \n");
    }
    else
    {
        printf("Not contains vowel \n");
    }

    return 0;
}