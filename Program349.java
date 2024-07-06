///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String From User
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program349
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        System.out.println("Your Name is : "+name);
        sobj.close();
    }
}
