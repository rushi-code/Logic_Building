///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Check Directory  and count files in directory
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program509
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        try
        {
            boolean bRet = fobj.isDirectory();

            if(bRet == true)
            {
                File List[] = fobj.listFiles();

                System.out.println("Number of files in that directory are : "+List.length);
            }
            
            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}