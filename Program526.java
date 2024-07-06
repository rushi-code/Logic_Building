///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Database Management
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

public class Program526
{
    public static void main(String[] args) 
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();
    }
}

class Student
{
    public int Rno;
    public String Name;
    public int Age;
    public int Marks;

    public static int Generator;
    static
    {
        Generator = 0;
    }

    public Student(String str, int X, int Y)
    {
        this.Rno = ++Generator;
        this.Name = str;
        this.Age = X;
        this.Marks = Y;
    }

    public void Display()
    {
        System.out.println(this.Rno + " " + this.Name + " " +this.Age+ " " + this.Marks );
    }

};

class DBMS
{
    public LinkedList<Student> lobj;

    public DBMS ()
    {
        lobj = new LinkedList<Student>();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        System.out.println("Table schema created successfully...");
    }
}