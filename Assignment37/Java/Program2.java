// PS - write a program which accepts 2 strings from user and check whether content of 2 strings are equal or not

import java.util.*;

class StringX
{
    public boolean StringComp(String str1, String str2)
    {
        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        if(Arr.length != Brr.length)
        {
            return false;
        }

        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] != Brr[i])
            {
                return false;
            }
        }
        return true;
    }
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter 1st string");
        String str1 = sobj.nextLine();

        System.out.println("Enter 2nd string");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bret = obj.StringComp(str1, str2);

        if(bret == true)
        {
            System.out.println("Strings are same");
        }
        else
        {
            System.out.println("Strings are not same");
        }
    }
}