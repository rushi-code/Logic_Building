///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and calculate power(typedef)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase, int iIndex)
{
    ULONG lResult = 1;
    int iCnt = 0;

    if((iBase < 0) || (iIndex < 0))
    {
        return 0;
    }

    for(iCnt = 1; iCnt<=iIndex; iCnt++)
    {
        lResult = lResult * iBase;
    }

    return lResult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    ULONG lRet = 0;

    printf("Enter Base : \n");
    scanf("%d",&iValue1);

    printf("Enter Index : \n");
    scanf("%d",&iValue2);

    lRet = CalculatePower(iValue1,iValue2);

    printf("Answer is : %ld\n",lRet);

    return 0; 
}
