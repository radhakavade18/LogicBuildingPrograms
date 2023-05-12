// PS - Accept N number from user and accept one another number as NO, return frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int No) {
    int iCnt = 0;
    int Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == No) {
            Count++;
        }
    }

    return Count;
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    printf("Enter number which you want to check \n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize, iValue);

    printf("Frequency of %d is %d", iValue, iRet);

    free(ptr);

    return 0;
}