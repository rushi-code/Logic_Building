//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept character from user check whether it is capital or not (without use of ASCII value)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
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