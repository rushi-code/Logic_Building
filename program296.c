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
{}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{}

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