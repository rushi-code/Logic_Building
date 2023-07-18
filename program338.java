//Accept number and return addition of digits

import java.util.*;

class program338
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number: ");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();

        int iRet = nobj.SumDigits(iNo);

        System.out.println("Summation of Digits are "+iRet);

        sobj.close();
    }
}

class Digits
{
    public int SumDigits (int iValue)
    {
        int iSum = 0;
        int iDigit = 0;
       
        while(iValue!=0)
        {
            iDigit = iValue%10;
            iSum = iSum + iDigit;
            iValue = iValue/10;
        }
       
       return iSum;

    }
}


