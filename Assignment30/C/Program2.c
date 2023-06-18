// PS - Write a program which search Last occurance of perticular element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node * next;
} NODE, * PNODE, ** PPNODE;

int SearchFirstOccurance(PNODE Head, int No){
    int iCnt = 1;
    int Occurance = 0;
    while (Head != NULL)
    {
        if(Head->data == No){
            Occurance = iCnt;
        }
        Head = Head->next;
        iCnt++;
    }
    return Occurance;
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
    InsertFirst(&First, 11);
    InsertFirst(&First, 51);

    Display(First);

    iRet = SearchFirstOccurance(First, 51);
    printf("\nLast occurance of 11 is %d \n", iRet);

    return 0;
}