///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear Linked List
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program448
{
    public static void main(String[] args) 
    {
        SinglyLL obj =  new SinglyLL();  
    }
}

class Node
{
    public int data;
    public Node next;

    public Node(int no)
    {
        this.data = no;
        this.next = null;  
    }
}

class SinglyLL
{
    public Node first;
    public int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {}

    public int Count()
    {
        return 0;
    }

    public void InsertFirst(int no)
    {}

    public void InsertLast(int no)
    {}

    public void InsertAtPos(int no, int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}

}

