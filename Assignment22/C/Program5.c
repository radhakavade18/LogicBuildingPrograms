// PS - Accept string from user and display string in reverse order

#include <stdio.h>

void StringRev(char *str)
{
    int iLength = 0;

    while (*str != '\0')
    {
        iLength++;
        str++;
    }
    str--;

    while (iLength != 0)
    {
        printf("%c", *str);
        str--;
        iLength--;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    StringRev(Arr);

    return 0;
}