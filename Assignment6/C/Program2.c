// PS - write a program which accepts number from user and if number is less than 50 then print small
// if it is grater than 50 and less than 100 then print medium, if it is greater than 100
// print large

#include<stdio.h>

void PrintWord(int iNo1) {
    switch (iNo1)
    {
    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    case 4:
        printf("Four \n");
        break;
    case 5:
        printf("Five \n");
        break;
    case 6:
        printf("Six \n");
        break;
    case 7:
        printf("Seven \n");
        break;
    case 8:
        printf("Eight \n");
        break;
    case 9:
        printf("Nine \n");
        break;
    default:
        printf("Invalid Number \n");
        break;
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintWord(iValue);

    return 0;
}

// Time complexity of the program is O(N)