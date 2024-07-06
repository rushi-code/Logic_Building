///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and check whether it is Armstrong or not
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program342
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        boolean bRet = dobj.CheckArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println("Number is Armstrong");
        }
        else
        {
            System.out.println("Number is not Armstrong");
        }
       
        sobj.close();
    }
}

class Digits
{
    int CountDigits(int iNo)
    {
        int iCount = 0;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo/10;
        }
        return iCount;
    }

    int Power(int X, int Y)
    {
        int iPower = 1;

        for(int iCnt = 1; iCnt<=Y; iCnt++)
        {
            iPower = iPower * X;
        }
        return iPower;

    }

    boolean CheckArmstrong(int iNo)
    {
        int iCount = 0, iDigit = 0, iRet = 0, iSum = 0, iTemp = iNo;

        iCount = CountDigits(iNo);

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRet = Power(iDigit, iCount);
            iSum = iSum + iRet;
            iNo = iNo/10;
        }

        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}
