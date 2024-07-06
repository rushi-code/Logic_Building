///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and reverse 
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program380
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();

        for(int iCnt = Arr.length-1; iCnt>=0; iCnt--)
        {
            System.out.print(Arr[iCnt]);
        }
        
        System.out.println();
        sobj.close();
    }
}