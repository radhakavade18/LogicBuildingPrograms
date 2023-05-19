// PS - Accept number from user and display below pattern
// Input: 5
// Output: A 	B 	C 	D

#include<stdio.h>

void Display(int No) {
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= No; iCnt++, ch++){
        printf("%c \t", ch);
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}