// PS - Write a program which display all element which are prime from singly linear linked list.

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void CheckPrime(PNODE Head)
{
    int iCnt = 1;
    int iTemp = 0;
    bool bRet = true;

    while (Head != NULL)
    {
        iTemp = Head->data;
        for (iCnt = 2; iCnt <= (iTemp/2); iCnt++)
        {
            if ((iTemp % iCnt) == 0)
            {
                bRet = false;
            }
        }
        if(bRet == true){
            printf("%d \n", Head->data);
        }
        Head = Head->next;
    }
}

void Display(PNODE Head)
{
    printf("Elements from linked list is \n");

    while (Head != NULL)
    {
        printf("|%d| ", Head->data);
        Head = Head->next;
    }
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 11);

    Display(First);

    CheckPrime(First);

    return 0;
}