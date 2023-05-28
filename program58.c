//checking frequency of given digit(8)  in number (using updater) 
#include<stdio.h>
#include<stdbool.h>
int  CountDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit= iNo%10;
        if(iDigit==8)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    
    return iCnt;
}

int  main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =CountDigit(iValue);
    printf("Freq of 8 is %d",iRet);
   
    return 0;
}