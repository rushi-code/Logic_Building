///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Stack (MenuDriven)
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

    if(First == NULL)
    {
        cout<<"Nothing to display as Stack is empty\n";
        return;
    }
    
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
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout<<"-----------------------------------------------------\n";
    cout<<"Dynamic Implementation of Stack\n";
    cout<<"-----------------------------------------------------\n";

    while(iChoice!=0)
    {
        cout<<"-----------------------------------------------------\n";
        cout<<"1 : Push element into stack\n";
        cout<<"2 : Pop element from the stack\n";
        cout<<"3 : Display elements from stack\n";
        cout<<"4 : Count number of elements from stack\n";
        cout<<"0 : Terminate the application\n";
        cout<<"-----------------------------------------------------\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to push\n";
                cin>>iValue;
                obj.Push(iValue);
                break;

            case 2:
                iRet = obj.Pop();

                if(iRet != -1)
                {
                    cout<<"Poped Element from stack is : "<<iRet<<"\n";
                }
                break;

            case 3: 
                    obj.Display();
                    break;

            case 4:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<"\n";
                break;

            case 0:
                cout<<"Thank you for using the applicatoion\n";
                break;

            default:
                cout<<"Please enter valid option\n";
                break;
        }

    }

    return 0;
}