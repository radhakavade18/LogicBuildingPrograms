// PS - Write a java program which accepts 2 array from user and combine 2 arrays

import java.util.*;

class ArrayX
{
    public String CombineArr(String str1, String str2)
    {
        char Arr1[] = str1.toCharArray();
        char Arr2[] = str2.toCharArray();

        char Arr3[] = new int[Arr1.length + Arr2.length];

        int i = 0;
        for(int icnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr3[i] = Arr1[iCnt];
            i++;
        }
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr3[i] = Arr2[iCnt];
            i++;
        }

        return new String(Arr3);
    }
}

class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements of 1st array");
        int iSize1 = sobj.nextInt();

        int Arr1[] = new int[iSize1];

        System.out.println("Enter number of elements of 2nd array");
        int iSize2 = sobj.nextInt();

        int Arr2[] = new int[iSize2];

        System.out.println("Enter elements of 1st array");
        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter elements of 2nd array");
        for(int iCnt = 0; iCnt < iSize2; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();

        String sRet = aobj.CombineArr(Arr1, Arr2);

        System.out.println("Combined array is : "+sRet);

    }
}