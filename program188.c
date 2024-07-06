//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and reverse that string
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyrevX(char *src, char *dest)
{  
    int iLength  = 0; 
    while(*src != '\0')
    {
        src++; 
        iLength++;
    }

    src--;

    for( ; iLength != 0; iLength--)
    {
        *dest = *src;
        src--;
        dest++;
    }
    
    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strcpyrevX(Arr, Brr);
    
    printf("String After Copy is : %s\n",Brr);
    
    return 0;
}