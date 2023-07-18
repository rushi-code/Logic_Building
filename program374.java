//split function (count how many time word occured)

import java.util.*;

class program374
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
        

        str = str.replaceAll("\\s+"," ");

        str = str.trim();

        String arr[] = str.split(" ");
        
        int iFreq = 0;
        for(int icnt = 0; icnt<arr.length; icnt++)
        {
            if(arr[icnt].equals("india"))
            {
                iFreq++;
            }
        }
        System.out.println("Freq of India word is : "+ iFreq);
        

    }

}