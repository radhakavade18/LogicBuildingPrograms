// PS - Write a java program which accept string ffrom user and return count of number of small letters

import java.util.*;

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String content = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(content);

        System.out.println("Count of small characters are : "+iRet);
    }
}