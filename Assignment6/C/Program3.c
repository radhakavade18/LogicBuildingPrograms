// PS - write a program which accepts number from user and find its factorial

#include<stdio.h>

int Factorial(int iNo1) {
    int iCnt = 0;
    int Fact = 1;

    if(iNo1 < 0) {
        iNo1 = -iNo1;
    }

    for(iCnt = 1; iCnt <= iNo1; iCnt++){
        Fact = Fact * iCnt;
    }
    return Fact;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorals are %d \n", iRet);

    return 0;
}

// Time complexity of the program is O(N)