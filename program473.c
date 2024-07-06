//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: Calculate length of string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int strlenR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        strlenR(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenR(Arr);

    printf("Length of string is : %d\n",iRet);
    
    return 0;
}