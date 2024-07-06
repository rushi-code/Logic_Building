//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept character from user check whether it is digit or not
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter Character\n");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        printf("%c is digit\n",ch);
    }
    else
    {
        printf("%c is not digit\n",ch); 
    }

    return 0;
}