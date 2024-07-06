///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Doubly Circular LinkedList Template
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef struct Node 
{
    int Data;
    struct Node *next;
    struct Node *prev;
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

int main()
{
    
    return 0;
}