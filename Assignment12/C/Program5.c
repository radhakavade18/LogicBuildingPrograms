// PS - Accept N number from user and return summation of all digits from number

#include<stdio.h>
#include<stdlib.h>

void DisplaySumDigit(int Arr[], int iLength) {
    int iCnt = 0;
    int iDigit = 0;
    int iCntDigit = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        while(Arr[iCnt] != 0){
        iDigit = Arr[iCnt] % 10;
        iSum = iSum + iDigit;
        Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d \t", iSum);
        iSum = 0;
    }
}

int main() {
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    DisplaySumDigit(ptr, iSize);

    free(ptr);

    return 0;
}