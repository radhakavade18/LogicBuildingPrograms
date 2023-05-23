// PS - Accept character from user if it is capital then display all the chracter till 'Z' and if the input character is small then print all the character in reverse till 'a'.

#include <stdio.h>

void DisplayRange(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        while (ch <= 'Z')
        {
            printf("%c \t", ch);
            ch++;
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        while (ch >= 'a')
        {
            printf("%c \t", ch);
            ch--;
        }
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character \n");
    scanf("%c", &ch);

    DisplayRange(ch);

    return 0;
}