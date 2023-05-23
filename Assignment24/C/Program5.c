// PS - Accept string from user and reverse the string in plcace

#include <stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0'){
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string \n");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("Reverse sting is : %s\n", Arr);

    return 0;
}