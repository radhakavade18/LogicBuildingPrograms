// PS - Write a program which returns largest number from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} NODE, * PNODE, ** PPNODE;

void Display(PNODE Head) {
    printf("Elements from linked list is \n");

    while (Head != NULL)
    {
        printf("|%d| ", Head->data);
        Head = Head->next;
    }
    
}

void InsertFirst(PPNODE Head, int No){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL){
        *Head = newn;
    } else{
        newn->next = *Head;
        *Head = newn;
    }

}

int Largest(PNODE Head){
    int iLarge = 0;

    while (Head != NULL)
    {
        if(iLarge < Head->data){
            iLarge = Head->data;
        }
        Head = Head->next;
    }
    return iLarge;
    
}

int main() {
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Largest(First);
    printf("\nLargest elements from linked list is %d \n", iRet);

    return 0;
}