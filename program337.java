//Accept number and count digits from number

import java.util.*;

class program337
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number: ");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();

        int iRet = nobj.CountDigits(iNo);

        System.out.println("Total Digits are "+iRet);

        sobj.close();
    }
}

class Digits
{
    public int CountDigits (int iValue)
    {
        int iCount = 0;
       
        while(iValue!=0)
        {
            
            iCount++;
            iValue = iValue/10;
        }
       
       return iCount;

    }
}


