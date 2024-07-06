//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   7
//  o/p :   a   1   b   2   c   3   d   4   e   5   f   6   g   7
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t%d\t",ch,iCnt);
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