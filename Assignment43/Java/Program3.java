// PS - Write a java program which accepts array from user and copy the content of that array into another array in reverse order

import java.util.*;

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements of array");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements of array");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        int ArrRev[] = new int[Arr.length];
        int Start = 0;
        int End = Arr.length - 1;
        int temp = 0;

        while(Start > End)
        {
            temp = Arr[Start];
            ArrRev[Start] = Arr[End];
            ArrRev[End] = temp;

            Start++;
            End--;
        }
        System.out.println(ArrRev);
    }
}