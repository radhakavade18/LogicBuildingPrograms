// PS - Accept character from user and check whether it is digit or not

#include <stdio.h>
#include<stdbool.h>

bool CheckChar(char ch){
    if((ch >= '0')&&(ch <= '9')) {
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
        printf("It is a Digit \n");
    } else {
        printf("Its not a digit \n");
    }

    return 0;
}