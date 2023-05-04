// PS - write a program which accepts number from user and if number is less than 50 then print small
// if it is grater than 50 and less than 100 then print medium, if it is greater than 100
// print large

#include<stdio.h>

void PrintScale(int iNo1) {
    if(iNo1 <= 50) {
        printf("Small \n");
    } else if((iNo1 > 50) && (iNo1 < 100)) {
        printf("Medium \n");
    } else if(iNo1 >= 100) {
        printf("Large \n");
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintScale(iValue);

    return 0;
}

// Time complexity of the program is O(N)