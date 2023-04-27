#include<stdio.h>

int main()
{
    int No1, No2, Ans = 0;

    printf("Enter 1st no\n");
    scanf("%d", &No1);

    printf("Enter 2nd no\n");
    scanf("%d", &No2);

    Ans = No1 + No2;

    printf("Addition is %d ", Ans);

    return 0;
}