// PS - Write a program which display product of all digits of all element from singly linear linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iMult = 1;
    int iTemp = 0;

    while (Head != NULL)
    {
        iTemp = Head->data;

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            if (iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iTemp = iTemp / 10;
        }
        printf("%d \t", iMult);
        iMult = 1;
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

    DisplayProduct(First);

    return 0;
}