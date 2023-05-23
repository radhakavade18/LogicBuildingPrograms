// PS - Accept character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*).

#include <stdio.h>
#include <stdbool.h>

bool CheckSpecial(char ch)
{
    bool bFlag = true; 
    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) || ((ch >= '0') && (ch <= '9')))
    {
        bFlag = false;
    }
    return bFlag;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character \n");
    scanf("%c", &ch);

    bRet = CheckSpecial(ch);

    if (bRet == true)
    {
        printf("It is a special symbol \n");
    }
    else
    {
        printf("Its not a special symbol \n");
    }

    return 0;
}