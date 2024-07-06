///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and return avg of its digits
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

float DigitsAvg(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        iCount++;

        iNo = iNo/10;
    }

    return ((float)iSum / (float)(iCount));   //typecast
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    fRet = DigitsAvg(iValue);

    printf("Avereage of Digits is %.3f\n",fRet);

    return 0; 
}