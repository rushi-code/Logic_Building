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

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

        void Display();
        int Count();
};

DoublyCL:: DoublyCL()
{}

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

void DoublyCL:: Display()
{}

int DoublyCL:: Count()
{
    return iCount;
}

int main()
{
    DoublyCL obj;
    
    return 0;
}