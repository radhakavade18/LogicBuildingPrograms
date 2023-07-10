// PS - write java program which accept N numbers from user and accept one more number and check whether that number is present or not.
import java.util.*;

class ArrayX
{
    public boolean CheckNum(int Arr[], int No)
    {
        boolean bFlag = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == No)
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}

class Program1
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
        boolean bret = aobj.CheckNum(Arr, No);

        if(bret == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is not present");
        }
    }
}