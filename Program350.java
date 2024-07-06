///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User and return legnth
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program350
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Your Name is : "+name);

        System.out.println("Length Of String is : "+name.length());

        sobj.close();
    }
}
