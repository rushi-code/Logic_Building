//Accept the string from user and count small,capital letters
//charAt used
import java.util.*;
class program355
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(name);

        System.out.println("total small characters are "+iRet);

        iRet = obj.CountCapital(name);
        System.out.println("total capital characters are "+iRet);
        
    }  
}

class StringX
{
    public int CountSmall(String str)
    {
        
        int iCount = 0;

        for(int iCnt = 0; iCnt<str.length();iCnt++)
        {
            if((str.charAt(iCnt)>='a')&&(str.charAt(iCnt)<='z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
    public int CountCapital(String str)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt<str.length();iCnt++)
        {
            if((str.charAt(iCnt)>='A')&&(str.charAt(iCnt)<='Z'))
            
            {
                iCount++;
            }
        }
        return iCount;
    }
}



