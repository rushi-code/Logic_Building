///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : File Header Formation
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program511
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;

        try
        {
            boolean bRet = fobj.isDirectory();

            if(bRet == true)
            {
                File List[] = fobj.listFiles();

                for(int iCnt = 0; iCnt<List.length; iCnt++)
                {
                    Header = List[iCnt].getName() + " "+ List[iCnt].length();
                    System.out.println(Header);
                }
               
            }
              
        }
        catch(Exception iobj)
        {
            System.out.println("Exception Occured : "+iobj);
        }
    }
}