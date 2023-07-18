//Matrix
import java.util.*;



class program387
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;
        System.out.println("Enter rows");
        iRow = sobj.nextInt();
        System.out.println("Enter column");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
    }
}

class Matrix
{
    public int Arr[][];
    public Matrix(int i, int j)
    {
        Arr = new int [i][j];
        
    }
}