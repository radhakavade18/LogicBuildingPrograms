// PS - Accept N number from user and return the smallest

#include<stdio.h>
#include<stdlib.h>

int CheckMinimum(int Arr[], int iLength) {
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(iMin > Arr[iCnt]) {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = CheckMinimum(ptr, iSize);

    printf("Smallest number is %d", iRet);

    free(ptr);

    return 0;
}