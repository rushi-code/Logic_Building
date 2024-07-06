//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 4
//  o/p : 1   2   3   4
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter Number of elements\n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("End Of Main\n");
    
    return 0;
}