// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// 1	2	3	4	
// 1	2	3	4	
// 1	2	3	4	
// 1	2	3	4

import java.util.*;

class Pattern
{
    public void CharPattern(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            for(char ch : Arr)
            {
                System.out.print(ch + "\t");
            }
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

        Pattern pobj = new Pattern();

        pobj.CharPattern(str);
    }
}