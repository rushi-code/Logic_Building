///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Doubly Linear Linked List
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program449
{
    public static void main(String[] args) 
    {
        DoublyLL obj =  new DoublyLL();  
    }
}

class Node
{
    public int data;
    public Node next;
    public Node prev;

    public Node(int no)
    {
        this.data = no;
        this.next = null; 
        this.prev = null; 
    }
}

class DoublyLL
{
    public Node first;
    public int iCount;

    public DoublyLL()
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

