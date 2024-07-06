///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User and displays characters of string
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program352
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Your Name is : "+name);

        System.out.println("Length Of String is : "+name.length());

        char str[] = name.toCharArray();

        for(int iCnt = 0; iCnt<str.length; iCnt++)
        {
            System.out.println(str[iCnt]);
        }

        sobj.close();
    }
}
