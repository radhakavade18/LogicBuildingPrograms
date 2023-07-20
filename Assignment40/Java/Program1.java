// PS - write java program which accepts string from user and display below pattern
// H	e	l	l	o	
// H	e	l	l	o	
// H	e	l	l	o	
// H	e	l	l	o	
// H	e	l	l	o

import java.util.*;

class StrPattern
{
    public void CharPattern(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            for(int i = 0; i < Arr.length; i++)
            {
                System.out.print(Arr[i]+ "\t");
            }
            // for(char ch : Arr)
            // {
            //     System.out.print(ch + "\t");
            // }
            System.out.println();
        }
    }
}

class Program1
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