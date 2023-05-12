// PS - Accept N number from user and accept one another number as NO, check whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[], int iLength, int No) {
    int iCnt = 0;
    bool Present = false;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if(Arr[iCnt] == No) {
            Present = true;
            break;
        }
    }

    return Present;
}

int main() {
    int iSize = 0, iValue = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements that you want to store in array \n");
    scanf("%d", &iSize);

    printf("Enter number which you want to check \n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elemets in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++) {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = CheckNum(ptr, iSize, iValue);

    if(bRet == true) {
        printf("%d is present \n", iValue);
    } else {
        printf("%d is not present \n", iValue);
    }

    free(ptr);

    return 0;
}