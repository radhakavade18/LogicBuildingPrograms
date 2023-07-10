// PS - Write a java program which accept string ffrom user and check whether it contains vowels in it or not

import java.util.*;

class StringX
{
    public boolean CheckVowel(String str)
    {
        char Arr[] = str.toCharArray();

        boolean bFlag = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt]== 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt]== 'U'))
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}

class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String content = sobj.nextLine();

        StringX obj = new StringX();
        boolean iRet = obj.CheckVowel(content);

        if(iRet == true)
        {
            System.out.println("String contains vowels");
        }
        else
        {
            System.out.println("System not containing vowels");
        }
    }
}