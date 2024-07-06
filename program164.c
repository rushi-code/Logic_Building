//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String, Count digits in string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenDigitsX(Arr);

    printf("No. of digits are : %d\n",iRet);
    
    return 0;
}