// PS - Display ASCII table

#include <stdio.h>

int main() {
    int iCnt = 0;

    printf("ASCII table \n");

    for(iCnt = 0; iCnt <= 127; iCnt++){
        printf("%c \t %d \t %x \t %o \n", iCnt, iCnt, iCnt, iCnt);
    }

    return 0;
}