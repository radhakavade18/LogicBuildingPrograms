/* PS - Design application for Hotel. According to the management team they are giving discount on total bill amount to the customer.
If bill amount is less than 500 then no discount, if bill amount is less than 1500 and grater than 500 then 10% discount and if the bill amount is greater than 1500 then 15 discount.
Our application should accept total bill amount depends on the discount policy we have to return the amount after applying discount.
*/

#include <stdio.h>
#define NO_BILL_DISCOUNT -1

float CalculatePercentage(int iTotal)
{
    float iPercent = 0.0f;
    int AmountPaid = 0;

    if (iTotal < 500)
    {
        return NO_BILL_DISCOUNT;
    }
    else if ((iTotal > 500) && (iTotal < 1500))
    {
        iPercent = iTotal / 10;
        AmountPaid = iTotal - iPercent;
    }
    else
    {
        iPercent = (iTotal / 100) * 15;
        AmountPaid = iTotal - iPercent;
    }

    return AmountPaid;
}

int main()
{
    float fBillAmount = 0.0f;
    float fRet = 0.0f;

    printf("Enter total bill amount \n");
    scanf("%f", &fBillAmount);

    fRet = CalculatePercentage(fBillAmount);

    if (fRet == NO_BILL_DISCOUNT)
    {
        printf("No bill disount for amount below 500 \n");
    }
    else
    {
        printf("Bill Discount is %f", fRet);
    }

    return 0;
}