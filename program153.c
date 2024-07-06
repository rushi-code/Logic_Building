//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept character from user check whether it is capital or not
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
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

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("%c is capital letter\n",ch);
    }
    else
    {
        printf("%c is not capital letter\n",ch); 
    }

    return 0;
}