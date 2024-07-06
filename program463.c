//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 4
//  o/p : 1   2   3   4
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number of elements\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("\nEnd Of Main\n");
    
    return 0;
}