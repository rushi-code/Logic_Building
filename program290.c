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
int Count(PNODE Head, PNODE Tail)
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;  //  #

    return 0;
}