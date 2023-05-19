/* PS - Design application for school management system.
As school is primary there are 4 standards from 1 to 4
School fees fro each standard is different
For first standar school fee is 8900, for second standard school fee is 12790, for third standard school fee is 21000 and for fourth standard fee is 23450.
We have to accept standard from user and display the corresponding fees.
*/

#include <stdio.h>

void SchoolFees(int iStd)
{
    switch (iStd)
    {
    case 1:
        printf("School fee is 8900 \n");
        break;
    case 2:
        printf("School fee is 12790 \n");
        break;
    case 3:
        printf("School fee is 21000 \n");
        break;
    case 4:
        printf("School fee is 23450 \n");
        break;
    default:
        printf("Invalid Input - Enter standard in between 1 to 4 \n");
        break;
    }

    
}

int main()
{
    int Standard = 0;

    printf("Enter standard \n");
    scanf("%d", &Standard);

    SchoolFees(Standard);

    return 0;
}