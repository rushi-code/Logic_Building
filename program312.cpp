//Singly linear LL using OOP (All 8 Functions menu driven)
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyLL
{
    private:
        PNODE First;    //Characteristics
        int iCount;     //Characteristics
    
    public:
        SinglyLL();
        ~SinglyLL();

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
{
    PNODE newn = NULL;
    newn = new NODE; //newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(First == NULL) //LL is empty
    {
        First = newn;
    }
    else //LL contain atleast one node in it
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE; //newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(First == NULL) //LL is empty
    {
        First = newn;
    }
    else //LL contain atleast one node in it
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


void SinglyLL::DeleteFirst()
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
        First = First->next;
        delete temp;

    }
    iCount--;
}

void SinglyLL::DeleteLast()
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
        while(temp->next->next!=NULL)
        {
            temp  = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        
    }
    iCount--;
}


void SinglyLL::Display()
{
    PNODE temp = First;
    cout<<"Elements of LL are "<<"\n";
    while(temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

SinglyLL::~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

void SinglyLL::InsertAtPos(int No, int iPos)
{
    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"Invalid Pos\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE temp = First;
        for(int iCnt =1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        PNODE newn = new NODE;
        newn->data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void SinglyLL::DeleteAtPos(int iPos)
{
    if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invalid Pos\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        PNODE tempX = NULL;

        tempX = temp->next;
        temp->next = temp->next->next;

        delete tempX;

        iCount--;
    }
}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous LinkedList Application\n";

    while(1) //unconditional loop
    {
        cout<<"--------------------------------------\n";
        cout<<"Plz Enter Your Choice :\n";
        
        cout<<"1: Insert node at First Position\n";
        cout<<"2: Insert node at Last Position\n";
        cout<<"3: Insert node at given Position\n";
        cout<<"4: Delete node at First Position\n";
        cout<<"5: Delete node at last Position\n";
        cout<<"6: Delete node at given Position\n";
        cout<<"7: Display Elements of LL\n";
        cout<<"8: Count number of nodes from LL\n";
        cout<<"9: Terminate the Application\n";

        cin>>iChoice;

        cout<<"--------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value that you want to insert : \n";
                cin>>iValue;

                cout<<"Enter Pos\n";
                cin>>iPosition;
                obj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter Pos\n";
                cin>>iPosition;
                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Number of elemnets are "<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank you for using application\n";
                return 0;

            default :
                cout<<"Invalid choice\n";
                break;

        }
    }

    return 0;
}