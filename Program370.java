///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and count words
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program370
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        int iFreq = 0;

        for(int iCnt = 0; iCnt<str.length(); iCnt++)
        {
            if(str.charAt(iCnt) == ' ')
            {
                iFreq++;
            }
        }
        System.out.println("Total Words are : "+(iFreq+1));
        
        sobj.close();
    }
}