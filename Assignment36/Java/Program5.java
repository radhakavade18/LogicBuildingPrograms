 // PS - Write a java program which accept number from user and return product of all odd numbers

import java.util.*;

class ArrayX
{
    public int ProductX(int Arr[])
    {
        int Mult = 1;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                Mult = Mult * Arr[iCnt];
            }
        }
        return Mult;
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements of array");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        int iRet = aobj.ProductX(Arr);

        System.out.println("Product of all odd numbers are : "+iRet);
    }
}