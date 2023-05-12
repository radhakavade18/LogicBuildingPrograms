// PS - Accept N number from user and display all such numbers which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void DisplayCntDigit(int Arr[], int iLength) {
    int iCnt = 0;
    int iDigit = 0;
    int iCntDigit = 0;
    int iSum = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        iTemp = Arr[iCnt];
        while(iTemp != 0){
            iDigit = iTemp % 10;
            iCntDigit++;
            iTemp = iTemp / 10;
        }
        if(iCntDigit == 3){
            printf("%d \t", Arr[iCnt]);
        }
        iCntDigit = 0;
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

    DisplayCntDigit(ptr, iSize);

    free(ptr);

    return 0;
}