 // PS - Write a java program which accept number from user and return multiplication of all digits

import java.util.*;

class DigitDemo
{
    public int Multiplication(int No)
    {
        int Mult = 1;
        int iDigit = 0;

        while(No != 0)
        {
            iDigit = No % 10;
            Mult = Mult * iDigit;
            No = No / 10;
        }
        return Mult;
    }
}

class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int No = sobj.nextInt();

        DigitDemo dobj = new DigitDemo();
        int iRet = dobj.Multiplication(No);

        System.out.println("Multiplication of all digits are : "+iRet);
    }
}