///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear LinkedList (Menu Driven)
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef class Node 
{
    public:

        int Data;
        Node *next;

        Node ()
        {
            Data = 0;
            next = NULL;
        }

        Node(int Value)
        {
            Data = Value;
            next = NULL;
        }
}NODE, *PNODE;

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
        virtual void InsertLast(int ino) = 0;
        virtual void InsertAtPos(int ino, int ipos) = 0;

        virtual void DeleteFirst() = 0;
        virtual void DeleteLast() = 0;
        virtual void DeleteAtPos(int ipos) = 0;

        void Display()
        {
            PNODE temp = First;

            cout<<"Elements of Linked List are : "<<"\n";

            for(int icnt = 1; icnt <= iCount; icnt++)
            {
                cout<<"| "<<temp->Data<<" |-> ";
                temp = temp -> next;
            }
            cout<<"NULL"<<"\n";
        }

        int Count()
        {
            return iCount;
        }
};

class SinglyLL : public LinkedList
{
    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int Pos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int Pos);

};

void SinglyLL:: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn =  new NODE(No);

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
    newn =  new NODE(No);

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
{
    if((Pos<1)||(Pos>iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(No);
    }
    else if(Pos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE temp =  First;

        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE newn = new NODE(No);

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL:: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        PNODE temp =  First;
        First = First->next;

        delete temp;
    }
    iCount--;
}

void SinglyLL:: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
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
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL:: DeleteAtPos(int Pos)
{
    if((Pos<1)||(Pos>iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst();
    }
    else if(Pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp =  First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt<Pos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        tempX = temp->next;
        temp->next = temp->next->next;
        
        delete tempX;
        iCount--;

    }
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
    PNODE temp = First;

    for(int iCnt = 1; iCnt<=iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;


    cout<<"Marvellous LinkedList Application\n";

    while(1)
    {
        cout<<"------------------------------------------------------\n";
        cout<<"Please Enter Your Choice : \n\n";

        cout<<"1: Insert Node At First Position\n";
        cout<<"2: Insert Node At Last Position\n";
        cout<<"3: Insert Node At Given Position\n";
        cout<<"4: Delete Node From First Position\n";
        cout<<"5: Delete Node From Last Position\n";
        cout<<"6: Delete Node From Given Position\n";
        cout<<"7: Display Elements of LinkedList\n";
        cout<<"8 : Count Nodes from Linked List\n";
        cout<<"9: Terminate The Application\n";
        cout<<"------------------------------------------------------\n";

        cin>>iChoice;

        cout<<"------------------------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter Value That You Want To Insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter Value That You Want To Insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter Value That You Want To Insert : \n";
                cin>>iValue;

                cout<<"Enter The Position\n";
                cin>>iPos;

                obj.InsertAtPos(iValue,iPos);
                break;

            case 4:
                obj.DeleteFirst();
                break;
            
            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter The Position\n";
                cin>>iPos;

                obj.DeleteAtPos(iPos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Number Of Elements Are : "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank You For Using The Application\n";
                return 0;

            default:
                cout<<"Invalid choice\n";
                break;    
        }
    }

    return 0;
}