// PS - Program to print 5 to 1 numbers on screen

#include<stdio.h>

void DisplayNumber() {
    for(int i = 1; i <= 5; i++) {
        printf("%d \n",i);
    }
}

int main() {
    DisplayNumber();

    return 0;
}