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
        ~SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

        void Display();
        int Count();
};

void SinglyLL:: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn =  new NODE;

    newn->Data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL:: InsertLast(int No)
{
    PNODE newn = NULL;
    newn =  new NODE;

    newn->Data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;        
    }

    iCount++;
}

void SinglyLL:: InsertAtPos(int No, int Pos)
{}

void SinglyLL:: DeleteFirst()
{}

void SinglyLL:: DeleteLast()
{}

void SinglyLL:: DeleteAtPos(int Pos)
{}

void SinglyLL:: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked list are : "<<"\n";

    while(temp!= NULL)
    {
        cout<<"| "<<temp->Data<<" | -> ";
        temp = temp->next;
    }

    cout<<" NULL"<<"\n";
}

int SinglyLL:: Count()
{
    return iCount;
}

SinglyLL:: SinglyLL()
{
    cout<<"Inside Constructor\n";

    First = NULL;
    iCount = 0;
}
SinglyLL:: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;
    int iRet = 0;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();

    iRet = obj1.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj2.InsertFirst(20);
    obj2.InsertFirst(10);
    obj2.InsertLast(30);
    obj1.InsertLast(40);
    obj1.InsertLast(50);

    obj2.Display();

    iRet = obj2.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}