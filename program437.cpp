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

template<class T>
struct NodeD    //Doubly (linear ad circular)
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};

// Class of singly linear Linked list
template<class T>
class SinglyLL
{
    public:
        struct NodeS<T> *first;
        int iCount;
};

// Class of singly circular Linked list
template<class T>
class SinglyCL
{
    public:
        struct NodeS<T> *first;
        struct NodeS<T> * last;
        int iCount;
};

// Class of doubly linear Linked list
template<class T>
class DoublyLL
{
    public:
        struct NodeD<T> *first;
        int iCount;
};

// Class of doubly circular Linked list
template<class T>
class DoublyCL
{
    public:
        struct NodeD<T> *first;
        struct NodeD<T> * last;
        int iCount;
};

// Logic of 32 funtions

int main()
{
    return 0;
}