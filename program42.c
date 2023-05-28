//factorial updater
#include<stdio.h>
#include<stdbool.h>
typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iResult = 1;

    if(iNo<0)
    {
        iNo =-iNo;
    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iResult = iResult *iCnt;
    }
    return iResult;
}

int main()
{
    int iValue = 0;
   ULONG iRet = 0;


    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result is %d\n",iRet);

    
    return 0;
}