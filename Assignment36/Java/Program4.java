// PS - write java program which accept N numbers from user and accept Range and display all elements from that range
import java.util.*;

class ArrayX
{
    public void CheckRange(int Arr[], int Start, int End)
    {
        for(int iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= Start) && (Arr[iCnt] <= End))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter elements of array");
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter start range");
        int iStart = sobj.nextInt();
        System.out.println("Enter end range");
        int iEnd = sobj.nextInt();

        ArrayX aobj = new ArrayX();
        aobj.CheckRange(Arr, iStart, iEnd);
    }
}