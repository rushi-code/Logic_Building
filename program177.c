//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and edit that string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '*';
        }
        str++;
    } 
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);
    
    printf("String After Editing is : %s\n",Arr);
    
    return 0;
}