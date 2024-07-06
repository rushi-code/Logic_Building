///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept number of element from user, allocate memory and display array
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program345
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number Of Elements");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();

        sobj.close();
    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Elements : ");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of Array are : ");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}
