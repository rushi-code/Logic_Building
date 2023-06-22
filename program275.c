//Doubly linear linked list (DeleteFirst)
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;  //#
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL)  //LL is empty
    {
      *Head = newn;
    }
    else             // LL contains at least one node
    {
      (*Head)->prev = newn;   //#
      newn->next = *Head;     
      *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE temp = *Head;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL)  //LL is empty
    {
      *Head = newn;
    }
    else             // LL contains at least one node
    {
      while(temp->next!= NULL)    //type2
      {
        temp = temp->next;
      }
      temp->next = newn;
      newn->prev = temp;  //#
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
  
}

void DeleteFirst(PPNODE Head)
{
  
    if(*Head == NULL)   //LL is empty
    {
      return;
    }
    else if((*Head)->next == NULL)// LL having 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else    // LL contains more than 1 node
    {
        *Head =(*Head)->next;
        free((*Head)->prev);    //#
        (*Head)->prev = NULL;   //#

    }
}

void DeleteLast(PPNODE Head)
{
    if(*Head == NULL)   //LL is empty
    {
      return;
    }
    else if((*Head)->next == NULL)// LL having 1 node
    {
        free(*Head);
        *Head = NULL;
        
    }
    else    // LL contains more than 1 node
    {
        
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
  
}

void Display(PNODE Head)
{
    printf("Element of LL are\n");
    printf("NULL <=>");
    while(Head!=NULL)
    {
      printf(" |%d| <=>",Head->data);
      Head = Head->next;
    }
    printf(" NULL\n");
}

int Count(PNODE Head)
{
  int iCount = 0;
    while(Head!=NULL)
    {
      iCount++;
      Head = Head->next;
    }
    return iCount;
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  InsertFirst(&First,101);
  InsertFirst(&First,51);
  InsertFirst(&First,21);
  InsertFirst(&First,11);

  Display(First);
  
  iRet =Count(First);
  printf("Total Nodes in LL are %d\n",iRet);

  InsertLast(&First,111);
  InsertLast(&First,121);

   Display(First);
  
  iRet =Count(First);
  printf("Total Nodes in LL are %d\n",iRet);

  
  

  return 0;
}