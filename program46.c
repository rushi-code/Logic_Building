///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and calculate power.
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CalculatePower(int iBase, int iIndex)
{
    int iResult = 1;
    int iCnt = 0;

    iCnt = 1;

    while(iCnt<=iIndex)
    {
        iResult = iResult * iBase;
        iCnt++;
    }

    return iResult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Base : \n");
    scanf("%d",&iValue1);

    printf("Enter Index : \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

    printf("Answer is : %d\n",iRet);

    return 0; 
}
