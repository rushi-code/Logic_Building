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
class SinglyLL
{
    public:
        struct NodeS<T> *head;
        int iCount;
};

int main()
{
    SinglyLL <int> obj1;

    return 0;
}