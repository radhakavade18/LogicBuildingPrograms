// PS - write a program which accepts string from user and reverse the content of that string by toggling the case

import java.util.*;

class StringX
{
    public String StrRevToggle(String str)
    {
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

        return new String(Arr);
    }
}

class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        String bret = obj.StrRevToggle(str);

        System.out.println("Result is "+bret);
    }
}