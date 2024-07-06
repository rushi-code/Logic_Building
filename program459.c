//////////////////////////////////////////////////////////////////////
//
//  Problem Statement: 
//  i/p : 4
//  o/p :  *   *   *   *
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 0; 
    iCnt = 1;
    while(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    int iCnt = 1;

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
    
    return 0;
}