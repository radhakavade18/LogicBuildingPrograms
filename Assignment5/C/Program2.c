// PS - Write a program which accepts number from user anf print numbers till that number
// EX -> i/p - 5
// o/p -> 1   2   3   4   5

#include<stdio.h>

void PrintNum(int iNo) {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("%d \t", iCnt);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintNum(iValue);

    return 0;
}