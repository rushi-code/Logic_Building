//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Linear Linked List 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void DisplayI(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d",Head->data);
        Head = Head ->next;
    }
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        DisplayR(Head->next);
    }
}

int CountI(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head =  Head->next;
    }
    return iCnt;
}

int CountR(PNODE Head)
{
    static int iCnt = 0;

    if(Head != NULL)
    {
        iCnt++;
        
        CountR(Head->next);
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


int main()
{
    PNODE First = NULL;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    DisplayR(First);

    printf("\nNumber of elements are : %d\n",CountR(First));


    
    return 0;
}