///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and remove whitespaces
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program360
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        StringX obj =  new StringX();

        String sret = obj.RemoveWhiteSpace(name);

        System.out.println("Result is : "+sret);

        sobj.close();
    }
}

class StringX
{
    public String RemoveWhiteSpace(String str)
    {
        char Arr[] = str.toCharArray();
        char Brr[] = new char[Arr.length];
        int i = 0;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] != ' '))
            {
                Brr[i] = Arr[iCnt];
                i++;
            }
        }

        return new String(Brr);
    }
}