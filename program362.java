//Accept the string from user remove whitespaces and return string
import java.util.*;
class program362
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX(); 
        String sret = obj.RemoveWhite(name);
        System.out.println("Result is : "+sret);
    }  
}

class StringX
{
    public String RemoveWhite(String str)
    {
        return str.replaceAll("\\s","");
    }
}