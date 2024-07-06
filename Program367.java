///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and count frquency of each letter
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program367
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String str = sobj.nextLine();

        str = str.toLowerCase();

        str = str.replaceAll("\\s", "");

        char Arr[] = str.toCharArray();
        int Freq[] = new int[26];
        int iCnt = 0;

        for(char ch : Arr)
        {
            Freq[ch - 'a']++;
        }

        System.out.println("Frequency of each letter is : ");
        for(iCnt = 0; iCnt<Freq.length; iCnt++)
        {
            if(Freq[iCnt] != 0)
            {
                System.out.println("Frequency of "+(char)(iCnt+'a') + " is : "+Freq[iCnt]);
            }
        }
        
        sobj.close();
    }
}