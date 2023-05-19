// PS - Accept number from user and display below pattern
// Input: 5
// Output:  5 	 #	4 	 #	3 	 #	2 	 #	1 	 #

#include<stdio.h>

void Display(int No) {
    int iCnt = 0;

    for(iCnt = No; iCnt >= 1; iCnt--){
        printf("%d \t #\t", iCnt);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}