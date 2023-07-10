// PS - Write a java program which accept N numbers from user and display all such numbers which are even and divisible by 5

import java.util.*;

class ArrayX
{
    public void DivisibleBy5andEven(int Arr[])
    {
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 2) == 0) && ((Arr[iCnt] % 5) == 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

class Program4
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
        aobj.DivisibleBy5andEven(Arr);

    }
}