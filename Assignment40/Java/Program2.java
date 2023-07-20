// PS - write java program which accepts string from user and display below pattern
// h	e	l	l	o	
// h	e	l	l	
// h	e	l	
// h	e	
// h

import java.util.*;

class StrPattern
{
    public void CharPattern(String str)
    {
        char Arr[] = str.toCharArray();

        int len = Arr.length;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            for(int i = 0; i < len; i++)
            {
                System.out.print(Arr[i]+ "\t");
            }
            len--;
            System.out.println();
        }
    }
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        StrPattern pobj = new StrPattern();

        pobj.CharPattern(str);
    }
}