///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and digit from user, count digit frequency
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFreq(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter Digits in between 0 to 9\n");
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == iSearch)
        {
            iCnt++;
        }
        
        iNo = iNo/10;
    }

    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Digit(0 to 9)\n");
    scanf("%d",&iValue2);

    iRet = CountFreq(iValue1, iValue2);

    printf("Frequency of %d in %d is : %d\n",iValue2,iValue1,iRet);

    return 0; 
}