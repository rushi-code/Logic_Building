///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and return largest word from string
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program376
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" "); 

        int iMax = 0;
        int iPos = 0;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt].length()>iMax )
            {
                iMax = Arr[iCnt].length();
                iPos = iCnt;
            }  
        }
        System.out.println("Largest word is : "+Arr[iPos]+ " with length = "+iMax);
        
        sobj.close();
    }
}