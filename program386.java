//anagram string
//str1: Marvellous
//str2: osulMalver

import java.util.*;

class program386
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First String : ");
        String str1 = sobj.nextLine();


        System.out.println("Enter First String : ");
        String str2 = sobj.nextLine();

        if(str1.length()!= str2.length())
        {
            System.out.println("String are not anagram");
            return;
        }

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if(Arrays.equals(Arr,Brr))
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("String are not anagram");
        }

    }

}