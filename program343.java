//Accept the number from user and display that numbers using array

//Approach 1

import java.util.*;
class program343
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements: ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];


        System.out.println("Enter The Elements: ");
        int iCnt = 0;
        
        for(iCnt = 0; iCnt<iSize;iCnt++)
        {
            Arr[iCnt]= sobj.nextInt();
        }
        
        System.out.println("Elements of Array are :");

        for(iCnt = 0; iCnt<iSize;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        
        sobj.close();
    }
   
};

