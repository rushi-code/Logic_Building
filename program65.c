///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement :Accept number and Check whether it is pallindrome or not
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iReverse = (iReverse * 10) + iDigit;

        iNo = iNo/10;
    }
    
    if(iReverse == iTemp)
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

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is pallindrome number\n");
    }
    else
    {
        printf("It is not pallindrome number\n");
    }
    
    return 0; 
}