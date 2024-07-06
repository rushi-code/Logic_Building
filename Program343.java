///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept number of element from user, allocate memory and display array
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program343
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number Of Elements");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");
        int iCnt = 0;

        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of Array are : ");

        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        sobj.close();
    }
}
