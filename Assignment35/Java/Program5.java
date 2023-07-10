 // PS - Write a java program which accept number from user and return Difference of summation of even and odd digits

import java.util.*;

class DigitDemo
{
    public int SumEven(int No)
    {
        int iSum = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit % 2) == 0)
            {
                iSum = iSum + iDigit;
            }
            No = No / 10;
        }
        return iSum;
    }

    public int SumOdd(int No)
    {
        int iSum = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit % 2) != 0)
            {
                iSum = iSum + iDigit;
            }
            No = No / 10;
        }
        return iSum;
    }

    public int Difference(int No)
    {
        int Even = SumEven(No);
        int Odd = SumOdd(No);

        return Even - Odd;
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int No = sobj.nextInt();

        DigitDemo dobj = new DigitDemo();
        int iRet = dobj.Difference(No);

        System.out.println("Difference of summation of even and odd digits are : "+iRet);
    }
}