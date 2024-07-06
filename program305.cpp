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


/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Function_Body;
    }
*/

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
{}

int main()
{
    SinglyLL obj1();
    
    return 0;
}