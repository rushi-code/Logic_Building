//////////////////////////////////////////////////////////////////////
//
//  Problem Statemet: 
//  i/p :   7
//  o/p :   #   #   #   #   #   #   #
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
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