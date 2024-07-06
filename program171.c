//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and character, return first occurence of character
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstOccurence(char *str, char cValue)
{
    int iCount = 1;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCount;
            break;
        }
        str++;
        iCount++;
    } 
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character\n");
    scanf(" %c",&ch);

    iRet = FirstOccurence(Arr,ch);
    printf("First ocuurance of that character is at : %d\n",iRet);

    return 0;
}