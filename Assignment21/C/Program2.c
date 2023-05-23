// PS - Accept character from user, if the character is small display its corresponding capital character or if 

#include <stdio.h>

void ToggleChar(char ch)
{
    int gap = 'a' - 'A';

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c \n", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c \n", ch - gap);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character \n");
    scanf("%c", &ch);

    ToggleChar(ch);

    return 0;
}