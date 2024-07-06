//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Singly Linear Linked List template
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int Data;
    struct Node *next;  //Self referencial structure
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

int main()
{
    PNODE First = NULL;

    return 0;
}