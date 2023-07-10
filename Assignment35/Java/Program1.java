// PS - Write a java program which accept number from user and return count of even digits

import java.util.*;

class DigitDemo
{
    public int CountEven(int No)
    {
        int Even = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit % 2) == 0)
            {
                Even++;
            }
            No = No / 10;
        }
        return Even;
    }
}

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int No = sobj.nextInt();

        DigitDemo dobj = new DigitDemo();
        int iRet = dobj.CountEven(No);

        System.out.println("Count of even digits are : "+iRet);
    }
}