///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and find its factorial
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program328
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        int iMult = 1;

        for(int iCnt = 1; iCnt<=iNo; iCnt++)
        {
            iMult = iMult * iCnt;
        }

        System.out.println("Factorial is : "+iMult);

        sobj.close();
    }
}