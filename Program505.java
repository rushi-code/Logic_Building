///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Check Existing File
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program505
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.exists();

            if(bRet == true)
            {
                System.out.println("File is existing");

            }
            else
            {
                System.out.println("There is no such file");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }

        
    }
}