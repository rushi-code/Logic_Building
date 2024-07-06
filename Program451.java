///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Singly Linear Linked List
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program451
{
    public static void main(String[] args) 
    {
        SinglyLL obj =  new SinglyLL();  

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();

        System.out.println("Number of elements are : "+obj.Count());                

        obj.DeleteFirst();

        obj.Display();

        System.out.println("Number of elements are : "+obj.Count());                
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
    {
        System.out.println("Elements of Linked List are :");

        Node temp = first;

        while(temp!=null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return this.iCount;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        iCount++;
    }

    public void InsertLast(int no)
    {
        Node newn = new Node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            Node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void InsertAtPos(int no, int iPos)
    {}

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        if(first.next == null)
        {
            first = null;
        }
        else
        {
            first = first.next;
        }
        iCount--;
    }

    public void DeleteLast()
    {}

    public void DeleteAtPos(int iPos)
    {}

}

