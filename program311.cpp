///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear LinkedList 
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

struct Node 
{
    int Data;
    struct Node *next;
};

typedef struct  Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

        void Display();
        int Count();
};

void SinglyLL:: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn =  new NODE;

    newn->Data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL:: InsertLast(int No)
{
    PNODE newn = NULL;
    newn =  new NODE;

    newn->Data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;        
    }

    iCount++;
}

void SinglyLL:: InsertAtPos(int No, int Pos)
{
    if((Pos<1)||(Pos>iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(No);
    }
    else if(Pos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE temp =  First;

        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE newn = new NODE;
        newn->Data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL:: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        PNODE temp =  First;
        First = First->next;

        delete temp;
    }
    iCount--;
}

void SinglyLL:: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL:: DeleteAtPos(int Pos)
{
    if((Pos<1)||(Pos>iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst();
    }
    else if(Pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp =  First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        tempX = temp->next;
        temp->next = temp->next->next;
        
        delete tempX;
        iCount--;

    }
}

void SinglyLL:: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked list are : "<<"\n";

    while(temp!= NULL)
    {
        cout<<"| "<<temp->Data<<" | -> ";
        temp = temp->next;
    }

    cout<<" NULL"<<"\n";
}

int SinglyLL:: Count()
{
    return iCount;
}

SinglyLL:: SinglyLL()
{
    cout<<"Inside Constructor\n";

    First = NULL;
    iCount = 0;
}
SinglyLL:: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

int main()
{
    SinglyLL obj1;
    int iRet = 0;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    
    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj1.InsertAtPos(55,4);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj1.DeleteAtPos(4);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}