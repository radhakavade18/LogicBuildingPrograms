// PS - write java program which accept N numbers from user and accept one more number and return index of last occurance of that number
import java.util.*;

class ArrayX
{
    public int CheckNumIndex(int Arr[], int No)
    {
        int last = 0;
        int occ = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                last = iCnt;
                occ++;
            }
        }
        if(occ == 0)
        {
            return -1;
        }
        else 
        {
            return last;
        }
    }
}

class Program3
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
            System.out.println("last occurance is at index :"+iret);
        }
    }
}