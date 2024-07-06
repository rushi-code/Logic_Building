///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and return addition of digits
//
//////////////////////////////////////////////////////////////////////

import java.util.*;


class Program338
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

       int iRet = dobj.SumDigits(iNo);

        System.out.println("Summation of digits is : "+iRet);

        sobj.close();
    }
}

class Digits
{
    int SumDigits(int iValue)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iSum = iSum + iDigit;
            iValue = iValue / 10;
        }
        return iSum;
    }
    
}


