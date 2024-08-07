///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Database Management
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

public class Program525
{
    public static void main(String[] args) 
    {
        Student sobj1 = new Student("Amit",23,89);
        Student sobj2 = new Student("Sagar",24,90);

        sobj1.Display();
        sobj2.Display();
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

}