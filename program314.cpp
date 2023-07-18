//Doubly circular linked list OOP 

#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;

}NODE,*PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int ino, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

void DoublyCL::InsertFirst(int ino)
{

}

void DoublyCL::InsertLast(int ino)
{

}

void DoublyCL::InsertAtPos(int ino, int ipos)
{

}

void DoublyCL::DeleteFirst()
{

}

void DoublyCL::DeleteLast()
{

}

void DoublyCL::DeleteAtPos(int ipos)
{

}

void DoublyCL::Display()
{

}

int DoublyCL:: Count()
{

}
int main()
{
    return 0;
}