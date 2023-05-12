// PS - Accept N number from user and accept one another number as NO, return index of 1st occurance of that number

#include<stdio.h>
#include<stdlib.h>

int CheckNum(int Arr[], int iLength, int No) {
    int iCnt = 0;
    int index = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == No) {
            index = iCnt;
            break;
        }
    }

    return index;
}

int main() {
    int iSize = 0, iValue = 0, iCnt = 0;
    int *ptr = NULL;
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

    iRet = CheckNum(ptr, iSize, iValue);

    printf("1st occurance of %d is %d", iValue, iRet);

    free(ptr);

    return 0;
}