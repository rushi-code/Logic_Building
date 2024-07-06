///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Doubly Circular LinkedList Template
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef class Node 
{
    public:
    
    int Data;
    struct Node *next;
    struct Node *prev;

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
{}

void DoublyCL:: InsertLast(int No)
{}

void DoublyCL:: InsertAtPos(int No, int Pos)
{}

void DoublyCL:: DeleteFirst()
{}

void DoublyCL:: DeleteLast()
{}

void DoublyCL:: DeleteAtPos(int Pos)
{}

int main()
{
    DoublyCL obj;

    

    obj.Display();
    cout<<"Length of Linked list is : "<<obj.Count()<<"\n";
    
    return 0;
}