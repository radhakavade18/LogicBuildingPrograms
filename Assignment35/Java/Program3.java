// PS - Write a java program which accept number from user and return count of digits are in between 3 and 7

import java.util.*;

class DigitDemo
{
    public int CountRange(int No)
    {
        int range = 0;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit >= 3) && (iDigit <= 7))
            {
                range++;
            }
            No = No / 10;
        }
        return range;
    }
}

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int No = sobj.nextInt();

        DigitDemo dobj = new DigitDemo();
        int iRet = dobj.CountRange(No);

        System.out.println("Count of digits are : "+iRet);
    }
}