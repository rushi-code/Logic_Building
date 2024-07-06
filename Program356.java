///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Accept String Convert it into lowercase 
//
//////////////////////////////////////////////////////////////////////

import java.util.*;

class Program356
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sobj.nextLine();

        StringX obj =  new StringX();

        String sret = obj.StrLower(name);
        System.out.println("Converted String is : "+sret);


        sobj.close();
    }
}

class StringX
{
    public String StrLower(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt]+32);
            }
        }

        String ret = new String(Arr);

        return ret;
    }

}