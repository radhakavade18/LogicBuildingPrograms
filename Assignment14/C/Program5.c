// PS - Accept number from user and display below pattern
// Input: 8
// Output:  2	4	6	8	10	12	14	16

#include<stdio.h>

void Display(int No) {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= No; iCnt++){
        printf("%d\t", iCnt * 2);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}