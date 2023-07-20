// PS - Write a recursive program which accept number from user and return its product of digit
// 532
// 30

#include <stdio.h>
#include <stdlib.h>

int DisplayR(int iNo)
{
    static int Product = 1;
    int iDigit = 0;

    if (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        DisplayR(iNo);
        Product = Product * iDigit;
    }
    return Product;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    iRet = DisplayR(iValue);
    printf("Product of all digits is %d \n", iRet);

    return 0;
}