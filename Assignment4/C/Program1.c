// PS- Accept name from user and print that name

#include<stdio.h>

void DisplayName(char *str){
    printf("Name entered by user is %s", str);
}

int main() {
    char str[20];

    printf("Enter name \n");
    scanf("%s", &str);

    DisplayName(str);

    return 0;
}