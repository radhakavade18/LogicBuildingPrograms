// PS - Accept number of rows and number of columns from user and display below pattern
// Row: 5
// Row: 5
// Output: 
/* 
1 	2 	3 	4 	
5 	6 	7 	8 	
9 	10 	11 	12 	
13 	14 	15 	16
*/

#include<stdio.h>

void Display(int Row, int Col) {
    int i = 0, j = 0;
    int iCnt = 1;

    for(i = 1; i <= Row; i++){
        for(j = 1; j <= Col; j++){
            printf("%d \t", iCnt);
            iCnt++;
        }
        printf("\n");
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Rows \n");
    scanf("%d", &iValue1);

    printf("Enter Col \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}