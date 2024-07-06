///////////////////////////////////////////////////////////////////////
//  
//  Problem Statement : Display Numbers Backward Direction
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DispalyB(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DispalyB(iValue);

    return 0; 
}
