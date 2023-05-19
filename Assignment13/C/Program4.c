/* PS - We have to design application for tourist company.
Tourist company provides card on rent
Depends on the running of car they apply rent
If running is less than 100 km then they charge 25rs per km
and if running is more than 100 km then they apply 15rs per km after 100km.
we have to accept number form user and return the estimated rent.
*/

#include <stdio.h>

int CalculateCarRent(int iStd)
{
    int CarRent = 0;
    CarRent = iStd * 25;

    if (iStd > 100)
    {
        CarRent = (iStd * 15) + CarRent;
    }

    return CarRent;
}

int main()
{
    int iDistance = 0;
    int iRet = 0;

    printf("Enter kilometers \n");
    scanf("%d", &iDistance);

    iRet = CalculateCarRent(iDistance);

    printf("For %d kilometers rent of card is %d \n", iDistance, iRet);

    return 0;
}