//Singly linear LL using OOP 
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    private:
        PNODE First;    //Characteristics
        int iCount;     //Characteristics
    
    public:
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

//Implementations of all behaviours
/*
Return_Value Class_Name :: Function_Name(Parameter_List)
{
    Function_Body;
}
*/

void SinglyLL::InsertFirst(int No)
{}

void SinglyLL::InsertLast(int No)
{}

void SinglyLL::InsertAtPos(int No, int iPos)
{}

void SinglyLL::DeleteFirst()
{}

void SinglyLL::DeleteLast()
{}

void SinglyLL::DeleteAtPos(int iPos)
{}

void SinglyLL::Display()
{}

int SinglyLL::Count()
{
    return 0;
}

SinglyLL::SinglyLL()
{}


int main()
{
    SinglyLL obj1;
    return 0;
}