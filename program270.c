//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Doubly Linear Linked List Template
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;  //  #

}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{}

void InsertLast(PPNODE Head, int No)
{}

void InsertAtPos(PPNODE Head, int No, int Pos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;

    return 0;
}