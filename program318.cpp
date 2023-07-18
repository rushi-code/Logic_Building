//Doubly circular linked list OOP  (class Node)

#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

        Node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }

        Node (int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }

}NODE,*PNODE;

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
        virtual void InsertLast(int ino)= 0;
        virtual void InsertAtPos(int ino, int ipos)= 0;

        virtual void DeleteFirst()= 0;
        virtual void DeleteLast()= 0;
        virtual void DeleteAtPos(int ipos)= 0;

        void Display()
        {
            PNODE temp = First;
            cout<<"Elements of LL are : "<<"\n";
            for(int iCnt = 1; iCnt<=iCount; iCnt++)
            {
                cout<<"| "<<temp->data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL"<<"\n";
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

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int ino, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
};

DoublyCL::DoublyCL()
{
    Last = NULL;
}

DoublyCL::~DoublyCL()
{}

void DoublyCL::InsertFirst(int ino)
{
    PNODE newn = new Node(ino);

    if(First == NULL && Last == NULL)
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

void DoublyCL::InsertLast(int ino)
{
    PNODE newn = new Node(ino);

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
       Last->next = newn;
       newn->prev = Last;
       Last = Last->next;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}

void DoublyCL::InsertAtPos(int ino, int ipos)
{}

void DoublyCL::DeleteFirst()
{}

void DoublyCL::DeleteLast()
{}

void DoublyCL::DeleteAtPos(int ipos)
{}

int main()
{
    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of Linked List is "<<obj.Count()<<"\n";

    return 0;
}