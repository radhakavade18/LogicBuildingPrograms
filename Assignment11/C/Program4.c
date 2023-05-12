// PS - Accept N number from user and accept one another number as NO, Display all elements from range

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int start, int end) {
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++) {

        if((Arr[iCnt] > start) && (Arr[iCnt] < end)) {
            printf("%d \t", Arr[iCnt]);
        }
    }
}

int main() {
    int iSize = 0, start = 0, end = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    printf("Enter start range \n");
    scanf("%d", &start);

    printf("Enter end range \n");
    scanf("%d", &end);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    DisplayRange(ptr, iSize, start, end);

    free(ptr);

    return 0;
}