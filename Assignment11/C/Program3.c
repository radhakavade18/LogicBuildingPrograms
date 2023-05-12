// PS - Accept N number from user and accept one another number as NO, return index of last occurance of that number

#include<stdio.h>
#include<stdlib.h>

int CheckNum(int Arr[], int iLength, int start, int end) {
    int iCnt = 0;
    int index = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == No) {
            index = iCnt;
        }
    }

    return index;
}

int main() {
    int iSize = 0, start = 0, end = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    printf("Enter start range \n");
    scanf("%d", &start);

    printf("Enter start range \n");
    scanf("%d", &end);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CheckNum(ptr, iSize, start, end);

    printf("1st occurance of %d is %d", iValue, iRet);

    free(ptr);

    return 0;
}