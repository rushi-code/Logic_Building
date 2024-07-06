///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number from user, count freq of 8
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFreq(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 8)
        {
            iCnt++;
        }

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

    iRet = CountFreq(iValue); 

    printf("Freq of 8 is : %d\n",iRet);
    
    return 0; 
}