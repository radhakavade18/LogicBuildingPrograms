// PS - Accept N number from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Arithmatic(int Arr[], int iLength){
    int iEven = 0;
    int iOdd = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if((Arr[iCnt] % 2) == 0) {
            iEven = iEven + Arr[iCnt];
        }
        if((Arr[iCnt] % 2) != 0) {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    return (iEven - iOdd);
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

    printf("Difference between summation of even and odd element is %d", iRet); 

    free(ptr);

    return 0;
}