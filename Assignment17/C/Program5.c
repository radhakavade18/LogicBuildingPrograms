// PS - Accept number of rows and number of columns from user and display below pattern
// Row: 5
// Row: 5
// Output:
/* 
1 	2 	3 	4 	5 	
2 	3 	4 	5 	6 	
3 	4 	5 	6 	7 	
4 	5 	6 	7 	8 	
5 	6 	7 	8 	9 
*/

#include <stdio.h>

void Display(int Row, int Col)
{
    int i = 0, j = 0;
    int iCnt = 0;

    for (i = 1; i <= Row; i++)
    {
        iCnt = i;
        for (j = 1; j <= Col; j++)
        {
            printf("%d \t", iCnt);
            iCnt++;
        }
        iCnt = 0;
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