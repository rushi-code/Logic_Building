//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Linked list template
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}NODE, *PNODE, **PPNODE;

void Display(PNODE Head)
{
    printf("Elements of LINKEDLIST are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
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

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    return 0;
}