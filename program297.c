//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Doubly Circular LinkedList Template
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

}NODE, *PNODE, **PPNODE;

void Display(PNODE Head, PNODE Tail)
{}

int Count(PNODE Head, PNODE Tail)
{}

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;


}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;

        *Tail = newn;
    }
    
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{}

void DeleteLast(PPNODE Head, PPNODE Tail)
{}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int Pos)
{}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int Pos)
{}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;  

    return 0;
}