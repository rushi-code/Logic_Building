//checking given digit  in number (taking digit from user )
#include<stdio.h>
#include<stdbool.h>

bool  CheckDigit(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if((iSearch<0)||(iSearch>9))
    {
       printf("Enter digit in range 0 to 9\n"); 
       return false;
    }

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit= iNo%10;
        if(iDigit==iSearch)
        {
            break;
        }
        iNo = iNo/10;
    }

    if(iDigit ==iSearch)
    {
        return true;
    }
    
    else
    {
        return false;
    }
    
}

int  main()
{
    int iValue1 = 0;
    int iValue2=0;
    bool bRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    printf("enter digit to check (0 to 9)\n");
    scanf("%d",&iValue2);

    bRet =CheckDigit(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("%d is present in %d\n",iValue1,iValue2);
    }
    else
    {
         printf("%d is not present in %d\n",iValue2,iValue1);
    }
   
    return 0;
}