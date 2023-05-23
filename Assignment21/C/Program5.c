// PS - accept character from user and display its ASCII value in decimal, octal and hexadecimal

#include<stdio.h>

void DisplayASCII(char ch){
    printf("ASCII values for : %c is \n", ch);
    printf("Octal : %o \n", ch);
    printf("Hexadecimal : %x \n", ch);
    printf("Decimal : %d \n", ch);
}

int main() {
    char ch = '\0';

    printf("Enter character \n");
    scanf("%c", &ch);

    DisplayASCII(ch);

    return 0;
}