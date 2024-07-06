///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Array and Summation of all elements
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program346
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number Of Elements");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();

        System.out.println("Summation of elements is : "+aobj.Summation()); //Inline method call

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
        System.out.println();
    }

    public int Summation()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
