// PS - Accept string from user and convert it into lower case

#include <stdio.h>

void strLowerCase(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    strLowerCase(Arr);

    printf("Modified string is %s \n", Arr);

    return 0;
}