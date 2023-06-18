// PS - Write a program which display all element which are perfect from singly linear linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void CheckPerfect(PNODE Head)
{
    int iCnt = 1;
    int iSum = 0;
    int iTemp = 0;
    while (Head != NULL)
    {
        iTemp = Head->data;
        for (iCnt = 1; iCnt < iTemp; iCnt++)
        {
            if ((iTemp % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if (iSum == Head->data)
        {
            printf("%d \t", Head->data);
        }
        iSum = 0;
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
    InsertFirst(&First, 6);
    InsertFirst(&First, 28);

    Display(First);

    CheckPerfect(First);

    return 0;
}