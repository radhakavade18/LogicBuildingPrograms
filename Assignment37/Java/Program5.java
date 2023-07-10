// PS - write a program which accepts string from user and check whether the string is pallindrom or not
// Without considering its case
// EX = 1abccBA1 => true

import java.util.*;

class StringX
{
    public boolean CheckPallindrom(String str)
    {
        str = str.toLowerCase();

        String backup = str;
        char Arr[] = str.toCharArray();

        int Start = 0;
        int End = Arr.length-1;
        char temp = ' ';

        while(Start < End)
        {
            temp = Arr[Start];
            Arr[Start] = Arr[End];
            Arr[End] = temp;

            Start++;
            End--;
        }

        String ret = new String(Arr);

        if(backup.equals(ret))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bret = obj.CheckPallindrom(str);

        if(bret == true)
        {
            System.out.println("String is pallingdrom");
        }
        else
        {
            System.out.println("String is not pallingdrom");
        }
    }
}