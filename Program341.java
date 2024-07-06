///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and check whether it is Armstrong or not
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program341
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
    boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iCount = 0;

        while(iTemp != 0)
        {
            iCount++;
            iTemp = iTemp/10;
        }

        iTemp = iNo;

        int iDigit = 0, iSum = 0, iPower = 1, iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            for(iCnt = 1; iCnt<= iCount; iCnt++)
            {
                iPower = iPower * iDigit;
            }

            iSum = iSum + iPower;
            iPower = 1;
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
