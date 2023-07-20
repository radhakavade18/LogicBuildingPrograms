// PS - Write a java program which accepts 2 array from user and display summation of elements of 2 array

import java.util.*;

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements of 1st array");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];

        System.out.println("Enter number of elements of 2nd array");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter elements of 1st array");
        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter elements of 2nd array");
        for(int iCnt = 0; iCnt < iSize2; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        int iMin1 = Arr1[0];
        int iMin2 = Arr2[0];

        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
            if(Arr1[iCnt] < iMin1)
            {
                iMin1 = Arr1[iCnt];
            }
        }
        
        for(int iCnt = 0; iCnt < iSize2; iCnt++)
        {
            if(Arr2[iCnt] < iMin2)
            {
                iMin2 = Arr2[iCnt];
            }
        }
        System.out.println("Minimum elements from array : "+iMin1+ "\t"+ iMin2);
    }
}