// PS - write a program which accepts number from user and display its table

#include<stdio.h>

void DisplayTable(int iNo) {
    int iCnt = 0;
    int Table = 1;

    for(iCnt = 1; iCnt <= 10; iCnt++){
        Table = iNo * iCnt;
        printf("%d \t", Table);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}

// Time complexity of the program is O(N)