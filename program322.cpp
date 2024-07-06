///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Stack
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int Data;
        Node *next;

        Node (int Value)
        {
            Data = Value;
            next = NULL;
        }
}NODE,*PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Push(int No);
        int Pop();
        void Display();
        int Count();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack :: Push(int No)  //InsertLast
{
    PNODE newn = new NODE(No);

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

void Stack :: Display()
{
    cout<<"Elements of stack are : \n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt<=iCount; iCnt++)
    {
        cout<<temp->Data<<"\n";
        temp = temp->next;
    }
}

int Stack :: Pop()  //DeleteLast
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }

    else if(iCount == 1)
    {
        Value = First->Data;
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        Value = temp->next->Data;
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
    return Value;

}

int Stack :: Count()
{

    return iCount;
}

int main()
{
    return 0;
}