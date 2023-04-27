// PS - Devide 2 numbers - take input from user

#include<stdio.h>

int Division(int no1, int no2) {
    int iRet = 0;

    iRet = no1 / no2;

    return iRet;
}

int main() {
    int iValue1, iValue2 = 0;
    int Ans = 0;

    printf("Enter 1st number\n");
    scanf("%d", &iValue1);

    printf("Enter 2nd number\n");
    scanf("%d", &iValue2);

    Ans = Division(iValue1, iValue2);

    printf("Division : %d", Ans);

    return 0;
}