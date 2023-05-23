// PS - Accept string from user and return frequency bewtween small and capital character count

#include <stdio.h>

int CountCap(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    return iCountCap - iCountSmall;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCap(Arr);

    printf("Small count of charqcters are %d \n", iRet);

    return 0;
}