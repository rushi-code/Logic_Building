///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and count INDIA word
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program374
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" "); 

        int iFreq = 0;

        for (int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt].equals("india"))
            {
                iFreq++;
            }
        }
        System.out.println("Frequency of india word is : "+iFreq);
        
        sobj.close();
    }
}