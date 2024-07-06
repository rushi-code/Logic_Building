//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Circular LinkedList 
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

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;

    }
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head,*Tail);

    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((Pos<1)||(Pos>iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(Pos == iLength + 1)
    {
        InsertLast(Head,Tail,No);
    }
    else
    {
        for(iCnt = 1 ; iCnt<Pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));

        newn->next =NULL;
        newn->data = No;

        newn->next = temp->next;
        temp->next = newn;
    }

}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int Pos)
{
    int iLength = 0;
    iLength = Count(*Head,*Tail);

    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = *Head;
    PNODE tempX = NULL;

    if((Pos<1)||(Pos>iLength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(Pos == iLength)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(iCnt = 1 ; iCnt<Pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        tempX = temp->next;

        temp->next = temp->next->next;

        free(tempX);

    }
}

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

    InsertAtPos(&First,&Last,55,4);

    Display(First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&First,&Last,4);
    
    Display(First,Last);
    iRet = Count(First,Last);


    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are : %d\n",iRet);


    return 0;
}