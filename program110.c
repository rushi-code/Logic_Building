//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   5
//  o/p :   -5  -4  -3  -2  -1
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt < 0; iCnt++) 
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iFreq = 0;

    printf("Enter the freq of symbol : \n");
    scanf("%d",&iFreq);

    Display(iFreq);

    return 0;
}