///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and reverse string
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program363
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        StringX obj =  new StringX();

        String sret = obj.Reverse(name);

        System.out.println("Result is : "+sret);

        sobj.close();
    }
}

class StringX
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();
        int iStart = 0;
        int iEnd = Arr.length- 1;

        char cTemp = ' ';

        while(iStart<iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);

    }
}