// PS- Write a program which excepts number from user and check whether that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo) {
    if(iNo >= 100) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d", &iValue);

    bRet = CheckNumber(iValue);

    if(bRet == true){
        printf("Number is greater than 100 \n");
    } else {
        printf("Number is less than 100 \n");
    }

    return 0;
}