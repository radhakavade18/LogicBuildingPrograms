// PS - Write a program which accept number from user and display its summation of all Non - factors

#include<stdio.h>

int NonFactSum(int iNo){
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++){
        if((iNo % iCnt) != 0) {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = NonFactSum(iValue);

    printf("SUmmation of non-factors is %d \n", iRet);

    return 0;
}