//Accept the string from user and display it with length
import java.util.*;
class program350

{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");

        String name = sobj.nextLine();
        
        System.out.println("Your Name is "+name);
        System.out.println("Length of String is "+name.length());
    }
   
}



