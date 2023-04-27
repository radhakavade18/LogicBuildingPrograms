// PS - Accept one number and check whether it is divisible by 5 or not.
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(BOOL No1) {
    if((No1 % 5) == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int iValue =0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = Check(iValue);

    if(iRet == TRUE) {
        printf("Divisible by 5 \n");
    } else {
        printf("Not divisible by 5 \n");
    }

    return 0;
}