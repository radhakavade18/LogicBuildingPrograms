// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// 1	2	3	4	
// 1	2	3	4	
// 1	2	3	4	
// 1	2	3	4

import java.util.*;

class Pattern
{
    public int Arr[][];

    public Pattern(int i, int j)
    {
        Arr = new int[i][j];
    }

    public void CharPattern()
    {
        int pat = 1;
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(pat+"\t");
                pat++;
            }
            pat = 1;
            System.out.println();
        }
    }
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int iRows = sobj.nextInt();

        System.out.println("Enter number of columns");
        int iCols = sobj.nextInt();

        Pattern pobj = new Pattern(iRows, iCols);

        pobj.CharPattern();
    }
}