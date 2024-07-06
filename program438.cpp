///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Generic Linked List 
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct NodeS    //Singly (linear ad circular)
{
    T data;
    struct NodeS *next;
};


// Class of singly linear Linked list
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

int main()
{
    SinglyLL<int> obj1;
    
    return 0;
}