///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Generic Linked List 
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};

template<class T>
class SinglyLL
{
    public:
        struct NodeS<T> *first;
        int iCount;

        SinglyLL();

        void Display();
        int Count();
        
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T, int);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

template<class T>
SinglyLL <T>:: SinglyLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements of Singly lineaer Linked List are : "<<"\n";

    NodeS<T> *temp = first; 

    while(temp!= NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int SinglyLL <T>:: Count()
{
    return iCount;
}

template<class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

template<class T>
void SinglyLL <T>:: InsertLast(T no)
{
    NodeS<T> * newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;

        }
        temp->next = newn;
    }
    iCount++;
}

template<class T>
void SinglyLL <T>:: InsertAtPos(T no, int iPos)
{}

template<class T>
void SinglyLL <T>:: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        first = first->next;
        delete temp;
    }
    iCount--;
}

template<class T>
void SinglyLL <T>:: DeleteLast()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        NodeS<T> *temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template<class T>
void SinglyLL <T>:: DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL <int>obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    SinglyLL <char>obj2;

    obj2.InsertFirst('c');
    obj2.InsertFirst('b');
    obj2.InsertFirst('a');

    obj2.InsertLast('d');
    obj2.InsertLast('e');

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    SinglyLL <double>obj3;

    obj3.InsertFirst(90.90);
    obj3.InsertFirst(80.80);
    obj3.InsertFirst(70.70);

    obj3.InsertLast(60.60);
    obj3.InsertLast(50.50);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    return 0;
}

////////////////////////////////////////////////////////////////////////