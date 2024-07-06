//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Calculate length of string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenI(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenI(Arr);

    printf("Length of string is : %d\n",iRet);
    
    return 0;
}