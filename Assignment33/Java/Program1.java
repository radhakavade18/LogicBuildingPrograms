// PS - Write a java program which accept string ffrom user and return count of number of capital letters

import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String content = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountCapital(content);

        System.out.println("Count of capital characters are : "+iRet);
    }
}