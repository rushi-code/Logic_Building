///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and count odd digits
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0 ) //if((iDigit % 2) == 1 )
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
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue1);

    iRet = CountOdd(iValue1);

    printf("Frequency of odd digits in %d is : %d\n",iValue1,iRet);
    
    return 0; 
}