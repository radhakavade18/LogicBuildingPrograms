// PS - accept number from user and print pattern ($ *) number time on screen
// Ex - i/p - 3
// o/p - $  *   $   *   $   *

#include<stdio.h>

void PrintPattern(int iNo) {
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("$\t*\t");
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintPattern(iValue);

    return 0;
}