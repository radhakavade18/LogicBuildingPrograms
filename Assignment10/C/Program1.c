// PS - Accept N number from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int Arithmatic(int Arr[], int iLength){
    int iEven = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if((Arr[iCnt] % 2) == 0) {
            iEven++;
        }
    }

    return iEven;
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iCnt =0;
    int iRet = 0;

    printf("Enter size of elements array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elements in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++){
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Arithmatic(ptr, iSize);

    printf("Frequency of even elements is %d", iRet); 

    free(ptr);

    return 0;
}