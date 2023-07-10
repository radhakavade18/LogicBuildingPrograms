// PS - write java program which accept N numbers from user and accept one more number and return index of 1st occurance of that number
import java.util.*;

class ArrayX
{
    public int CheckNumIndex(int Arr[], int No)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                return iCnt;
            }
        }
        return -1;
    }
}

class Program2
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

        System.out.println("Enter number that you want to search");
        int No = sobj.nextInt();

        ArrayX aobj = new ArrayX();
        int iret = aobj.CheckNumIndex(Arr, No);
        
        if(iret == -1)
        {
            System.out.println("number is not present");
        } else
        {
            System.out.println("1st occurance is at index :"+iret);
        }
    }
}