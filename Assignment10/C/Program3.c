// PS - Accept N number from user and check whether that numbers contain 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[], int iLength) {
    int iCnt = 0;
    bool bPresent = false;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == 11){
            bPresent = true;
        }
    }
    return bPresent;
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = CheckNum(ptr, iSize);

    if(bRet == true){
        printf("Array contains 11 in it. \n");
    } else {
        printf("Array not contains 11 in it. \n");
    }

    free(ptr);

    return 0;
}