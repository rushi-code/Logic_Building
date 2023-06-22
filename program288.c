//singly circular linked list (InsertLast)

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head== NULL)&&(*Head == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn; 
        //(*Tail)->next = *Head;
    }
    else    //LL contains at least one node
    {
        newn->next = *Head;
        *Head = newn;
        //(*Tail)->next = *Head;
    }
    (*Tail)->next = *Head; // common statement after if else  condition
}

void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head== NULL)&&(*Head == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;  
    }
    else    //LL contains at least one node
    {
        (*Tail)->next = newn;
        *Tail = (*Tail)->next;  //*Tail  = newn

    }
    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{}

void DeleteLast(PPNODE Head, PPNODE Tail)
{}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}

void Display(PNODE Head, PNODE Tail)
{}

int Count(PNODE Head, PNODE Tail)
{
  return 0;
}



int main()
{
  PNODE First = NULL;
  PNODE Last = NULL;      //#

  return 0;
}