///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Check Directory or and display files in directory
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program510
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

                for(int iCnt = 0; iCnt<List.length; iCnt++)
                {
                    System.out.println("File name : "+List[iCnt].getName()+ " File size : "+List[iCnt].length());
                }

                System.out.println("Number of files in that directory are : "+List.length);
            }
            
            
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}