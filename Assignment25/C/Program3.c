// PS - Accept number of columns and number of rows from user and display below pattern
// * 	* 	* 	* 	*
// * 	 	 	* 	*
// * 	 	* 	 	*
// * 	* 	 	 	*
// * 	* 	* 	* 	*

#include <stdio.h>

void Display(int Row, int Col)
{
    int i = 0, j = 0;

    if (Row != Col)
    {
        printf("invalid input \n");
        return;
    }

    for (i = 1; i <= Row; i++)
    {
        for (j = Col; j >= 1; j--)
        {
            if ((i == j) || (i == 1) || (j == 1) || (i == Row) || (j == Col))
            {
                printf("* \t");
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