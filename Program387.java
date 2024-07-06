///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Matrix
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program387
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
    }
}

class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }
}