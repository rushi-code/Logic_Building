///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear LinkedList template
//
//////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

struct Node 
{
    int Data;
    struct Node *next;
};

typedef struct  Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

class SinglyLL
{
    public:
        PNODE First;

        SinglyLL();
};

int main()
{
    return 0;
}