/* PS - Design application for Income tax department to calculate tax amount. According to the income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax
and for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.
*/

#include <stdio.h>
#define NO_TAX -1

float IncomeTax(int iIncome)
{
    int iPercent = 0;

    if (iIncome < 500000)
    {
        return NO_TAX;
    }
    else if ((iIncome > 500000) && (iIncome < 1000000))
    {
        iPercent = (iIncome / 100) * 10;

    }
    else if ((iIncome > 1000000) && (iIncome < 2000000))
    {
        iPercent = (iIncome / 100) * 20;
    }
    else
    {
        iPercent = (iIncome / 100) * 30;
    }

    return iPercent;
}

int main()
{
    float fTotalIncome = 0.0f;
    float fRet = 0.0f;

    printf("Enter your total income amount \n");
    scanf("%f", &fTotalIncome);

    fRet = IncomeTax(fTotalIncome);

    if (fRet == NO_TAX)
    {
        printf("No Tax for income below 5 lakhs \n");
    }
    else
    {
        printf("Tax for the amount is %f", fRet);
    }

    return 0;
}