///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : File UnPacking
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program521
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];
        int iRet = 0;
        String HeaderStr;
        String Tokens[];

        System.out.println("----------- Marvellous Packer Unpacker ----------- ");

        System.out.println("UnPacking Actvity of the appication is started...");

        System.out.println("Enter the name of file which contains packed data : ");
        String PackFile = sobj.nextLine();

        try
        {
            File Packobj = new File(PackFile);

            FileInputStream inobj = new FileInputStream(Packobj);

            while((iRet = inobj.read(Header,0,100)) > 0)
            {
                HeaderStr = new String(Header);
                System.out.println(HeaderStr);

                Tokens = HeaderStr.split(" ");

                File newfileobj = new File(Tokens[0]);
                newfileobj.createNewFile();

                FileOutputStream outobj = new FileOutputStream(newfileobj);

                int FileSize = Integer.parseInt(Tokens[1]);
                byte Buffer[] = new byte[FileSize];

                inobj.read(Buffer, 0, FileSize);
                outobj.write(Buffer,0,FileSize);
            }
            
        }
        catch (Exception obj)
        {
            System.out.println("Exception Occured : "+obj);
        }

    }
}