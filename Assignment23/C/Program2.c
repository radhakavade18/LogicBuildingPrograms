// PS - Accept string from user and convert it into upper case

#include <stdio.h>

void strUpperCase(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    strUpperCase(Arr);

    printf("Modified string is %s \n", Arr);

    return 0;
}