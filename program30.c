///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Accept number and check whether number is prime or not(with flag)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2; iCnt<=(iNo/2); iCnt++) 
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    
    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }

    else
    {
        printf("%d is not prime number\n",iValue);
    }
    
    return 0;
}

//Time Complexity : N/2 if number is prime number
//Time Complexity : x, where x is first factor that you got