///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and count even digits
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
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

        if((iDigit % 2) == 0 )
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

    iRet = CountEven(iValue1);

    printf("Frequency of even digits in %d is : %d\n",iValue1,iRet);
    
    return 0; 
}