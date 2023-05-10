// PS - Write a program which acepts one number from user and check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo) {
    int iDigit = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    while(iNo != 0) {
        iDigit = iNo % 10;
        if(iDigit == 0) {
            break;
        }
        iNo = iNo / 10;
    }

    if(iNo == 0) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int iValue = 0;
    bool bRet = false;

    printf("Enter number \n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == true) {
        printf("Number %d conatains 0 inti \n", iValue);
    } else {
        printf("Number %d not conatains 0 inti \n", iValue);
    }

    return 0;
}