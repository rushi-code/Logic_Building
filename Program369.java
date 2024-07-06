///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and remove extra whitespaces
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program369
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();
        System.out.println("Updated String is : "+str);
        
        sobj.close();
    }
}