// PS - Accept 2 numbers form user and check whether that both numbers are equal or not

#include<stdbool.h>
#include<stdio.h>

bool CheckEqual(int iNo1, int iNo2) {
    if(iNo1 == iNo2){
        return true;
    } else {
        return false;
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter 1st number\n");
    scanf("%d", &iValue1);

    printf("Enter 2nd number\n");
    scanf("%d", &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true){
        printf("Numbers are equal \n");
    } else {
        printf("Numbers are not equal \n");
    }

    return 0;
}