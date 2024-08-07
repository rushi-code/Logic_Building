///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Summation of each row matrix
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program390
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;

        System.out.println("Enter Number of Rows");
        iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        int iRet = 0;
        iRet = mobj.Sumation();
        System.out.println("Summation is : "+iRet);

        mobj.SummationRow();
    }
}

class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }
    
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Elements : ");
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    int Sumation ()
    {
        int iSum = 0;

        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                iSum  = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    void SummationRow()
    {
        int iSum = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println("Summation of Row number : "+(i+1)+" is : "+iSum);

            iSum = 0;
        }
    }
}