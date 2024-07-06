//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and character, return last occurence of that character
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurence(char *str, char cValue)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCount;
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

    iRet = LastOccurence(Arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("Last ocuurance of that character is at : %d\n",iRet);
    }
    
    return 0;
}