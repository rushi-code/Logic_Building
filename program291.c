//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Circular LinkedList template
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}NODE, *PNODE, **PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | -> ",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);

        printf("\n");
    }
    else
    {
        printf("LinkedList is empty\n");
    }
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;
        }while(Head != Tail->next);

        return iCnt;
    }
    else
    {
        return 0;
    }
    
}

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = No;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }

    else
    {
        newn->next = *Head;
        *Head = newn;
    }

    (*Tail)->next = *Head;
    
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = No;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        (*Tail) = (*Tail)->next;  
    }
    (*Tail)->next = *Head;

}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int Pos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int Pos)
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;  //  #

    int iRet = 0;

    InsertFirst(&First,&Last,121);
    InsertFirst(&First,&Last,111);
    InsertFirst(&First,&Last,101);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,&Last,131);
    InsertLast(&First,&Last,141);
    InsertLast(&First,&Last,151);
    InsertLast(&First,&Last,161);
    InsertLast(&First,&Last,171);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}