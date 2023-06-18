// PS - Write a program which returns addition of all element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} NODE, * PNODE, ** PPNODE;

int Addition(PNODE Head) {
    int iSum = 0;
    while (Head != NULL)
    {
        iSum = iSum + Head->data;
        Head = Head->next;
    }
    return iSum;
}

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

int main() {
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Addition(First);
    printf("\nAddition of all elements from linked list is %d \n", iRet);

    return 0;
}