// PS - write java program which accept 2 strings from user and concat N characters of second string after first string. 
// Value of N should be accepted from user
// if 3rd parameter is grater than the size of second string then concat whole string after 1st string

import java.util.*;

class StringX
{
    public String ConcatStr(String str1, String str2, int No)
    {
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();
        char Crr[] = new char[Arr.length + Brr.length];

        int i  = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Crr[i] = Arr[iCnt];
            i++;
        }
        iCnt = 0;
        Crr[i] = ' ';
        i++;

        while(No != 0)
        {
            Crr[i] = Brr[iCnt];
            iCnt++;
            No--;
            i++;
        }

        return new String(Crr);
    }
}

class Program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter 1st string");
        String str1 = sobj.nextLine();

        System.out.println("Enter 2nd string");
        String str2 = sobj.nextLine();

        System.out.println("Enter number of character to concat");
        int No = sobj.nextInt();

        StringX obj = new StringX();
        
        String sRet = obj.ConcatStr(str1, str2, No);

        System.out.println("New concatinated sting is : "+sRet);
    }
}