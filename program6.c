///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Check whether number is even or odd
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }

    else
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}