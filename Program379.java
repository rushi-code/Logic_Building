///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String and reverse word
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program379
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
        
        for(String s : Arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append(word.reverse().append(" "));
        }

        String result = new String(output);
        result = result.trim();
        System.out.println("Result is :"+result);
        
        sobj.close();
    }
}