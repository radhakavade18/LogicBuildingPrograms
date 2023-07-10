// PS - Write a java program which accept string ffrom user and return difference between small and capital chars

import java.util.*;

class StringX
{
    public int DifferenceBetweenSmallCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int Small = 0;
        int Cap = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Small++;
            }
        }
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Cap++;
            }
        }
        return Small - Cap;
    }
}

class Program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String content = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.DifferenceBetweenSmallCapital(content);

        System.out.println("Difference between small and capital characters are : "+iRet);
    }
}