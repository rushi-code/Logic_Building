///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Database Management
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

public class Program527
{
    public static void main(String[] args) 
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();

        obj.InsertIntoTable("Rahul", 23, 89);
        obj.InsertIntoTable("Sagar", 26, 98);
        obj.InsertIntoTable("Pooja",20,56);
        obj.InsertIntoTable("Sayali",30,78);
        obj.InsertIntoTable("Tejas",29,68);
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

    public void InsertIntoTable(String name, int age, int marks)
    {
        Student sobj = new Student(name, age, marks);
        lobj.add(sobj);
    }
}