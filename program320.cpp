///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Doubly Circular LinkedList (OOP)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef class Node 
{
    public:
    
    int Data;
    Node *next;
    Node *prev;

    Node()
    {
        Data = 0;
        next = NULL;
        prev = NULL;
    }

    Node(int Value)
    {
        Data = Value;
        next = NULL;
        prev = NULL;

    }
}NODE, *PNODE;

class LinkedList
{
    public:
        PNODE First;
        int iCount;

        LinkedList()
        {
            First = NULL;
            iCount = 0;
        }

        virtual void InsertFirst(int ino) = 0;
        virtual void InsertLast(int ino) = 0;
        virtual void InsertAtPos(int ino, int ipos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int ipos) = 0;

        void Display()
        {
            PNODE temp = First;

            cout<<"Elements of Linked List are : "<<"\n";

            for(int iCnt = 1; iCnt<= iCount; iCnt++)
            {
                cout<<"| "<<temp->Data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
        int Count()
        {
            return iCount;
        }
};

class DoublyCL : public LinkedList
{
    private:
        PNODE Last;
    
    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);
};

DoublyCL:: DoublyCL()
{
    Last = NULL;
}

DoublyCL:: ~DoublyCL()
{}

void DoublyCL:: InsertFirst(int No)
{
    PNODE newn = new NODE(No);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }

    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyCL:: InsertLast(int No)
{
    PNODE newn = new NODE(No);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last =  Last->next;
    }

    Last->next = First;
    First->prev = Last;

    iCount++;
}



void DoublyCL:: DeleteFirst()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;

        First->prev = Last;
        Last->next = First;
    }
    iCount--;
}

void DoublyCL:: DeleteLast()
{
    if(iCount == 0)
    {
        return;
    }
    else if(iCount == 1)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete Last->next;

        First->prev = Last;
        Last->next = First;
    }
    iCount--;
}

void DoublyCL:: InsertAtPos(int No, int Pos)
{
    if((Pos<1) || (Pos> iCount+1))
    {
        printf("Invalid Position\n");
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
        PNODE temp = First;
        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }
        PNODE newn = new Node(No);

        
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}
void DoublyCL:: DeleteAtPos(int Pos)
{
    if((Pos<1) || (Pos> iCount))
    {
        printf("Invalid Position\n");
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
        PNODE temp = First;
        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        delete(temp->next->prev);

        temp->next->prev = temp;

        iCount--;
    }
}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    
    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

    obj.InsertAtPos(55,5);
    
    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";

    
    
    return 0;
}