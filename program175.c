//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: Accept String , count small and capital characters
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Freq(char *str)
{
    int iCap = 0;
    int iSmall = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        str++;
    } 
    printf("Total small letters are %d\n",iSmall);
    printf("Total capital letters are %d\n",iCap);

}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Freq(Arr);
    
    return 0;
}