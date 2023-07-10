// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// * 	# 	* 	# 	
// * 	# 	* 	# 	
// * 	# 	* 	# 	
// * 	# 	* 	# 

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
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if((j % 2) == 0)
                {
                    System.out.print("* \t");
                }
                else
                {
                    System.out.print("# \t");
                }
            }
            System.out.println();
        }
    }
}

class Program4
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