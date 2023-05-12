// PS - Accept N number from user and accept one another number as NO, return product of all odd number

#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iLength) {
    int iCnt = 0;
    int product = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if((Arr[iCnt] % 2) != 0) {
            product = product * Arr[iCnt];
        }
    }

    return product;
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

    iRet = OddProduct(ptr, iSize);

    printf("Product of all odd numbers is %d", iRet);

    free(ptr);

    return 0;
}