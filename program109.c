//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   5
//  o/p :   1   2   3   4   5   5   4   3   2   1
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)  //Forwarded
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = iNo-1; iCnt >= 1; iCnt--)  //Backwarded
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