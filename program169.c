//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and character, count character ocuurence 
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str ==  cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&ch);
  
    iRet = CountChar(Arr,ch);

    printf("Number of occurence of %c is : %d\n",ch,iRet);
    
    return 0;
}