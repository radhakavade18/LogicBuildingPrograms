// PS - Write a program which accepts number from user and print all odd number upto that number
// EX -> i/p - 18
// o/p -> 1   3 5   7   9   11  13  15  17

#include<stdio.h>

void PrintNum(int iNo) {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        if((iCnt % 2) != 0){
            printf("%d \t", iCnt);
        }
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintNum(iValue);

    return 0;
}