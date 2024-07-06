///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Get File Name
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program506
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            String name = fobj.getName();

            System.out.println("File name is : "+name);
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}