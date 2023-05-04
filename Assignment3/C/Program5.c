// PS- Write a program which excepts number from user and return 
// difference between sumation of factors and non-factors

#include<stdio.h>

int SumDiff(int iNo) {
    int iCnt = 0;
    int iFactSum = 0, iNonFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= (iNo /2); iCnt++){
        if((iNo % iCnt) == 0) {
            iFactSum++;
        }
        if((iNo % iCnt) != 0){
            iNonFact++;
        }
    }
    iDiff = iFactSum - iNonFact;
    return iDiff;
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = SumDiff(iValue);

    printf("Difference between sumaation of factors and non-factors are %d \n", iRet);

    return 0;
}