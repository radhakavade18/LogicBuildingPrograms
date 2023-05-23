// PS - Accept character from user and check whether it is alphabet or not

#include <stdio.h>
#include<stdbool.h>

bool CheckChar(char ch){
    if(((ch >= 'a')&&(ch <= 'z')) || ((ch >= 'A') &&(ch <= 'Z'))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char ch = '\0';
    bool bRet = false;

    printf("Enter character \n");
    scanf("%c", &ch);

    bRet = CheckChar(ch);

    if(bRet == true){
        printf("It is a Character \n");
    } else {
        printf("Its not a Character \n");
    }

    return 0;
}