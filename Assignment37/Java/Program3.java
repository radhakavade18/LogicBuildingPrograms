// PS - write a program which accepts 2 strings from user and check whether first N content of 2 strings are equal or not

import java.util.*;

class StringX
{
    public boolean StringComp(String str1, String str2, int No)
    {
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int i = 0;
        for(i = 0; i < No; i++)
        {
            if(Arr[i] != Brr[i])
            {
                return false;
            }
        }
        return true;
    }
}

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter 1st string");
        String str1 = sobj.nextLine();

        System.out.println("Enter 2nd string");
        String str2 = sobj.nextLine();

        System.out.println("Enter number of characters that you want to compare");
        int Value = sobj.nextInt();

        StringX obj = new StringX();

        boolean bret = obj.StringComp(str1, str2, Value);

        if(bret == true)
        {
            System.out.println("The first "+ Value + "number of characters from string are same");
        }
        else
        {
            System.out.println("The first "+ Value + "number of characters from string are not same");
        }
    }
}