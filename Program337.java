///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and count digits from that number
//
//////////////////////////////////////////////////////////////////////

import java.util.*;


class Program337
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

       int iRet = dobj.CountDigits(iNo);

        System.out.println("Total Digits are : "+iRet);

        sobj.close();
    }
}

class Digits
{
    int CountDigits(int iValue)
    {
        int iCount = 0;

        while(iValue != 0)
        {
            iCount++;
            iValue = iValue / 10;
        }
        return iCount;
    }
    
}


