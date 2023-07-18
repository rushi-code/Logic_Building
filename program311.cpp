//Singly linear LL using OOP (All 8 Functions)
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
    int iRet = 0;
    SinglyLL obj1;
    
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.InsertAtPos(55,4);
    obj1.Display();
    obj1.DeleteAtPos(4);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of Nodes in LL are "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of Nodes in LL are "<<iRet<<"\n";

   
    return 0;
}