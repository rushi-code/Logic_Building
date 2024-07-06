///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User and displays characters of string
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program351
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Your Name is : "+name);

        System.out.println("Length Of String is : "+name.length());

        for(int iCnt = 0; iCnt<name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));
        }

        sobj.close();
    }
}
