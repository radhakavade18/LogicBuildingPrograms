#include<stdio.h>

void PrintStar(int No) 
{
    for(int i = 1; i <= No; i++) {
        printf("* \t");
    }
}

int main() {
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintStar(iValue);

    return 0;
}