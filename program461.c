//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 4
//  o/p :  *   *   *   *
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);  //Recursive call
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number of elements\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End Of Main\n");
    
    return 0;
}