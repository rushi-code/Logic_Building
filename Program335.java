///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept Number and return multiplication of even factors
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program335
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.EvenFactor(iNo);

        System.out.println("Multiplication of even factors is  : "+iRet);

        sobj.close();
    }
}

class Numbers
{
    public int EvenFactor(int iValue)
    {
        int iMult = 1;

        for(int iCnt = 2; iCnt<=iValue; iCnt += 2) //(N/2)
        {
            if((iValue% iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }
        }

        if(iMult == 1)
        {
            return 0;
        }
        
        return iMult;
    }
}


