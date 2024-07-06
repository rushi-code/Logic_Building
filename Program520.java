///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : File UnPacking
//
//////////////////////////////////////////////////////////////////////

import java.util.*;
import java.io.*;

class Program520
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];

        System.out.println("----------- Marvellous Packer Unpacker ----------- ");

        System.out.println("UnPacking Actvity of the appication is started...");

        System.out.println("Enter the name of file which contains packed data : ");
        String PackFile = sobj.nextLine();

        try
        {
            File Packobj = new File(PackFile);

            FileInputStream inobj = new FileInputStream(Packobj);

            inobj.read(Header,0,100);
            String HeaderStr = new String(Header);
            System.out.println(HeaderStr);

            String Tokens[];
            Tokens = HeaderStr.split(" ");

            System.out.println("File Name : "+Tokens[0]);
            System.out.println("File Size : "+Tokens[1]);

            File newfileobj = new File(Tokens[0]);
            newfileobj.createNewFile();

            FileOutputStream outobj = new FileOutputStream(newfileobj);
            int FileSize = Integer.parseInt(Tokens[1]);

            byte Buffer[] = new byte[FileSize];

            inobj.read(Buffer, 0, FileSize);
            outobj.write(Buffer,0,FileSize);
        }
        catch (Exception obj)
        {
            System.out.println("Exception Occured : "+obj);
        }

    }
}