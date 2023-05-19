// PS - Accept number of rows and number of columns from user and display below pattern
// Row: 4
// Row: 3
// Output:
/* 
A 	B 	C 	D 	
a 	b 	c 	d 	
A 	B 	C 	D 	
a 	b 	c 	d 
*/

#include <stdio.h>

void Display(int Row, int Col)
{
    int i = 0, j = 0;
    char ch = '\0';

    for (i = 1; i <= Row; i++)
    {
        if ((i % 2) == 0)
        {
            for (j = 1, ch = 'a'; j <= Col; j++,ch++)
            {
                printf("%c \t", ch);
            }
        } else {
            for (j = 1, ch = 'A'; j <= Col; j++,ch++)
            {
                printf("%c \t", ch);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows \n");
    scanf("%d", &iValue1);

    printf("Enter Col \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}