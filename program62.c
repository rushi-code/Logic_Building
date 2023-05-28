//checking total odd digits in given number

#include<stdio.h>
#include<stdbool.h>

int CountOddDigitFreq(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2!=0)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;   
}

int  main()
{
    int iValue1 = 0;
    
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    iRet =CountOddDigitFreq(iValue1);
    printf("total odd digits are %d\n",iRet);
   
    return 0;
}