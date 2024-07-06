///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and reverse string using inbuilt function
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program377
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringBuffer sbobj = new StringBuffer(str);

        sbobj = sbobj.reverse();
        System.out.println(sbobj);        
        
        sobj.close();
    }
}