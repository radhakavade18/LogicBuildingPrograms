// PS - Accept N number from user and return difference between the smallest and largest

#include<stdio.h>
#include<stdlib.h>

int CheckNum(int Arr[], int iLength) {
    int iCnt = 0;
    int iTemp = 0;
    int iMax = 0;

    iTemp = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] > iMax) {
            iMax = Arr[iCnt];
        }
        if(iTemp > Arr[iCnt]) {
            iTemp = Arr[iCnt];
        }
    }

    return (iMax - iTemp);
}

int main() {
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CheckNum(ptr, iSize);

    printf("difference between the smallest and largest %d", iRet);

    free(ptr);

    return 0;
}