///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Create File
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program504
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to create : ");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);

            boolean bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File Successfully Created");

            }
            else
            {
                System.out.println("Unable to create file");
            }
        }
        catch(IOException iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }

        
    }
}