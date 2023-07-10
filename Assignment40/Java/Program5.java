// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// 1	1	1	1	
// 2	2	2	2	
// 3	3	3	3	
// 4	4	4	4

import java.util.*;

class Pattern
{
    public int Arr[][];

    public Pattern(int i, int j)
    {
        Arr = new int[i][j];
    }

    public void DigitPattern()
    {
        int digit = 1;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(digit+"\t");
            }
            digit++;
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int iRows = sobj.nextInt();

        System.out.println("Enter number of columns");
        int iCols = sobj.nextInt();

        Pattern pobj = new Pattern(iRows, iCols);

        pobj.DigitPattern();
    }
}