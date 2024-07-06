//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and copy capital characters of that string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpycapX(char *src, char *dest)
{   
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
    
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strcpycapX(Arr, Brr);
    
    printf("String After Copy is : %s\n",Brr);
    
    return 0;
}