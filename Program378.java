///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and reverse word
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program378
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+", " ");

        str = str.trim();

        String Arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();
        
        for(String s : Arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append(word.reverse().append(" "));
        }
        System.out.println("Result is : "+output);
        
        sobj.close();
    }
}