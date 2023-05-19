// PS - Accept number of rows and number of columns from user and display below pattern
// Row: 4
// Row: 3
// Output: 
/* 
A 	A 	A 	A 	
B 	B 	B 	B 	
C 	C 	C 	C 	
D 	D 	D 	D
*/

#include<stdio.h>

void Display(int Row, int Col) {
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= Row; i++, ch++){
        for(j = Col; j >= 1; j--){
            printf("%c \t",ch);
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