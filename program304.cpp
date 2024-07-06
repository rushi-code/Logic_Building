///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear LinkedList template
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

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleterFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

        void Dispaly();
        int Count();
};

// Implementation of all behaviours.

int main()
{
    SinglyLL obj1();
    
    return 0;
}