//accept number and return max digit from that number(optimization) 

#include<stdio.h>
#include<stdbool.h>
int MaximumDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo %10;
        if(iDigit>iMax)
        {
        iMax = iDigit;
        }
        
        if(iMax ==9) //(optimization)
        {
            break;
        }
       
        iNo = iNo /10;
    }
    return iMax;
}


int  main()
{
    int iValue = 0;
    
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =MaximumDigit(iValue);
    
    printf("Largest digit is %d\n",iRet);
    
   
    return 0;
}