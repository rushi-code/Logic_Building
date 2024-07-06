///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : File Length
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program507
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            System.out.println("File Length is : "+fobj.length());
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}