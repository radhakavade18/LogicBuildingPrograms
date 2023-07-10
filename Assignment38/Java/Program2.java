// PS - write java program which accepts number of rows and number of columns from user and display below pattern
// A	B	C	D	
// a	b	c	d	
// A	B	C	D	
// a	b	c	d

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
        char ch = 'A';
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if((i % 2) != 0)
                {
                    System.out.print((char)(ch + 32)+"\t");
                }
                else{
                    System.out.print(ch+"\t");
                }
                ch++;
            }
            ch = 'A';
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