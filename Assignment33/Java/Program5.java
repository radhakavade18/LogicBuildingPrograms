// PS - Write a java program which accept string from user and reverse the string

import java.util.*;

class StringX
{
    public String ReverseString(String str)
    {
        char Arr[] = str.toCharArray();

        int Start = 0;
        int End = Arr.length-1;

        char cTemp = ' ';

        while(Start < End)
        {
            cTemp = Arr[Start];
            Arr[Start] = Arr[End];
            Arr[End] = cTemp;

            Start++;
            End--;
        }

        return new String(Arr);
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String content = sobj.nextLine();

        StringX obj = new StringX();
        String sRet = obj.ReverseString(content);

       System.out.println("Reverse string is :"+sRet);
    }
}