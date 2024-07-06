///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Check Directory or not
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program508
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
                System.out.println("It is a directory");
            }
            else
            {
                System.out.println("It is not a directory"); 
            }
            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}