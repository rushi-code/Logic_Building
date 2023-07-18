//count words 

import java.util.*;

class program371
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        

        str = str.replaceAll("\\s+"," ");

        str = str.trim();

        if(str.length()==0)
        {
            System.out.println("Number of words are 0\n");
            return;
        }

        int iFrequency = 0;

        for(int iCnt = 0; iCnt<str.length();iCnt++)
        {
            if(str.charAt(iCnt)==' ')
            {
                iFrequency++;
            }
        }
        System.out.println("Number of words are: "+ (iFrequency + 1));
    }

}