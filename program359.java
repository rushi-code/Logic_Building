//Accept the string from user and convert it into lowercase,uppercase and toggle case (inline return)
import java.util.*;
class program359
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sret = obj.StrLower(name);
        System.out.println("Converted String : "+sret);


        sret = obj.StrUpper(name);
        System.out.println("Converted String : "+sret);

        sret = obj.StrToggle(name);
        System.out.println("Converted String : "+sret);
        
        
    }  
}

class StringX
{
    public String StrLower(String str)
    {
        //Step 1:Convert String to Array

        char Arr[] = str.toCharArray();

        //Step 2: Perform Opertions on Array

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        //Convert Array to string

        return new String(Arr);
    }

    public String StrUpper(String str)
    {
        //Step 1:Convert String to Array

        char Arr[] = str.toCharArray();

        //Step 2: Perform Opertions on Array

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] -32);
            }
        }
         //Step 3 :Convert Array to string
         return new String(Arr);
    }


        public String StrToggle(String str)
    {
        //Step 1:Convert String to Array

        char Arr[] = str.toCharArray();

        //Step 2: Perform Opertions on Array

        for(int iCnt = 0; iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] -32);
            }

            else if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] +32);
            }
        }

        //Step 3 :Convert Array to string
         return new String(Arr);
    }
       
}