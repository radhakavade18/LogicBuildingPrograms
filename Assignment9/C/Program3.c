// PS - Accept N number from user and display such a elements which are even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Divisible(int Arr[], int iLength) {
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if((Arr[iCnt] % 2) == 0 && (Arr[iCnt] % 5) == 0){
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    Divisible(ptr, iSize);

    free(ptr);

    return 0;
}