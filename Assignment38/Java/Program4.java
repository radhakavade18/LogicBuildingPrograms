// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// 4	4	4	4	
// 3	3	3	3	
// 2	2	2	2	
// 1	1	1	1

import java.util.*;

class Pattern
{
    public int Arr[][];
    public int Col = 0;

    public Pattern(int i, int j)
    {
        Arr = new int[i][j];
        Col = j;
    }

    public void DigitPattern()
    {
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Col+"\t");
            }
            Col--;
            System.out.println();
        }
    }
}

class Program3
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