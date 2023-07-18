//split function (count how many time word occured)

import java.util.*;

class program379
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sobj.nextLine();
       
        str.replaceAll("\\s+"," ");

        str = str.trim();

        String arr[]=str.split(" ");

        StringBuffer output = new StringBuffer();
       
        for(String s: arr)
        {
            StringBuffer word = new StringBuffer(s);
            output.append((word.reverse()).append(" "));
        }
        String Result = new String(output);
        Result = Result.trim();
        System.out.println("Result is : "+Result);
    }
    

}