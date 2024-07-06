///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and check whether number is perfect or not
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0) 
    {
        iNo = -iNo;
    }
 
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  
    {
        if((iNo % iCnt)== 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

bool CheckPerfect(int iNo)
{
    int iResult = 0;

    iResult = SumFactors(iNo);

    if(iResult == iNo)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }

    else
    {
        printf("%d is not perfect number\n",iValue);
    }
    
    return 0;
}