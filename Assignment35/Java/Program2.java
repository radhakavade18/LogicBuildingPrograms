// PS - Write a java program which accept number from user and return count of odd digits

import java.util.*;

class DigitDemo
{
    public int CountOdd(int No)
    {
        int Odd = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit % 2) != 0)
            {
                Odd++;
            }
            No = No / 10;
        }
        return Odd;
    }
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int No = sobj.nextInt();

        DigitDemo dobj = new DigitDemo();
        int iRet = dobj.CountOdd(No);

        System.out.println("Count of odd digits are : "+iRet);
    }
}