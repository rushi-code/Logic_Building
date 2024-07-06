///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User and count small characters
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program353
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        StringX obj =  new StringX();

        int iRet = obj.CountSmall(name);
        System.out.println("Total Small Characters are : "+iRet);

        sobj.close();
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]>='a')&& (Arr[iCnt]<='z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}