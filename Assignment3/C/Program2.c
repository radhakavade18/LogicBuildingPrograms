// PS - Write a program which accept number from user and display its factors in Descresing Order

#include<stdio.h>

void FactMulti(int iNo){
    int iCnt = 0;

    for(iCnt = (iNo /2); iCnt >= 1; iCnt--){
        if((iNo % iCnt) == 0) {
            printf("%d\t", iCnt);
        }
    }
}

int main() {
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    FactMulti(iValue);

    return 0;
}