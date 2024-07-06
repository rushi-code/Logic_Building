///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and count freq of word given by user
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program375
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" "); 

        System.out.println("Enter the word that you want to search : ");
        String Word = sobj.nextLine();

        int iFreq = 0;

        for (int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt].equals(Word))
            {
                iFreq++;
            }
        }
        System.out.println("Frequency of word is : "+iFreq);
        
        sobj.close();
    }
}