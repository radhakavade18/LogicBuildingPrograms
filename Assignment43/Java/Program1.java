// PS - Write a java program which accepts 2 array from user and display summation of elements of 2 array

import java.util.*;

class Program1
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

        int iSum1 = 0;
        int iSum2 = 0;

        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
            iSum1 = iSum1 + Arr1[iCnt];
        }
        
        for(int iCnt = 0; iCnt < iSize2; iCnt++)
        {
            iSum2 = iSum2 + Arr2[iCnt];
        }
        System.out.println("Difference between summation of 2 arrays : "+iSum1 - iSum2);
    }
}