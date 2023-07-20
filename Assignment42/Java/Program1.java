// PS - Write a java program which accepts 2 array from user and display elements of 2 array

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

        System.out.println("Elements of 1st array are :");
        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
            System.out.print(Arr1[iCnt]+"\t");
        }

        System.out.println();

        System.out.println("Elements of 2nd array are :");
        for(int iCnt = 0; iCnt < iSize2; iCnt++)
        {
            System.out.print(Arr2[iCnt]+"\t");
        }
    }
}