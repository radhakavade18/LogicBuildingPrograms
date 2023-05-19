// PS - Accept number from user and display below pattern
// Input: 5
// Output:  1 	 *	2 	 *	3 	 *	4 	 *	5 	 *

#include<stdio.h>

void Display(int No) {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= No; iCnt++){
        printf("%d \t *\t", iCnt);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}