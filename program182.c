//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and edit that string (toggle using Gap)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggleX(char *str)
{
    int Gap = 'a' - 'A';
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    } 
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);
    
    printf("String After Editing is : %s\n",Arr);
    
    return 0;
}