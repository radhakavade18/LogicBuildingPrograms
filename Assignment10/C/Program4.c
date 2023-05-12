// PS - Accept N number from user and return frequency of 11 in it

#include<stdio.h>
#include<stdlib.h>

int Check11(int Arr[], int iLength) {
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == 11){
            iCount++;
        }
    }
    return iCount;
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Check11(ptr, iSize);

    printf("Array contains %d times 11 in it. \n", iRet);

    free(ptr);

    return 0;
}