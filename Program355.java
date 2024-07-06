///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User and count small and  capital characters
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program355
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        StringX obj =  new StringX();

        int iRet = obj.CountSmall(name);
        System.out.println("Total Small Characters are : "+iRet);

        iRet = obj.CountCap(name);
        System.out.println("Total Capital Characters are : "+iRet);

        sobj.close();
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt<str.length(); iCnt++)
        {
            if((str.charAt(iCnt)>='a')&& (str.charAt(iCnt)<='z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountCap(String str)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt<str.length(); iCnt++)
        {
            if((str.charAt(iCnt)>='A')&& (str.charAt(iCnt)<='Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}