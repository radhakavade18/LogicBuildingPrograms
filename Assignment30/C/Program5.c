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

int Smallest(PNODE Head){
    int iSmall = Head->data;

    while (Head != NULL)
    {
        if(iSmall > Head->data){
            iSmall = Head->data;
        }
        Head = Head->next;
    }
    return iSmall;
    
}

int main() {
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Smallest(First);
    printf("\nSmallest elements from linked list is %d \n", iRet);

    return 0;
}