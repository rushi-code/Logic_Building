//remove extra whitespaces

import java.util.*;

class program368
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");

        System.out.println("Updated string is : "+str);
    }

}