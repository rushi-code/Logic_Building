//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   7
//  o/p :   A   B   C   D   E   F   G
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iFreq = 0;

    printf("Enter the freq of symbol : \n");
    scanf("%d",&iFreq);

    Display(iFreq);

    return 0;
}