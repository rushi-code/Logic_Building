//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and character, return first occurence of character (without break)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurence(char *str, char cValue)
{
    int iCount = 1;

    while((*str != '\0') && (*str != cValue))
    {
        str++;
        iCount++;   
    } 

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCount;
    }  
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

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First ocuurance of that character is at : %d\n",iRet);
    }
    
    return 0;
}