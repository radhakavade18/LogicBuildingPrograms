// PS - Write a java program which accept N numbers from user and return difference between summation of 
// even numbers and summation of oll elements

import java.util.*;

class ArrayX
{
    public int SumEven(int Arr[])
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }

    public int SumOdd(int Arr[])
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iSum = iSum + Arr[iCnt];
            }
        }
        return iSum;
    }

    public int Difference(int Arr[])
    {
        int Even = SumEven(Arr);
        int Odd = SumOdd(Arr);

        return Even - Odd;
    }
}

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter number of elements ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements ");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        int iRet = aobj.Difference(Arr);

        System.out.println("Difference of even and odd numbers are : "+iRet);

    }
}