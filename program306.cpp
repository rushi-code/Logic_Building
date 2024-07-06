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

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

        void Display();
        int Count();
};

void SinglyLL:: InsertFirst(int no)
{}

void SinglyLL:: InsertLast(int no)
{}

void SinglyLL:: InsertAtPos(int no, int ipos)
{}

void SinglyLL:: DeleteFirst()
{}

void SinglyLL:: DeleteLast()
{}

void SinglyLL:: DeleteAtPos(int ipos)
{}

void SinglyLL:: Display()
{}

int SinglyLL:: Count()
{
    return 0;
}

SinglyLL:: SinglyLL()
{
    cout<<"Inside Constructor\n";

    First = NULL;
    iCount = 0;
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    
    
    return 0;
}