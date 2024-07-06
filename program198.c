//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept two strings and compare both strings
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{   
    for( ; ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2)) ;str1++, str2++);   // ; is important
    
    return ((*str1 == '\0') && (*str2 == '\0'));    // true or false
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter First String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Second String : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        printf("Both strings are identical\n");
    }
    else
    {
        printf("Both strings are not identical\n");
    }
    
    return 0;
}