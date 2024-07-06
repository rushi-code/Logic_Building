//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and edit that string (toggle)
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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