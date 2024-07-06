//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String, Count whitespaces in string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpaces(Arr);

    printf("Total spaces are : %d\n",iRet);
    
    return 0;
}