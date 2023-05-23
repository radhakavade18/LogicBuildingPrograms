// PS - Accept number of columns and number of rows from user and display below pattern
// 1 	2 	3 	4 	5
// 1 	2 	 	 	5
// 1 	 	3 	 	5
// 1 	 	 	4 	5
// 1 	2 	3 	4 	5

#include <stdio.h>

void Display(int Row, int Col)
{
    if (Row != Col)
    {
        printf("invalid input \n");
        return;
    }

    int i = 0, j = 0;

    for (i = 1; i <= Row; i++)
    {
        for (j = 1; j <= Col; j++)
        {
            if ((i == j) || (i == 1) || (j == 1) || (i == Row) || (j == Col))
            {
                printf("%d \t", j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d", &iValue1);

    printf("Enter number of Cols \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}