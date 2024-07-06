//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Linear Linked List template
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
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head ->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head ->next;
    }
    return iCnt;
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

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head  = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head  = NULL;
    }
    else
    {
        while(temp->next->next)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet = Count(First);
    printf("Total Nodes are : %d\n",iRet);

    InsertLast(&First,60);
    InsertLast(&First,70);
    InsertLast(&First,80);
    InsertLast(&First,90);
    InsertLast(&First,100);

    Display(First);

    iRet = Count(First);
    printf("Total Nodes are : %d\n",iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);

    Display(First);

    iRet = Count(First);
    printf("Total Nodes are : %d\n",iRet);

    DeleteLast(&First);
    DeleteLast(&First);

    Display(First);

    iRet = Count(First);
    printf("Total Nodes are : %d\n",iRet);

    return 0;
}