///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and count words
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program372
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        System.out.println("Total Words are : "+Arr.length);
        
        sobj.close();
    }
}