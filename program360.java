//Accept the string from user remove whitespaces and return string
import java.util.*;
class program360
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
        char Arr[] = str.toCharArray();

        char Brr[] = new char[Arr.length];

        int i = 0;
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]!=' ')
            {
                Brr[i] = Arr[iCnt];
                i++;
            }
        }
        return new String(Brr);
    }
}