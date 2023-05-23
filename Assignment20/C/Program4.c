// PS - Accept character from user and check whether it is small character or not

#include <stdio.h>
#include<stdbool.h>

bool CheckChar(char ch){
    if((ch >= 'a')&&(ch <= 'z')) {
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
        printf("It is a small character \n");
    } else {
        printf("Its not a small character \n");
    }

    return 0;
}