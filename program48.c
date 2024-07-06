///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and count digits 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0 ;

    while(iNo!= 0)
    {
        iDigit = iNo%10;

        iCnt++;

        iNo = iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("No. of Digits are %d\n",iRet);
    
    return 0; 
}
