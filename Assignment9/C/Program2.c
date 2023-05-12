// PS - Accept N number from user and display such a elements which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Arithmatic(int Arr[], int iLength){
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++){
        if((Arr[iCnt] % 5) == 0) {
            printf("%d \t",Arr[iCnt]);
        }
    }
}

int main() {
    int iSize = 0;
    int *ptr = NULL;
    int iCnt =0;

    printf("Enter size of elements array \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter elements in array \n");
    for(iCnt = 0; iCnt < iSize; iCnt++){
        scanf("%d", &ptr[iCnt]);
    }

    Arithmatic(ptr, iSize);

    free(ptr);

    return 0;
}