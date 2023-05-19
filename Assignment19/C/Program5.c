// PS - Accept number of rows and number of columns from user and display below pattern
// Row: 4
// Row: 4
// Output:
/* 
4 	3 	2 	1 	
4 	3 	2 	
4 	3 	
4 
*/

#include <stdio.h>

void Display(int Row, int Col)
{
    if (Row != Col)
    {
        printf("Invalid Input \n");
        return;
    }

    int i = 0, j = 0;
    int iCnt = 1;

    for (i = 1; i <= Row; i++)
    {
        for (j = Col; j >= i; j--)
        {
            printf("%d \t", j);
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