///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Queue (MenuDriven)
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

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Enqueue(int No);
        int Dequeue();
        void Display();
        int Count();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue :: Enqueue(int No)  //InsertLast
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

int Queue:: Dequeue()  //DeleteFirst
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Queue is empty\n";
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
        Value = First->Data;
        PNODE temp = First;

        First = First->next;
        delete temp;
    }
    iCount--;
    return Value;

}


void Queue :: Display()
{

    if(First == NULL)
    {
        cout<<"Nothing to display as Queue is empty\n";
        return;
    }
    
    cout<<"Elements of Queue are : \n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt<=iCount; iCnt++)
    {
        cout<<temp->Data<<"\n";
        temp = temp->next;
    }
}


int Queue :: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Queue obj;

    cout<<"-----------------------------------------------------\n";
    cout<<"Dynamic Implementation of Queue\n";
    cout<<"-----------------------------------------------------\n";

    while(iChoice!=0)
    {
        cout<<"-----------------------------------------------------\n";
        cout<<"1 : Insert element into queue\n";
        cout<<"2 : Remove element from the queue\n";
        cout<<"3 : Display elements from queue\n";
        cout<<"4 : Count number of elements from queue\n";
        cout<<"0 : Terminate the application\n";
        cout<<"-----------------------------------------------------\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to insert\n";
                cin>>iValue;
                obj.Enqueue(iValue);
                break;

            case 2:
                iRet = obj.Dequeue();

                if(iRet != -1)
                {
                    cout<<"Removed Element from queue is : "<<iRet<<"\n";
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