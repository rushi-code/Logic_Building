//Accept number and return multiplication of even factors

import java.util.*;

class program331
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number: ");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.EvenFact(iNo);

        System.out.println("Multiplication of even factors is "+iRet);

        sobj.close();
    }
}

class Numbers
{
    public int EvenFact(int iValue)
    {
        int iMult = 1;
        for(int iCnt =1;iCnt<=iValue;iCnt++)
        {
            if((iValue % iCnt) == 0)
            {
                if(iCnt %2 == 0)
                {
                    iMult = iMult * iCnt;
                }
            }
        }
        return iMult;
    }
}


