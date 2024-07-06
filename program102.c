//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   7
//  o/p :   a   b   c   d   e   f   g
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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