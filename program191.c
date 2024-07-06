//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String and concat no of letters specified by user
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{  
    while(*dest != '\0')
    {
        dest++;
    }
    
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        iLength--;

        if(iLength == 0)
        {
            break;
        }
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    int iNo = 0;
    char Brr[20] = "Demo";

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter number of letters that you want to concate it\n");
    scanf("%d",&iNo);

    strncatX(Arr, Brr, iNo);
    
    printf("String After concatination is : %s\n",Brr);
    
    return 0;
}